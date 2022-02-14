
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_pportdata {int freeze_work; int offline_disabled_reason; int start_link_work; int qsfp_retry_count; scalar_t__ link_enabled; scalar_t__ driver_link_ready; struct hfi1_devdata* dd; } ;
struct hfi1_devdata {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hfi1_devdata*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct hfi1_pportdata*,int ,int ,int ) ;
 int FUNC_6 (struct hfi1_pportdata*,int ) ;

void FUNC_7(struct hfi1_pportdata *VAR_4)
{
 struct hfi1_devdata *VAR_5 = VAR_4->dd;
 VAR_4->driver_link_ready = 0;
 VAR_4->link_enabled = 0;

 VAR_4->qsfp_retry_count = VAR_1;
 FUNC_4(&VAR_4->start_link_work);
 FUNC_1(&VAR_4->start_link_work);

 VAR_4->offline_disabled_reason =
   FUNC_0(VAR_2);
 FUNC_5(VAR_4, VAR_2, 0,
        VAR_2);
 FUNC_6(VAR_4, VAR_0);


 FUNC_3(VAR_5, VAR_3);
 FUNC_2(&VAR_4->freeze_work);
}
