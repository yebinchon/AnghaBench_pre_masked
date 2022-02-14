
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ag71xx_ring {struct ag71xx_buf* buf; } ;
struct ag71xx_desc {int data; } ;
struct ag71xx_buf {scalar_t__ dma_addr; void* rx_buf; } ;
struct ag71xx {int rx_buf_size; TYPE_1__* dev; struct ag71xx_ring rx_ring; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct ag71xx*) ;
 struct ag71xx_desc* FUNC_1 (struct ag71xx_ring*,int) ;
 scalar_t__ FUNC_2 (int *,void*,int ,int ) ;

__attribute__((used)) static bool FUNC_3(struct ag71xx *VAR_1, struct ag71xx_buf *VAR_2,
          int VAR_3,
          void *(*VAR_4)(unsigned int VAR_5))
{
 struct ag71xx_ring *VAR_6 = &VAR_1->rx_ring;
 struct ag71xx_desc *VAR_7 = FUNC_1(VAR_6, VAR_2 - &VAR_6->buf[0]);
 void *VAR_8;

 VAR_8 = VAR_4(FUNC_0(VAR_1));
 if (!VAR_8)
  return 0;

 VAR_2->rx_buf = VAR_8;
 VAR_2->dma_addr = FUNC_2(&VAR_1->dev->dev, VAR_8, VAR_1->rx_buf_size,
           VAR_0);
 VAR_7->data = (u32) VAR_2->dma_addr + VAR_3;
 return 1;
}
