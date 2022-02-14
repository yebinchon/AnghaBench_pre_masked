
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static bool FUNC_1(struct kvm_vcpu *VAR_9, u64 VAR_10)
{
 if (VAR_10 & VAR_0 && !FUNC_0(VAR_9, VAR_5))
  return 0;

 if (VAR_10 & VAR_4 && !FUNC_0(VAR_9, VAR_8))
  return 0;

 if (VAR_10 & (VAR_2 | VAR_1) &&
     !FUNC_0(VAR_9, VAR_6))
  return 0;

 if (VAR_10 & VAR_3 && !FUNC_0(VAR_9, VAR_7))
  return 0;

 return 1;

}
