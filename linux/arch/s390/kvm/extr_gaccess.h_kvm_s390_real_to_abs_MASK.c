
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static inline unsigned long FUNC_1(struct kvm_vcpu *VAR_1,
       unsigned long VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 < 2 * VAR_0)
  VAR_2 += VAR_3;
 else if (VAR_2 >= VAR_3 && VAR_2 < VAR_3 + 2 * VAR_0)
  VAR_2 -= VAR_3;
 return VAR_2;
}
