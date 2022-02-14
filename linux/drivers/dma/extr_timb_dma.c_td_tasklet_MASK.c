
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct timb_dma_chan {int lock; int queue; } ;
struct TYPE_2__ {int chancnt; } ;
struct timb_dma {scalar_t__ membase; struct timb_dma_chan* channels; TYPE_1__ dma; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct timb_dma_chan*) ;
 int FUNC_1 (struct timb_dma*) ;
 int FUNC_2 (struct timb_dma_chan*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_2)
{
 struct timb_dma *VAR_3 = (struct timb_dma *)VAR_2;
 u32 VAR_4;
 u32 VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_4 = FUNC_3(VAR_3->membase + VAR_1);
 VAR_5 = VAR_4 & FUNC_1(VAR_3);


 FUNC_4(VAR_5, VAR_3->membase + VAR_1);

 for (VAR_7 = 0; VAR_7 < VAR_3->dma.chancnt; VAR_7++)
  if (VAR_5 & (1 << VAR_7)) {
   struct timb_dma_chan *VAR_8 = VAR_3->channels + VAR_7;
   FUNC_6(&VAR_8->lock);
   FUNC_0(VAR_8);
   if (!FUNC_5(&VAR_8->queue))
    FUNC_2(VAR_8);
   FUNC_7(&VAR_8->lock);
  }

 VAR_6 = FUNC_1(VAR_3);
 FUNC_4(VAR_6, VAR_3->membase + VAR_0);
}
