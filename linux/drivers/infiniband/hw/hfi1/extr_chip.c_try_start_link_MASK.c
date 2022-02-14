
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_pportdata {scalar_t__ qsfp_retry_count; int start_link_work; int link_wq; int dd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct hfi1_pportdata*) ;
 scalar_t__ FUNC_5 (struct hfi1_pportdata*) ;

__attribute__((used)) static void FUNC_6(struct hfi1_pportdata *VAR_2)
{
 if (FUNC_5(VAR_2)) {

  if (VAR_2->qsfp_retry_count >= VAR_0) {
   FUNC_0(VAR_2->dd, "QSFP not responding, giving up\n");
   return;
  }
  FUNC_1(VAR_2->dd,
       "QSFP not responding, waiting and retrying %d\n",
       (int)VAR_2->qsfp_retry_count);
  VAR_2->qsfp_retry_count++;
  FUNC_3(VAR_2->link_wq, &VAR_2->start_link_work,
       FUNC_2(VAR_1));
  return;
 }
 VAR_2->qsfp_retry_count = 0;

 FUNC_4(VAR_2);
}
