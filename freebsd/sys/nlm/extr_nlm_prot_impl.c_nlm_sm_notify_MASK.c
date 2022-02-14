
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int sysid ;
struct nlm_sm_status {int state; int priv; int mon_name; } ;
struct nlm_host {int dummy; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *,int *,int) ;
 struct nlm_host* FUNC_2 (int ) ;
 int FUNC_3 (struct nlm_host*,int ) ;
 int FUNC_4 (struct nlm_host*) ;

void
FUNC_5(struct nlm_sm_status *VAR_0)
{
 uint32_t VAR_1;
 struct nlm_host *VAR_2;

 FUNC_0(3, "nlm_sm_notify(): mon_name = %s\n", VAR_0->mon_name);
 FUNC_1(&VAR_1, &VAR_0->priv, sizeof(VAR_1));
 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_3(VAR_2, VAR_0->state);
  FUNC_4(VAR_2);
 }
}
