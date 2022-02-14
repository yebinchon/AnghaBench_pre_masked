
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct cptvf_wqe_info {TYPE_1__* vq_wqe; } ;
struct cpt_vf {int nr_queues; int * wqe_info; struct pci_dev* pdev; } ;
struct TYPE_2__ {int twork; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct cptvf_wqe_info*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct cpt_vf *VAR_0)
{
 struct cptvf_wqe_info *VAR_1;
 struct pci_dev *VAR_2 = VAR_0->pdev;
 int VAR_3;

 VAR_1 = (struct cptvf_wqe_info *)VAR_0->wqe_info;
 if (!VAR_1)
  return;

 if (VAR_0->nr_queues) {
  FUNC_0(&VAR_2->dev, "Cleaning VQ worker threads (%u)\n",
    VAR_0->nr_queues);
 }

 for (VAR_3 = 0; VAR_3 < VAR_0->nr_queues; VAR_3++)
  FUNC_2(&VAR_1->vq_wqe[VAR_3].twork);

 FUNC_1(VAR_1);
 VAR_0->wqe_info = ((void*)0);
}
