
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct pci_dev {int dev; } ;
struct cptvf_wqe_info {TYPE_1__* vq_wqe; } ;
struct cpt_vf {int nr_queues; struct cptvf_wqe_info* wqe_info; struct pci_dev* pdev; } ;
struct TYPE_2__ {int qno; struct cpt_vf* cptvf; int twork; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 struct cptvf_wqe_info* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct cpt_vf *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->pdev;
 struct cptvf_wqe_info *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 if (VAR_3->nr_queues) {
  FUNC_0(&VAR_4->dev, "Creating VQ worker threads (%d)\n",
    VAR_3->nr_queues);
 }

 for (VAR_6 = 0; VAR_6 < VAR_3->nr_queues; VAR_6++) {
  FUNC_2(&VAR_5->vq_wqe[VAR_6].twork, VAR_2,
        (u64)VAR_5);
  VAR_5->vq_wqe[VAR_6].qno = VAR_6;
  VAR_5->vq_wqe[VAR_6].cptvf = VAR_3;
 }

 VAR_3->wqe_info = VAR_5;

 return 0;
}
