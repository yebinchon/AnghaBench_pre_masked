
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
typedef unsigned long gpa_t ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static inline unsigned long FUNC_2(struct kvm_vcpu *VAR_3, gpa_t VAR_4)
{
 FUNC_0((VAR_1 & VAR_0) != 0);

 return FUNC_1(VAR_3, VAR_2)
        ? VAR_4 & VAR_1
        : 0;
}
