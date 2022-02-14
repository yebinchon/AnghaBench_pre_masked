
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct request {int tag; } ;
struct mtip_port {int flags; int* cmds_to_issue; struct mtip_cmd_hdr* command_list; } ;
struct mtip_cmd_hdr {scalar_t__ byte_count; void* opts; void* ctbau; void* ctba; } ;
struct mtip_cmd {unsigned int scatter_ents; int unaligned; int command_dma; int direction; struct host_to_dev_fis* command; int retries; int sg; } ;
struct host_to_dev_fis {int type; int opts; int lba_low; int lba_mid; int lba_hi; int lba_low_ex; int lba_mid_ex; int lba_hi_ex; int device; unsigned int features; unsigned int features_ex; int sect_count; scalar_t__ res3; scalar_t__ res2; scalar_t__ control; scalar_t__ sect_cnt_ex; int command; } ;
struct driver_data {struct mtip_port* port; TYPE_1__* pdev; } ;
struct blk_mq_hw_ctx {int queue; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned int FUNC_0 (int ,struct request*,int ) ;
 int FUNC_1 (struct request*) ;
 unsigned int FUNC_2 (struct request*) ;
 void* FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (int *,int ,unsigned int,int) ;
 int FUNC_5 (struct driver_data*,struct mtip_cmd*,unsigned int) ;
 int FUNC_6 (struct mtip_port*,int) ;
 int FUNC_7 (int*) ;
 scalar_t__ FUNC_8 (struct request*) ;
 int FUNC_9 (int,int*) ;
 scalar_t__ FUNC_10 (int ,int*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct driver_data *VAR_10, struct request *VAR_11,
         struct mtip_cmd *VAR_12,
         struct blk_mq_hw_ctx *VAR_13)
{
 struct mtip_cmd_hdr *VAR_14 =
  VAR_10->port->command_list + sizeof(struct mtip_cmd_hdr) * VAR_11->tag;
 struct host_to_dev_fis *VAR_15;
 struct mtip_port *VAR_16 = VAR_10->port;
 int VAR_17 = FUNC_8(VAR_11) == VAR_9 ? VAR_3 : VAR_4;
 u64 VAR_18 = FUNC_1(VAR_11);
 unsigned int VAR_19 = FUNC_2(VAR_11);
 unsigned int VAR_20;


 VAR_20 = FUNC_0(VAR_13->queue, VAR_11, VAR_12->sg);
 VAR_20 = FUNC_4(&VAR_10->pdev->dev, VAR_12->sg, VAR_20, VAR_17);

 FUNC_7(&VAR_16->flags);

 VAR_12->scatter_ents = VAR_20;





 VAR_12->retries = VAR_5;


 VAR_15 = VAR_12->command;
 VAR_15->type = 0x27;
 VAR_15->opts = 1 << 7;
 if (VAR_17 == VAR_3)
  VAR_15->command = VAR_1;
 else
  VAR_15->command = VAR_2;
 VAR_15->lba_low = VAR_18 & 0xFF;
 VAR_15->lba_mid = (VAR_18 >> 8) & 0xFF;
 VAR_15->lba_hi = (VAR_18 >> 16) & 0xFF;
 VAR_15->lba_low_ex = (VAR_18 >> 24) & 0xFF;
 VAR_15->lba_mid_ex = (VAR_18 >> 32) & 0xFF;
 VAR_15->lba_hi_ex = (VAR_18 >> 40) & 0xFF;
 VAR_15->device = 1 << 6;
 VAR_15->features = VAR_19 & 0xFF;
 VAR_15->features_ex = (VAR_19 >> 8) & 0xFF;
 VAR_15->sect_count = ((VAR_11->tag << 3) | (VAR_11->tag >> 5));
 VAR_15->sect_cnt_ex = 0;
 VAR_15->control = 0;
 VAR_15->res2 = 0;
 VAR_15->res3 = 0;
 FUNC_5(VAR_10, VAR_12, VAR_20);

 if (FUNC_11(VAR_12->unaligned))
  VAR_15->device |= 1 << 7;


 VAR_14->ctba = FUNC_3(VAR_12->command_dma & 0xFFFFFFFF);
 if (FUNC_10(VAR_6, &VAR_10->port->flags))
  VAR_14->ctbau = FUNC_3((VAR_12->command_dma >> 16) >> 16);
 VAR_14->opts = FUNC_3((VAR_20 << 16) | 5 | VAR_0);
 VAR_14->byte_count = 0;

 VAR_12->direction = VAR_17;





 if (FUNC_11(VAR_16->flags & VAR_8)) {
  FUNC_9(VAR_11->tag, VAR_16->cmds_to_issue);
  FUNC_9(VAR_7, &VAR_16->flags);
  return;
 }


 FUNC_6(VAR_16, VAR_11->tag);
}
