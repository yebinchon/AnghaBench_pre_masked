
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hisi_zip_ctrl {int debug_root; struct hisi_zip* hisi_zip; } ;
struct hisi_qm {scalar_t__ io_base; TYPE_1__* pdev; } ;
struct hisi_zip {struct hisi_qm qm; } ;
struct device {int dummy; } ;
struct dentry {int dummy; } ;
struct debugfs_regset32 {scalar_t__ base; int nregs; int regs; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 struct dentry* FUNC_1 (char*,int ) ;
 struct dentry* FUNC_2 (char*,int,struct dentry*,struct debugfs_regset32*) ;
 struct debugfs_regset32* FUNC_3 (struct device*,int,int ) ;
 int VAR_6 ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct hisi_zip_ctrl *VAR_7)
{
 struct hisi_zip *VAR_8 = VAR_7->hisi_zip;
 struct hisi_qm *VAR_9 = &VAR_8->qm;
 struct device *VAR_10 = &VAR_9->pdev->dev;
 struct debugfs_regset32 *VAR_11;
 struct dentry *VAR_12, *VAR_13;
 char VAR_14[VAR_2];
 int VAR_15;

 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  if (VAR_15 < VAR_3)
   FUNC_4(VAR_14, "comp_core%d", VAR_15);
  else
   FUNC_4(VAR_14, "decomp_core%d", VAR_15 - VAR_3);

  VAR_12 = FUNC_1(VAR_14, VAR_7->debug_root);
  if (!VAR_12)
   return -VAR_0;

  VAR_11 = FUNC_3(VAR_10, sizeof(*VAR_11), VAR_1);
  if (!VAR_11)
   return -VAR_0;

  VAR_11->regs = VAR_6;
  VAR_11->nregs = FUNC_0(VAR_6);
  VAR_11->base = VAR_9->io_base + VAR_5[VAR_15];

  VAR_13 = FUNC_2("regs", 0444, VAR_12, VAR_11);
  if (!VAR_13)
   return -VAR_0;
 }

 return 0;
}
