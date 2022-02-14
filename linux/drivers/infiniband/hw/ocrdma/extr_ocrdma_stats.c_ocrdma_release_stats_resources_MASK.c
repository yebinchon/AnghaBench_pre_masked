
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stats_mem {int debugfs_mem; int * va; int pa; int size; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct ocrdma_dev {TYPE_2__ nic_info; struct stats_mem stats_mem; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct ocrdma_dev *VAR_0)
{
 struct stats_mem *VAR_1 = &VAR_0->stats_mem;

 if (VAR_1->va)
  FUNC_0(&VAR_0->nic_info.pdev->dev, VAR_1->size,
      VAR_1->va, VAR_1->pa);
 VAR_1->va = ((void*)0);
 FUNC_1(VAR_1->debugfs_mem);
}
