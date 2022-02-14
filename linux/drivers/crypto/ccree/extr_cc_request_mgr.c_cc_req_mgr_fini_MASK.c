
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct cc_req_mgr_handle {int comptask; int workq; scalar_t__ max_used_sw_slots; scalar_t__ min_free_hw_slots; scalar_t__ hw_queue_size; scalar_t__ dummy_comp_buff_dma; int dummy_comp_buff; } ;
struct cc_drvdata {struct cc_req_mgr_handle* request_mgr_handle; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,scalar_t__) ;
 int FUNC_2 (struct device*,int,int ,scalar_t__) ;
 struct device* FUNC_3 (struct cc_drvdata*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct cc_req_mgr_handle*) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct cc_drvdata *VAR_0)
{
 struct cc_req_mgr_handle *VAR_1 = VAR_0->request_mgr_handle;
 struct device *VAR_2 = FUNC_3(VAR_0);

 if (!VAR_1)
  return;

 if (VAR_1->dummy_comp_buff_dma) {
  FUNC_2(VAR_2, sizeof(u32), VAR_1->dummy_comp_buff,
      VAR_1->dummy_comp_buff_dma);
 }

 FUNC_1(VAR_2, "max_used_hw_slots=%d\n", (VAR_1->hw_queue_size -
      VAR_1->min_free_hw_slots));
 FUNC_1(VAR_2, "max_used_sw_slots=%d\n", VAR_1->max_used_sw_slots);






 FUNC_6(&VAR_1->comptask);

 FUNC_5(VAR_1);
 VAR_0->request_mgr_handle = ((void*)0);
}
