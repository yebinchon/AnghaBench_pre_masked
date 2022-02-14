
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct cpt_vf {int vfid; int * affinity_mask; int node; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct pci_dev*,int) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(struct cpt_vf *VAR_1, int VAR_2)
{
 struct pci_dev *VAR_3 = VAR_1->pdev;
 int VAR_4;

 if (!FUNC_6(&VAR_1->affinity_mask[VAR_2],
    VAR_0)) {
  FUNC_2(&VAR_3->dev, "Allocation failed for affinity_mask for VF %d",
   VAR_1->vfid);
  return;
 }

 VAR_4 = VAR_1->vfid % FUNC_4();
 FUNC_1(FUNC_0(VAR_4, VAR_1->node),
   VAR_1->affinity_mask[VAR_2]);
 FUNC_3(FUNC_5(VAR_3, VAR_2),
   VAR_1->affinity_mask[VAR_2]);
}
