
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocrdma_queue_info {int dma; int va; int size; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct ocrdma_dev {TYPE_2__ nic_info; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ocrdma_dev *VAR_0, struct ocrdma_queue_info *VAR_1)
{
 FUNC_0(&VAR_0->nic_info.pdev->dev, VAR_1->size, VAR_1->va, VAR_1->dma);
}
