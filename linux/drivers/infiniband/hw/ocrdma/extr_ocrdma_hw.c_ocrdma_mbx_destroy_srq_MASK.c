
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_3__ {int pa; int va; int len; } ;
struct ocrdma_srq {TYPE_1__ rq; int id; } ;
struct ocrdma_mqe {int dummy; } ;
struct TYPE_4__ {struct pci_dev* pdev; } ;
struct ocrdma_dev {TYPE_2__ nic_info; } ;
struct ocrdma_destroy_srq {int id; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct ocrdma_destroy_srq*) ;
 struct ocrdma_destroy_srq* FUNC_2 (int ,int) ;
 int FUNC_3 (struct ocrdma_dev*,struct ocrdma_mqe*) ;

void FUNC_4(struct ocrdma_dev *VAR_1, struct ocrdma_srq *VAR_2)
{
 struct ocrdma_destroy_srq *VAR_3;
 struct pci_dev *VAR_4 = VAR_1->nic_info.pdev;
 VAR_3 = FUNC_2(VAR_0, sizeof(*VAR_3));
 if (!VAR_3)
  return;
 VAR_3->id = VAR_2->id;
 FUNC_3(VAR_1, (struct ocrdma_mqe *)VAR_3);
 if (VAR_2->rq.va)
  FUNC_0(&VAR_4->dev, VAR_2->rq.len,
      VAR_2->rq.va, VAR_2->rq.pa);
 FUNC_1(VAR_3);
}
