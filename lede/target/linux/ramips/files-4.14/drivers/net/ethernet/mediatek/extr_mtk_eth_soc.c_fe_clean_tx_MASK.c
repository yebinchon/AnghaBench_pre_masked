
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fe_tx_ring {int tx_ring_size; int * tx_dma; int tx_phys; int * tx_buf; } ;
struct fe_priv {TYPE_1__* netdev; struct fe_tx_ring tx_ring; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*,int,int *,int ) ;
 int FUNC_1 (struct device*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct fe_priv *VAR_0)
{
 int VAR_1;
 struct device *VAR_2 = &VAR_0->netdev->dev;
 struct fe_tx_ring *VAR_3 = &VAR_0->tx_ring;

 if (VAR_3->tx_buf) {
  for (VAR_1 = 0; VAR_1 < VAR_3->tx_ring_size; VAR_1++)
   FUNC_1(VAR_2, &VAR_3->tx_buf[VAR_1]);
  FUNC_2(VAR_3->tx_buf);
  VAR_3->tx_buf = ((void*)0);
 }

 if (VAR_3->tx_dma) {
  FUNC_0(VAR_2,
      VAR_3->tx_ring_size * sizeof(*VAR_3->tx_dma),
      VAR_3->tx_dma,
      VAR_3->tx_phys);
  VAR_3->tx_dma = ((void*)0);
 }

 FUNC_3(VAR_0->netdev);
}
