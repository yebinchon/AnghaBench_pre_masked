
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpseci_tx_queue_attr {int priority; int fqid; } ;
struct dpseci_rsp_get_tx_queue {int priority; int fqid; } ;
struct dpseci_cmd_queue {int queue; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_3(struct fsl_mc_io *VAR_1, u32 VAR_2, u16 VAR_3,
   u8 VAR_4, struct dpseci_tx_queue_attr *VAR_5)
{
 struct fsl_mc_command VAR_6 = { 0 };
 struct dpseci_cmd_queue *VAR_7;
 struct dpseci_rsp_get_tx_queue *VAR_8;
 int VAR_9;

 VAR_6.header = FUNC_1(VAR_0,
       VAR_2,
       VAR_3);
 VAR_7 = (struct dpseci_cmd_queue *)VAR_6.params;
 VAR_7->queue = VAR_4;
 VAR_9 = FUNC_2(VAR_1, &VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_8 = (struct dpseci_rsp_get_tx_queue *)VAR_6.params;
 VAR_5->fqid = FUNC_0(VAR_8->fqid);
 VAR_5->priority = VAR_8->priority;

 return 0;
}
