
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvrdma_page_dir {int dir_dma; scalar_t__ dir; } ;
struct pvrdma_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,scalar_t__,int ) ;
 int FUNC_1 (struct pvrdma_dev*,struct pvrdma_page_dir*) ;

void FUNC_2(struct pvrdma_dev *VAR_1,
        struct pvrdma_page_dir *VAR_2)
{
 if (VAR_2->dir) {
  FUNC_1(VAR_1, VAR_2);
  FUNC_0(&VAR_1->pdev->dev, VAR_0,
      VAR_2->dir, VAR_2->dir_dma);
 }
}
