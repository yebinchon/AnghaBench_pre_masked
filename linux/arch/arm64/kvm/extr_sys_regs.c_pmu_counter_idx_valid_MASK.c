
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static bool FUNC_2(struct kvm_vcpu *VAR_4, u64 VAR_5)
{
 u64 VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_4, VAR_3);
 VAR_7 = (VAR_6 >> VAR_2) & VAR_1;
 if (VAR_5 >= VAR_7 && VAR_5 != VAR_0) {
  FUNC_1(VAR_4);
  return 0;
 }

 return 1;
}
