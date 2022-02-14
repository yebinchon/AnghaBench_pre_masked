
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct ocrdma_hw_mr {int num_pbls; TYPE_2__* pbl_table; int pbl_size; } ;
struct TYPE_3__ {struct pci_dev* pdev; } ;
struct ocrdma_dev {TYPE_1__ nic_info; } ;
struct TYPE_4__ {int pa; int va; } ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct ocrdma_dev *VAR_0,
       struct ocrdma_hw_mr *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_0->nic_info.pdev;
 int VAR_3 = 0;

 if (VAR_1->pbl_table) {
  for (VAR_3 = 0; VAR_3 < VAR_1->num_pbls; VAR_3++) {
   if (!VAR_1->pbl_table[VAR_3].va)
    continue;
   FUNC_0(&VAR_2->dev, VAR_1->pbl_size,
       VAR_1->pbl_table[VAR_3].va,
       VAR_1->pbl_table[VAR_3].pa);
  }
  FUNC_1(VAR_1->pbl_table);
  VAR_1->pbl_table = ((void*)0);
 }
}
