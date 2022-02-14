
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dev; } ;
struct ocrdma_pbl {int dummy; } ;
struct ocrdma_hw_mr {int num_pbls; TYPE_2__* pbl_table; int pbl_size; } ;
struct TYPE_3__ {struct pci_dev* pdev; } ;
struct ocrdma_dev {TYPE_1__ nic_info; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int pa; void* va; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,int ,int *,int ) ;
 TYPE_2__* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct ocrdma_dev*,struct ocrdma_hw_mr*) ;

__attribute__((used)) static int FUNC_3(struct ocrdma_dev *VAR_2, struct ocrdma_hw_mr *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;
 u32 VAR_6 = VAR_3->pbl_size;
 struct pci_dev *VAR_7 = VAR_2->nic_info.pdev;
 void *VAR_8;
 dma_addr_t VAR_9;

 VAR_3->pbl_table = FUNC_1(VAR_3->num_pbls, sizeof(struct ocrdma_pbl),
    VAR_1);

 if (!VAR_3->pbl_table)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_pbls; VAR_5++) {
  VAR_8 = FUNC_0(&VAR_7->dev, VAR_6, &VAR_9, VAR_1);
  if (!VAR_8) {
   FUNC_2(VAR_2, VAR_3);
   VAR_4 = -VAR_0;
   break;
  }
  VAR_3->pbl_table[VAR_5].va = VAR_8;
  VAR_3->pbl_table[VAR_5].pa = VAR_9;
 }
 return VAR_4;
}
