
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sgcount; TYPE_2__* sg; } ;
struct iomd_dma {unsigned long cur_addr; unsigned long dma_addr; unsigned long dma_len; unsigned long cur_len; TYPE_1__ dma; } ;
struct TYPE_5__ {unsigned long dma_address; unsigned long length; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 TYPE_2__* FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(struct iomd_dma *VAR_5)
{
 unsigned long VAR_6, VAR_7, VAR_8 = 0;

 if (VAR_5->dma.sg) {
  VAR_5->cur_addr = VAR_5->dma_addr;
  VAR_7 = VAR_5->cur_addr & ~VAR_2;

  VAR_6 = VAR_7 + VAR_5->dma_len;

  if (VAR_6 > VAR_3)
   VAR_6 = VAR_3;

  if (VAR_7 + VAR_4 >= VAR_6)
   VAR_8 |= VAR_0;

  VAR_5->cur_len = VAR_6 - VAR_4;

  VAR_5->dma_len -= VAR_6 - VAR_7;
  VAR_5->dma_addr += VAR_6 - VAR_7;

  if (VAR_5->dma_len == 0) {
   if (VAR_5->dma.sgcount > 1) {
    VAR_5->dma.sg = FUNC_0(VAR_5->dma.sg);
    VAR_5->dma_addr = VAR_5->dma.sg->dma_address;
    VAR_5->dma_len = VAR_5->dma.sg->length;
    VAR_5->dma.sgcount--;
   } else {
    VAR_5->dma.sg = ((void*)0);
    VAR_8 |= VAR_1;
   }
  }
 } else {
  VAR_8 = VAR_1 | VAR_0;
  VAR_5->cur_addr = 0;
  VAR_5->cur_len = 0;
 }

 VAR_5->cur_len |= VAR_8;
}
