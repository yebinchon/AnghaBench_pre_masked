
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct TYPE_2__ {int dest_type; int priority; int dest_id; } ;
struct dpseci_rx_queue_cfg {int order_preservation_en; int options; int user_ctx; TYPE_1__ dest_cfg; } ;
struct dpseci_cmd_queue {int order_preservation_en; void* options; int user_ctx; int dest_type; int queue; int priority; void* dest_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_5(struct fsl_mc_io *VAR_3, u32 VAR_4, u16 VAR_5,
   u8 VAR_6, const struct dpseci_rx_queue_cfg *VAR_7)
{
 struct fsl_mc_command VAR_8 = { 0 };
 struct dpseci_cmd_queue *VAR_9;

 VAR_8.header = FUNC_3(VAR_1,
       VAR_4,
       VAR_5);
 VAR_9 = (struct dpseci_cmd_queue *)VAR_8.params;
 VAR_9->dest_id = FUNC_0(VAR_7->dest_cfg.dest_id);
 VAR_9->priority = VAR_7->dest_cfg.priority;
 VAR_9->queue = VAR_6;
 FUNC_2(VAR_9->dest_type, VAR_0,
    VAR_7->dest_cfg.dest_type);
 VAR_9->user_ctx = FUNC_1(VAR_7->user_ctx);
 VAR_9->options = FUNC_0(VAR_7->options);
 FUNC_2(VAR_9->order_preservation_en, VAR_2,
    VAR_7->order_preservation_en);

 return FUNC_4(VAR_3, &VAR_8);
}
