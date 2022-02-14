
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ssp_data {int fw_dl_state; scalar_t__ timeout_cnt; scalar_t__ com_fail_cnt; int wdt_timer; int work_wdt; } ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct ssp_data* VAR_3 ;
 struct ssp_data* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_7)
{
 struct ssp_data *VAR_8 = FUNC_0(VAR_8, VAR_7, VAR_6);

 switch (VAR_8->fw_dl_state) {
 case 129:
 case 130:
 case 128:
  goto _mod;
 }

 if (VAR_8->timeout_cnt > VAR_1 ||
     VAR_8->com_fail_cnt > VAR_0)
  FUNC_3(VAR_5, &VAR_8->work_wdt);
_mod:
 FUNC_1(&VAR_8->wdt_timer, VAR_4 + FUNC_2(VAR_2));
}
