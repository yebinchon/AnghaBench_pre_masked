
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skd_device {scalar_t__ cq_dma_address; int * skcomp_table; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct skd_device *VAR_1)
{
 if (VAR_1->skcomp_table)
  FUNC_0(&VAR_1->pdev->dev, VAR_0,
      VAR_1->skcomp_table, VAR_1->cq_dma_address);

 VAR_1->skcomp_table = ((void*)0);
 VAR_1->cq_dma_address = 0;
}
