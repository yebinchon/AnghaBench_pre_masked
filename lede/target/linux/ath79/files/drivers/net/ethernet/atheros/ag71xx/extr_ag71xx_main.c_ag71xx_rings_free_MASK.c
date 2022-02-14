
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ag71xx_ring {int * buf; int * descs_cpu; int descs_dma; int order; } ;
struct ag71xx {TYPE_1__* pdev; struct ag71xx_ring rx_ring; struct ag71xx_ring tx_ring; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ag71xx *VAR_1)
{
 struct ag71xx_ring *VAR_2 = &VAR_1->tx_ring;
 struct ag71xx_ring *VAR_3 = &VAR_1->rx_ring;
 int VAR_4 = FUNC_0(VAR_2->order) + FUNC_0(VAR_3->order);

 if (VAR_2->descs_cpu)
  FUNC_1(&VAR_1->pdev->dev, VAR_4 * VAR_0,
      VAR_2->descs_cpu, VAR_2->descs_dma);

 FUNC_2(VAR_2->buf);

 VAR_2->descs_cpu = ((void*)0);
 VAR_3->descs_cpu = ((void*)0);
 VAR_2->buf = ((void*)0);
 VAR_3->buf = ((void*)0);
}
