
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct hfi1_devdata {int synth_stats_timer; int update_cntr_work; int update_cntr_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hfi1_devdata* VAR_2 ;
 struct hfi1_devdata* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_5)
{
 struct hfi1_devdata *VAR_6 = FUNC_0(VAR_6, VAR_5, VAR_4);

 FUNC_2(VAR_6->update_cntr_wq, &VAR_6->update_cntr_work);
 FUNC_1(&VAR_6->synth_stats_timer, VAR_3 + VAR_0 * VAR_1);
}
