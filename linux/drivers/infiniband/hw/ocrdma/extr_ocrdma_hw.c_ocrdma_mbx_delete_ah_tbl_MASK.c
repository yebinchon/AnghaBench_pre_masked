
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct ocrdma_mqe {int dummy; } ;
struct TYPE_5__ {int pa; int * va; } ;
struct TYPE_6__ {TYPE_2__ pbl; int * va; int pa; int size; int ahid; } ;
struct TYPE_4__ {struct pci_dev* pdev; } ;
struct ocrdma_dev {TYPE_3__ av_tbl; TYPE_1__ nic_info; } ;
struct ocrdma_delete_ah_tbl {int ahid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (struct ocrdma_delete_ah_tbl*) ;
 struct ocrdma_delete_ah_tbl* FUNC_2 (int ,int) ;
 int FUNC_3 (struct ocrdma_dev*,struct ocrdma_mqe*) ;

__attribute__((used)) static void FUNC_4(struct ocrdma_dev *VAR_2)
{
 struct ocrdma_delete_ah_tbl *VAR_3;
 struct pci_dev *VAR_4 = VAR_2->nic_info.pdev;

 if (VAR_2->av_tbl.va == ((void*)0))
  return;

 VAR_3 = FUNC_2(VAR_0, sizeof(*VAR_3));
 if (!VAR_3)
  return;
 VAR_3->ahid = VAR_2->av_tbl.ahid;

 FUNC_3(VAR_2, (struct ocrdma_mqe *)VAR_3);
 FUNC_0(&VAR_4->dev, VAR_2->av_tbl.size, VAR_2->av_tbl.va,
     VAR_2->av_tbl.pa);
 VAR_2->av_tbl.va = ((void*)0);
 FUNC_0(&VAR_4->dev, VAR_1, VAR_2->av_tbl.pbl.va,
     VAR_2->av_tbl.pbl.pa);
 FUNC_1(VAR_3);
}
