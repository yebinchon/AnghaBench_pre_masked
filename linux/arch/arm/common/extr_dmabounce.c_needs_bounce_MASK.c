
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* dmabounce; } ;
struct device {unsigned long* dma_mask; TYPE_2__ archdata; } ;
typedef size_t dma_addr_t ;
struct TYPE_3__ {int (* needs_bounce ) (struct device*,size_t,size_t) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,size_t,unsigned long) ;
 int FUNC_1 (struct device*,size_t,size_t) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, dma_addr_t VAR_2, size_t VAR_3)
{
 if (!VAR_1 || !VAR_1->archdata.dmabounce)
  return 0;

 if (VAR_1->dma_mask) {
  unsigned long VAR_4, VAR_5 = *VAR_1->dma_mask;

  VAR_4 = (VAR_5 + 1) & ~VAR_5;
  if (VAR_4 && VAR_3 > VAR_4) {
   FUNC_0(VAR_1, "DMA mapping too big (requested %#x "
    "mask %#Lx)\n", VAR_3, *VAR_1->dma_mask);
   return -VAR_0;
  }


  if ((VAR_2 | (VAR_2 + VAR_3 - 1)) & ~VAR_5)
   return 1;
 }

 return !!VAR_1->archdata.dmabounce->needs_bounce(VAR_1, VAR_2, VAR_3);
}
