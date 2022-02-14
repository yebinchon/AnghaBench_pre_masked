
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_5__ {int pagecnt_bias; int va; } ;
struct fe_rx_ring {int rx_ring_size; TYPE_2__ frag_cache; TYPE_3__* rx_dma; int rx_phys; scalar_t__* rx_data; int rx_buf_size; } ;
struct fe_priv {TYPE_1__* netdev; struct fe_rx_ring rx_ring; } ;
struct TYPE_6__ {scalar_t__ rxd1; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*,int ) ;
 int FUNC_1 (int *,int,TYPE_3__*,int ) ;
 int FUNC_2 (int *,scalar_t__,int ,int ) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (scalar_t__) ;
 struct page* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct fe_priv *VAR_1)
{
 struct fe_rx_ring *VAR_2 = &VAR_1->rx_ring;
 struct page *VAR_3;
 int VAR_4;

 if (VAR_2->rx_data) {
  for (VAR_4 = 0; VAR_4 < VAR_2->rx_ring_size; VAR_4++)
   if (VAR_2->rx_data[VAR_4]) {
    if (VAR_2->rx_dma && VAR_2->rx_dma[VAR_4].rxd1)
     FUNC_2(&VAR_1->netdev->dev,
        VAR_2->rx_dma[VAR_4].rxd1,
        VAR_2->rx_buf_size,
        VAR_0);
    FUNC_5(VAR_2->rx_data[VAR_4]);
   }

  FUNC_3(VAR_2->rx_data);
  VAR_2->rx_data = ((void*)0);
 }

 if (VAR_2->rx_dma) {
  FUNC_1(&VAR_1->netdev->dev,
      VAR_2->rx_ring_size * sizeof(*VAR_2->rx_dma),
      VAR_2->rx_dma,
      VAR_2->rx_phys);
  VAR_2->rx_dma = ((void*)0);
 }

 if (!VAR_2->frag_cache.va)
     return;

 VAR_3 = FUNC_6(VAR_2->frag_cache.va);
 FUNC_0(VAR_3, VAR_2->frag_cache.pagecnt_bias);
 FUNC_4(&VAR_2->frag_cache, 0, sizeof(VAR_2->frag_cache));
}
