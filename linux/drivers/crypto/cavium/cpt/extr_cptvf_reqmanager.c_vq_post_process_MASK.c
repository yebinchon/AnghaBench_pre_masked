
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;
struct cpt_vf {int pqinfo; int nr_queues; struct pci_dev* pdev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct cpt_vf*,int *,int ) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(struct cpt_vf *VAR_0, u32 VAR_1)
{
 struct pci_dev *VAR_2 = VAR_0->pdev;

 if (FUNC_2(VAR_1 > VAR_0->nr_queues)) {
  FUNC_0(&VAR_2->dev, "Request for post processing on invalid pending queue: %u\n",
   VAR_1);
  return;
 }

 FUNC_1(VAR_0, &VAR_0->pqinfo, VAR_1);
}
