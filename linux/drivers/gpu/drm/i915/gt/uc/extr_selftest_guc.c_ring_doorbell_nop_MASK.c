
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc_client {int use_nop_wqi; int doorbell_id; int wq_lock; } ;
struct guc_process_desc {scalar_t__ wq_status; int tail; int head; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 struct guc_process_desc* FUNC_1 (struct intel_guc_client*) ;
 int FUNC_2 (struct intel_guc_client*) ;
 int FUNC_3 (struct intel_guc_client*,int ,int ,int ,int ) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct intel_guc_client *VAR_2)
{
 struct guc_process_desc *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 VAR_2->use_nop_wqi = 1;

 FUNC_5(&VAR_2->wq_lock);

 FUNC_3(VAR_2, 0, 0, 0, 0);
 FUNC_2(VAR_2);

 FUNC_6(&VAR_2->wq_lock);

 VAR_2->use_nop_wqi = 0;




 VAR_4 = FUNC_7(FUNC_0(VAR_3->head) == FUNC_0(VAR_3->tail), 10);
 if (VAR_4) {
  FUNC_4("doorbell %u ring failed!\n", VAR_2->doorbell_id);
  return -VAR_0;
 }

 if (VAR_3->wq_status != VAR_1) {
  FUNC_4("doorbell %u ring put WQ in bad state (%u)!\n",
         VAR_2->doorbell_id, VAR_3->wq_status);
  return -VAR_0;
 }

 return 0;
}
