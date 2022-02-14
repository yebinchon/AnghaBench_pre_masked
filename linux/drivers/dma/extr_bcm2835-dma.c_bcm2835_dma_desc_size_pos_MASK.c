
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcm2835_dma_cb {size_t length; scalar_t__ dst; scalar_t__ src; } ;
struct bcm2835_desc {unsigned int frames; scalar_t__ dir; TYPE_1__* cb_list; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {struct bcm2835_dma_cb* cb; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static size_t FUNC_0(struct bcm2835_desc *VAR_1, dma_addr_t VAR_2)
{
 unsigned int VAR_3;
 size_t VAR_4;

 for (VAR_4 = VAR_3 = 0; VAR_3 < VAR_1->frames; VAR_3++) {
  struct bcm2835_dma_cb *VAR_5 = VAR_1->cb_list[VAR_3].cb;
  size_t VAR_6 = VAR_5->length;
  dma_addr_t VAR_7;

  if (VAR_1->dir == VAR_0)
   VAR_7 = VAR_5->dst;
  else
   VAR_7 = VAR_5->src;

  if (VAR_4)
   VAR_4 += VAR_6;
  else if (VAR_2 >= VAR_7 && VAR_2 < VAR_7 + VAR_6)
   VAR_4 += VAR_7 + VAR_6 - VAR_2;
 }

 return VAR_4;
}
