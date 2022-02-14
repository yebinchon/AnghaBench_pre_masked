
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnxt_qplib_rcfw {unsigned long bmap_size; scalar_t__ vector; int * aeq_handler; int * creq_bar_reg_iomem; int * cmdq_bar_reg_iomem; int cmdq_bitmap; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct bnxt_qplib_rcfw*,int) ;
 int FUNC_1 (int *,char*,unsigned long) ;
 unsigned long FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct bnxt_qplib_rcfw *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(VAR_0, 1);

 FUNC_3(VAR_0->cmdq_bar_reg_iomem);
 FUNC_3(VAR_0->creq_bar_reg_iomem);

 VAR_1 = FUNC_2(VAR_0->cmdq_bitmap, VAR_0->bmap_size);
 if (VAR_1 != VAR_0->bmap_size)
  FUNC_1(&VAR_0->pdev->dev,
   "disabling RCFW with pending cmd-bit %lx\n", VAR_1);
 FUNC_4(VAR_0->cmdq_bitmap);
 VAR_0->bmap_size = 0;

 VAR_0->cmdq_bar_reg_iomem = ((void*)0);
 VAR_0->creq_bar_reg_iomem = ((void*)0);
 VAR_0->aeq_handler = ((void*)0);
 VAR_0->vector = 0;
}
