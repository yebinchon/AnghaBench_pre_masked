
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ag71xx_ring {TYPE_2__* buf; int order; } ;
struct ag71xx {int rx_buf_size; TYPE_1__* dev; struct ag71xx_ring rx_ring; } ;
struct TYPE_4__ {scalar_t__ rx_buf; int dma_addr; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ag71xx *VAR_1)
{
 struct ag71xx_ring *VAR_2 = &VAR_1->rx_ring;
 int VAR_3 = FUNC_0(VAR_2->order);
 int VAR_4;

 if (!VAR_2->buf)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  if (VAR_2->buf[VAR_4].rx_buf) {
   FUNC_1(&VAR_1->dev->dev, VAR_2->buf[VAR_4].dma_addr,
      VAR_1->rx_buf_size, VAR_0);
   FUNC_2(VAR_2->buf[VAR_4].rx_buf);
  }
}
