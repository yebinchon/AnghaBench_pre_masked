
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct cc_req_mgr_handle {scalar_t__ hw_queue_size; scalar_t__ min_free_hw_slots; int compl_desc; int dummy_comp_buff_dma; int dummy_comp_buff; scalar_t__ max_used_sw_slots; int comptask; int compwork; int workq; int backlog; int bl_lock; int hw_lock; } ;
struct cc_drvdata {struct cc_req_mgr_handle* request_mgr_handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct cc_drvdata*,int ) ;
 int FUNC_4 (struct cc_drvdata*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct device*,char*,...) ;
 int FUNC_7 (struct device*,char*,...) ;
 int FUNC_8 (struct device*,int,int *,int ) ;
 struct device* FUNC_9 (struct cc_drvdata*) ;
 int FUNC_10 (int *) ;
 struct cc_req_mgr_handle* FUNC_11 (int,int ) ;
 int FUNC_12 (int *,int ,int) ;
 int FUNC_13 (int *,int ,int,int ,int) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (struct cc_drvdata*,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ,unsigned long) ;

int FUNC_18(struct cc_drvdata *VAR_8)
{
 struct cc_req_mgr_handle *VAR_9;
 struct device *VAR_10 = FUNC_9(VAR_8);
 int VAR_11 = 0;

 VAR_9 = FUNC_11(sizeof(*VAR_9), VAR_3);
 if (!VAR_9) {
  VAR_11 = -VAR_2;
  goto req_mgr_init_err;
 }

 VAR_8->request_mgr_handle = VAR_9;

 FUNC_16(&VAR_9->hw_lock);
 FUNC_16(&VAR_9->bl_lock);
 FUNC_2(&VAR_9->backlog);
 FUNC_6(VAR_10, "Initializing completion tasklet\n");
 FUNC_17(&VAR_9->comptask, VAR_6,
       (unsigned long)VAR_8);

 VAR_9->hw_queue_size = FUNC_3(VAR_8,
          FUNC_0(VAR_1));
 FUNC_6(VAR_10, "hw_queue_size=0x%08X\n", VAR_9->hw_queue_size);
 if (VAR_9->hw_queue_size < VAR_4) {
  FUNC_7(VAR_10, "Invalid HW queue size = %u (Min. required is %u)\n",
   VAR_9->hw_queue_size, VAR_4);
  VAR_11 = -VAR_2;
  goto req_mgr_init_err;
 }
 VAR_9->min_free_hw_slots = VAR_9->hw_queue_size;
 VAR_9->max_used_sw_slots = 0;


 VAR_9->dummy_comp_buff =
  FUNC_8(VAR_10, sizeof(u32),
       &VAR_9->dummy_comp_buff_dma,
       VAR_3);
 if (!VAR_9->dummy_comp_buff) {
  FUNC_7(VAR_10, "Not enough memory to allocate DMA (%zu) dropped buffer\n",
   sizeof(u32));
  VAR_11 = -VAR_2;
  goto req_mgr_init_err;
 }


 FUNC_10(&VAR_9->compl_desc);
 FUNC_12(&VAR_9->compl_desc, 0, sizeof(u32));
 FUNC_13(&VAR_9->compl_desc, VAR_9->dummy_comp_buff_dma,
        sizeof(u32), VAR_5, 1);
 FUNC_14(&VAR_9->compl_desc, VAR_0);
 FUNC_15(VAR_8, &VAR_9->compl_desc);

 return 0;

req_mgr_init_err:
 FUNC_4(VAR_8);
 return VAR_11;
}
