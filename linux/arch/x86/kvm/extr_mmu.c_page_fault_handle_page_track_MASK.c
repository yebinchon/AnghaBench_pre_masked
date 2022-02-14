
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
typedef int gfn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(struct kvm_vcpu *VAR_4,
      u32 VAR_5, gfn_t VAR_6)
{
 if (FUNC_1(VAR_5 & VAR_2))
  return 0;

 if (!(VAR_5 & VAR_1) ||
       !(VAR_5 & VAR_3))
  return 0;





 if (FUNC_0(VAR_4, VAR_6, VAR_0))
  return 1;

 return 0;
}
