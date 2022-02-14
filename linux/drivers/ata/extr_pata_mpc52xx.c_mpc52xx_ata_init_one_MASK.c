
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpc52xx_ata_priv {int ata_irq; TYPE_1__* ata_regs; } ;
struct device {int dummy; } ;
struct ata_ioports {int * command_addr; int * status_addr; int * device_addr; int * lbah_addr; int * lbam_addr; int * lbal_addr; int * nsect_addr; int * feature_addr; int * error_addr; int * data_addr; int * ctl_addr; int * altstatus_addr; int * cmd_addr; } ;
struct ata_port {int mwdma_mask; int udma_mask; struct ata_ioports ioaddr; int * ops; int pio_mask; int flags; } ;
struct ata_host {struct mpc52xx_ata_priv* private_data; struct ata_port** ports; } ;
struct TYPE_2__ {int tf_command; int tf_dev_head; int tf_cyl_high; int tf_cyl_low; int tf_sec_num; int tf_sec_count; int tf_features; int tf_data; int tf_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ata_host*,int ,int ,int ,int *) ;
 struct ata_host* FUNC_1 (struct device*,int) ;
 int FUNC_2 (struct ata_port*,char*,unsigned long) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct device *VAR_6,
    struct mpc52xx_ata_priv *VAR_7,
    unsigned long VAR_8,
    int VAR_9, int VAR_10)
{
 struct ata_host *VAR_11;
 struct ata_port *VAR_12;
 struct ata_ioports *VAR_13;

 VAR_11 = FUNC_1(VAR_6, 1);
 if (!VAR_11)
  return -VAR_2;

 VAR_12 = VAR_11->ports[0];
 VAR_12->flags |= VAR_0;
 VAR_12->pio_mask = VAR_1;
 VAR_12->mwdma_mask = VAR_9;
 VAR_12->udma_mask = VAR_10;
 VAR_12->ops = &VAR_4;
 VAR_11->private_data = VAR_7;

 VAR_13 = &VAR_12->ioaddr;
 VAR_13->cmd_addr = ((void*)0);
 VAR_13->altstatus_addr = &VAR_7->ata_regs->tf_control;
 VAR_13->ctl_addr = &VAR_7->ata_regs->tf_control;
 VAR_13->data_addr = &VAR_7->ata_regs->tf_data;
 VAR_13->error_addr = &VAR_7->ata_regs->tf_features;
 VAR_13->feature_addr = &VAR_7->ata_regs->tf_features;
 VAR_13->nsect_addr = &VAR_7->ata_regs->tf_sec_count;
 VAR_13->lbal_addr = &VAR_7->ata_regs->tf_sec_num;
 VAR_13->lbam_addr = &VAR_7->ata_regs->tf_cyl_low;
 VAR_13->lbah_addr = &VAR_7->ata_regs->tf_cyl_high;
 VAR_13->device_addr = &VAR_7->ata_regs->tf_dev_head;
 VAR_13->status_addr = &VAR_7->ata_regs->tf_command;
 VAR_13->command_addr = &VAR_7->ata_regs->tf_command;

 FUNC_2(VAR_12, "ata_regs 0x%lx", VAR_8);


 return FUNC_0(VAR_11, VAR_7->ata_irq, VAR_3, 0,
     &VAR_5);
}
