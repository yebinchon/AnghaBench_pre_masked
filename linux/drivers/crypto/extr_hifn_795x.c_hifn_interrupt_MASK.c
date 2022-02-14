
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hifn_dma {scalar_t__ cmdu; int resu; int dstu; int srcu; int resi; int dsti; int srci; int cmdi; } ;
struct hifn_device {int dmareg; int tasklet; TYPE_1__* pdev; scalar_t__ desc_virt; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int,int,int,int) ;
 int FUNC_2 (struct hifn_device*) ;
 int FUNC_3 (struct hifn_device*) ;
 int FUNC_4 (struct hifn_device*,int ) ;
 int FUNC_5 (struct hifn_device*,int ) ;
 int FUNC_6 (struct hifn_device*,int) ;
 int FUNC_7 (struct hifn_device*,int ,int) ;
 int FUNC_8 (struct hifn_device*,int ,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_18, void *VAR_19)
{
 struct hifn_device *VAR_20 = (struct hifn_device *)VAR_19;
 struct hifn_dma *VAR_21 = (struct hifn_dma *)VAR_20->desc_virt;
 u32 VAR_22, VAR_23;

 VAR_22 = FUNC_5(VAR_20, VAR_1);

 FUNC_0(&VAR_20->pdev->dev, "1 dmacsr: %08x, dmareg: %08x, res: %08x [%d], "
   "i: %d.%d.%d.%d, u: %d.%d.%d.%d.\n",
  VAR_22, VAR_20->dmareg, VAR_22 & VAR_20->dmareg, VAR_21->cmdi,
  VAR_21->cmdi, VAR_21->srci, VAR_21->dsti, VAR_21->resi,
  VAR_21->cmdu, VAR_21->srcu, VAR_21->dstu, VAR_21->resu);

 if ((VAR_22 & VAR_20->dmareg) == 0)
  return VAR_17;

 FUNC_8(VAR_20, VAR_1, VAR_22 & VAR_20->dmareg);

 if (VAR_22 & VAR_8)
  FUNC_7(VAR_20, VAR_0, FUNC_4(VAR_20, VAR_0));
 if (VAR_22 & VAR_9)
  FUNC_8(VAR_20, VAR_3,
   FUNC_5(VAR_20, VAR_3) | VAR_14);

 VAR_23 = VAR_22 & (VAR_11 | VAR_7);
 if (VAR_23) {
  u32 VAR_24 = FUNC_4(VAR_20, VAR_0);

  FUNC_1(&VAR_20->pdev->dev, "overflow: r: %d, d: %d, puisr: %08x, d: %u.\n",
    !!(VAR_22 & VAR_11),
    !!(VAR_22 & VAR_7),
   VAR_24, !!(VAR_24 & VAR_15));
  if (!!(VAR_24 & VAR_15))
   FUNC_7(VAR_20, VAR_0, VAR_15);
  FUNC_8(VAR_20, VAR_1, VAR_22 & (VAR_11 |
     VAR_7));
 }

 VAR_23 = VAR_22 & (VAR_4 | VAR_12 |
   VAR_6 | VAR_10);
 if (VAR_23) {
  FUNC_1(&VAR_20->pdev->dev, "abort: c: %d, s: %d, d: %d, r: %d.\n",
    !!(VAR_22 & VAR_4),
    !!(VAR_22 & VAR_12),
    !!(VAR_22 & VAR_6),
    !!(VAR_22 & VAR_10));
  FUNC_6(VAR_20, 1);
  FUNC_2(VAR_20);
  FUNC_3(VAR_20);
 }

 if ((VAR_22 & VAR_5) && (VAR_21->cmdu == 0)) {
  FUNC_0(&VAR_20->pdev->dev, "wait on command.\n");
  VAR_20->dmareg &= ~(VAR_13);
  FUNC_8(VAR_20, VAR_2, VAR_20->dmareg);
 }

 FUNC_9(&VAR_20->tasklet);

 return VAR_16;
}
