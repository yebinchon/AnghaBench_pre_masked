
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct cpt_vf {int pqinfo; int nr_queues; struct pci_dev* pdev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct cpt_vf *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;

 if (!VAR_0->nr_queues)
  return;

 FUNC_0(&VAR_1->dev, "Cleaning VQ pending queue (%u)\n",
   VAR_0->nr_queues);
 FUNC_1(&VAR_0->pqinfo);
}
