
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;
struct cpt_vf {int nr_queues; int cqinfo; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpt_vf*,int *,int ,int ) ;
 int FUNC_1 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct cpt_vf *VAR_1, u32 VAR_2)
{
 struct pci_dev *VAR_3 = VAR_1->pdev;
 int VAR_4;


 VAR_4 = FUNC_0(VAR_1, &VAR_1->cqinfo, VAR_0,
       VAR_2);
 if (VAR_4) {
  FUNC_1(&VAR_3->dev, "failed to allocate AE command queues (%u)\n",
   VAR_1->nr_queues);
  return VAR_4;
 }

 return VAR_4;
}
