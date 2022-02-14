
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnxt_qplib_rcfw_sbuf {int dma_addr; scalar_t__ sb; int size; } ;
struct bnxt_qplib_rcfw {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int ,scalar_t__,int ) ;
 int FUNC_1 (struct bnxt_qplib_rcfw_sbuf*) ;

void FUNC_2(struct bnxt_qplib_rcfw *VAR_0,
          struct bnxt_qplib_rcfw_sbuf *VAR_1)
{
 if (VAR_1->sb)
  FUNC_0(&VAR_0->pdev->dev, VAR_1->size,
      VAR_1->sb, VAR_1->dma_addr);
 FUNC_1(VAR_1);
}
