
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int address_lo; int address_hi; int data; } ;
struct msi_desc {int irq; TYPE_1__ msg; } ;
struct fsl_mc_device_irq {int dev_irq_index; struct msi_desc* msi_desc; struct fsl_mc_device* mc_dev; } ;
struct TYPE_4__ {int id; int type; } ;
struct fsl_mc_device {int dev; TYPE_2__ obj_desc; int mc_handle; int mc_io; } ;
struct dprc_irq_cfg {int paddr; int irq_num; int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int,int ,int ,struct dprc_irq_cfg*) ;
 int FUNC_2 (int ,int,int ,int ,int ,int ,struct dprc_irq_cfg*) ;

__attribute__((used)) static void FUNC_3(struct fsl_mc_device *VAR_2,
       struct fsl_mc_device_irq *VAR_3)
{
 int VAR_4;
 struct fsl_mc_device *VAR_5 = VAR_3->mc_dev;
 struct msi_desc *VAR_6 = VAR_3->msi_desc;
 struct dprc_irq_cfg VAR_7;






 if (VAR_6->msg.address_lo == 0x0 && VAR_6->msg.address_hi == 0x0)
  return;

 if (!VAR_5)
  return;

 VAR_7.paddr = ((u64)VAR_6->msg.address_hi << 32) |
   VAR_6->msg.address_lo;
 VAR_7.val = VAR_6->msg.data;
 VAR_7.irq_num = VAR_6->irq;

 if (VAR_5 == VAR_2) {



  VAR_4 = FUNC_1(VAR_2->mc_io,
         VAR_0 | VAR_1,
         VAR_2->mc_handle,
         VAR_3->dev_irq_index,
         &VAR_7);
  if (VAR_4 < 0) {
   FUNC_0(&VAR_5->dev,
    "dprc_set_irq() failed: %d\n", VAR_4);
  }
 } else {



  VAR_4 = FUNC_2(VAR_2->mc_io,
      VAR_0 | VAR_1,
      VAR_2->mc_handle,
      VAR_5->obj_desc.type,
      VAR_5->obj_desc.id,
      VAR_3->dev_irq_index,
      &VAR_7);
  if (VAR_4 < 0) {
   FUNC_0(&VAR_5->dev,
    "dprc_obj_set_irq() failed: %d\n", VAR_4);
  }
 }
}
