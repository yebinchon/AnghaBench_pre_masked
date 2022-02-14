
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_policy_ctl {int ac_bit; int atl_bit; int go_bit; } ;
struct bcm_lvm_en {int bit; } ;
struct ccu_policy {struct bcm_policy_ctl control; struct bcm_lvm_en enable; } ;


 int FUNC_0 (int ,char*,char const*) ;

__attribute__((used)) static bool
FUNC_1(struct ccu_policy *VAR_0, const char *VAR_1)
{
 struct bcm_lvm_en *VAR_2 = &VAR_0->enable;
 struct bcm_policy_ctl *VAR_3;

 if (!FUNC_0(VAR_2->bit, "policy enable", VAR_1))
  return 0;

 VAR_3 = &VAR_0->control;
 if (!FUNC_0(VAR_3->go_bit, "policy control GO", VAR_1))
  return 0;

 if (!FUNC_0(VAR_3->atl_bit, "policy control ATL", VAR_1))
  return 0;

 if (!FUNC_0(VAR_3->ac_bit, "policy control AC", VAR_1))
  return 0;

 return 1;
}
