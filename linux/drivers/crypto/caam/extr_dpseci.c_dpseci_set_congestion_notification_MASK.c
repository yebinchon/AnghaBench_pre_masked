
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct TYPE_2__ {int dest_type; int priority; int dest_id; } ;
struct dpseci_congestion_notification_cfg {int threshold_exit; int threshold_entry; int message_ctx; int message_iova; int units; TYPE_1__ dest_cfg; int notification_mode; } ;
struct dpseci_cmd_congestion_notification {void* threshold_exit; void* threshold_entry; void* message_ctx; void* message_iova; int options; int priority; int notification_mode; void* dest_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_6(struct fsl_mc_io *VAR_3, u32 VAR_4,
 u16 VAR_5, const struct dpseci_congestion_notification_cfg *VAR_6)
{
 struct fsl_mc_command VAR_7 = { 0 };
 struct dpseci_cmd_congestion_notification *VAR_8;

 VAR_7.header = FUNC_4(
   VAR_2,
   VAR_4,
   VAR_5);
 VAR_8 = (struct dpseci_cmd_congestion_notification *)VAR_7.params;
 VAR_8->dest_id = FUNC_1(VAR_6->dest_cfg.dest_id);
 VAR_8->notification_mode = FUNC_0(VAR_6->notification_mode);
 VAR_8->priority = VAR_6->dest_cfg.priority;
 FUNC_3(VAR_8->options, VAR_0,
    VAR_6->dest_cfg.dest_type);
 FUNC_3(VAR_8->options, VAR_1, VAR_6->units);
 VAR_8->message_iova = FUNC_2(VAR_6->message_iova);
 VAR_8->message_ctx = FUNC_2(VAR_6->message_ctx);
 VAR_8->threshold_entry = FUNC_1(VAR_6->threshold_entry);
 VAR_8->threshold_exit = FUNC_1(VAR_6->threshold_exit);

 return FUNC_5(VAR_3, &VAR_7);
}
