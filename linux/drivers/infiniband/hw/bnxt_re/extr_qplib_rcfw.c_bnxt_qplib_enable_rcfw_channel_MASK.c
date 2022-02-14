
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct cmdq_init {void* creq_ring_id; void* cmdq_size_cmdq_lvl; int cmdq_pbl; } ;
struct TYPE_6__ {int level; TYPE_2__* pbl; } ;
struct bnxt_qplib_rcfw {int cmdq_depth; int bmap_size; int cmdq_bar_reg; int creq_bar_reg; int (* aeq_handler ) (struct bnxt_qplib_rcfw*,void*,void*) ;int creq_ring_id; int * cmdq_bar_reg_iomem; TYPE_3__ cmdq; TYPE_1__* pdev; int waitq; scalar_t__ creq_func_event_processed; scalar_t__ creq_qp_event_processed; void* creq_bar_reg_iomem; int cmdq_bar_reg_trig_off; int cmdq_bar_reg_prod_off; int cmdq_bitmap; int flags; scalar_t__ seq_num; } ;
typedef scalar_t__ resource_size_t ;
typedef int init ;
struct TYPE_5__ {int * pg_map_arr; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int *,struct cmdq_init*,int) ;
 int FUNC_2 (struct bnxt_qplib_rcfw*) ;
 int FUNC_3 (struct bnxt_qplib_rcfw*,int,int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,int ) ;
 scalar_t__ FUNC_11 (struct pci_dev*,int) ;
 int FUNC_12 (int ,int *) ;

int FUNC_13(struct pci_dev *VAR_15,
       struct bnxt_qplib_rcfw *VAR_16,
       int VAR_17,
       int VAR_18, int VAR_19,
       int (*VAR_20)(struct bnxt_qplib_rcfw *,
            void *, void *))
{
 resource_size_t VAR_21;
 struct cmdq_init VAR_22;
 u16 VAR_23;
 int VAR_24;


 VAR_16->seq_num = 0;
 FUNC_12(VAR_5, &VAR_16->flags);
 VAR_23 = FUNC_0(VAR_16->cmdq_depth) * sizeof(unsigned long);
 VAR_16->cmdq_bitmap = FUNC_10(VAR_23, VAR_6);
 if (!VAR_16->cmdq_bitmap)
  return -VAR_4;
 VAR_16->bmap_size = VAR_23;


 VAR_16->cmdq_bar_reg = VAR_10;
 VAR_21 = FUNC_11(VAR_15, VAR_16->cmdq_bar_reg);
 if (!VAR_21)
  return -VAR_4;

 VAR_16->cmdq_bar_reg_iomem = FUNC_8(VAR_21 +
           VAR_8,
           VAR_11);
 if (!VAR_16->cmdq_bar_reg_iomem) {
  FUNC_6(&VAR_16->pdev->dev, "CMDQ BAR region %d mapping failed\n",
   VAR_16->cmdq_bar_reg);
  return -VAR_4;
 }

 VAR_16->cmdq_bar_reg_prod_off = VAR_19 ? VAR_14 :
     VAR_13;

 VAR_16->cmdq_bar_reg_trig_off = VAR_12;


 VAR_16->creq_bar_reg = VAR_9;
 VAR_21 = FUNC_11(VAR_15, VAR_16->creq_bar_reg);
 if (!VAR_21)
  FUNC_6(&VAR_16->pdev->dev,
   "CREQ BAR region %d resc start is 0!\n",
   VAR_16->creq_bar_reg);

 VAR_16->creq_bar_reg_iomem = FUNC_8(VAR_21 + VAR_18,
         8);
 if (!VAR_16->creq_bar_reg_iomem) {
  FUNC_6(&VAR_16->pdev->dev, "CREQ BAR region %d mapping failed\n",
   VAR_16->creq_bar_reg);
  FUNC_9(VAR_16->cmdq_bar_reg_iomem);
  VAR_16->cmdq_bar_reg_iomem = ((void*)0);
  return -VAR_4;
 }
 VAR_16->creq_qp_event_processed = 0;
 VAR_16->creq_func_event_processed = 0;

 if (VAR_20)
  VAR_16->aeq_handler = VAR_20;
 FUNC_7(&VAR_16->waitq);

 VAR_24 = FUNC_3(VAR_16, VAR_17, 1);
 if (VAR_24) {
  FUNC_6(&VAR_16->pdev->dev,
   "Failed to request IRQ for CREQ rc = 0x%x\n", VAR_24);
  FUNC_2(VAR_16);
  return VAR_24;
 }

 VAR_22.cmdq_pbl = FUNC_5(VAR_16->cmdq.pbl[VAR_7].pg_map_arr[0]);
 VAR_22.cmdq_size_cmdq_lvl = FUNC_4(
  ((VAR_16->cmdq_depth << VAR_3) &
   VAR_2) |
  ((VAR_16->cmdq.level << VAR_1) &
   VAR_0));
 VAR_22.creq_ring_id = FUNC_4(VAR_16->creq_ring_id);


 FUNC_1(VAR_16->cmdq_bar_reg_iomem, &VAR_22, sizeof(VAR_22) / 4);
 return 0;
}
