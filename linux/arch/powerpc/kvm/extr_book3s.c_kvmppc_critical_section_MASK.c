
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct kvm_vcpu {int kvm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 int FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static inline bool FUNC_4(struct kvm_vcpu *VAR_2)
{
 ulong VAR_3;
 ulong VAR_4;
 bool VAR_5;

 if (FUNC_0(VAR_2->kvm))
  return 0;

 VAR_3 = FUNC_1(VAR_2);
 VAR_4 = FUNC_2(VAR_2, 1);


 if (!(FUNC_3(VAR_2) & VAR_1)) {
  VAR_3 &= 0xffffffff;
  VAR_4 &= 0xffffffff;
 }


 VAR_5 = (VAR_3 == VAR_4);

 VAR_5 = VAR_5 && !(FUNC_3(VAR_2) & VAR_0);

 return VAR_5;
}
