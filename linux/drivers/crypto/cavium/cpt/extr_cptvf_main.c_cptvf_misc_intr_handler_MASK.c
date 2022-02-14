
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pci_dev {int dev; } ;
struct cpt_vf {int vfid; struct pci_dev* pdev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cpt_vf*) ;
 int FUNC_1 (struct cpt_vf*) ;
 int FUNC_2 (struct cpt_vf*) ;
 int FUNC_3 (struct cpt_vf*) ;
 int FUNC_4 (struct cpt_vf*) ;
 int FUNC_5 (struct cpt_vf*) ;
 int FUNC_6 (struct cpt_vf*) ;
 int FUNC_7 (struct cpt_vf*,int ) ;
 int FUNC_8 (int *,char*,int,int ) ;
 int FUNC_9 (int *,char*,int,...) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_6, void *VAR_7)
{
 struct cpt_vf *VAR_8 = (struct cpt_vf *)VAR_7;
 struct pci_dev *VAR_9 = VAR_8->pdev;
 u64 VAR_10;

 VAR_10 = FUNC_6(VAR_8);

 if (FUNC_10(VAR_10 & VAR_2)) {
  FUNC_8(&VAR_9->dev, "Mailbox interrupt 0x%llx on CPT VF %d\n",
   VAR_10, VAR_8->vfid);
  FUNC_5(VAR_8);
  FUNC_2(VAR_8);
 } else if (FUNC_11(VAR_10 & VAR_0)) {
  FUNC_0(VAR_8);

  FUNC_7(VAR_8, 0);
  FUNC_9(&VAR_9->dev, "Doorbell overflow error interrupt 0x%llx on CPT VF %d\n",
   VAR_10, VAR_8->vfid);
 } else if (FUNC_11(VAR_10 & VAR_1)) {
  FUNC_1(VAR_8);
  FUNC_9(&VAR_9->dev, "Instruction NCB read error interrupt 0x%llx on CPT VF %d\n",
   VAR_10, VAR_8->vfid);
 } else if (FUNC_11(VAR_10 & VAR_3)) {
  FUNC_3(VAR_8);
  FUNC_9(&VAR_9->dev, "NCB response write error interrupt 0x%llx on CPT VF %d\n",
   VAR_10, VAR_8->vfid);
 } else if (FUNC_11(VAR_10 & VAR_4)) {
  FUNC_4(VAR_8);
  FUNC_9(&VAR_9->dev, "Software error interrupt 0x%llx on CPT VF %d\n",
   VAR_10, VAR_8->vfid);
 } else {
  FUNC_9(&VAR_9->dev, "Unhandled interrupt in CPT VF %d\n",
   VAR_8->vfid);
 }

 return VAR_5;
}
