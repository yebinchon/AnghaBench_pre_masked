
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct owl_dma_pchan {int id; int * vchan; } ;
struct TYPE_2__ {int dev; } ;
struct owl_dma {int lock; TYPE_1__ dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct owl_dma*,int ) ;
 int FUNC_2 (struct owl_dma*,int ,int,int) ;
 int FUNC_3 (struct owl_dma*,int ,int) ;
 int FUNC_4 (struct owl_dma_pchan*,int ,int,int) ;
 int FUNC_5 (struct owl_dma_pchan*,int ,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct owl_dma *VAR_4,
        struct owl_dma_pchan *VAR_5)
{
 unsigned long VAR_6;
 u32 VAR_7;

 FUNC_5(VAR_5, VAR_1, 0);
 FUNC_4(VAR_5, VAR_0, 0xff, 0);

 FUNC_6(&VAR_4->lock, VAR_6);
 FUNC_2(VAR_4, VAR_2, (1 << VAR_5->id), 0);

 VAR_7 = FUNC_1(VAR_4, VAR_3);
 if (VAR_7 & (1 << VAR_5->id)) {
  FUNC_0(VAR_4->dma.dev,
    "terminating pchan %d that still has pending irq\n",
    VAR_5->id);
  FUNC_3(VAR_4, VAR_3, (1 << VAR_5->id));
 }

 VAR_5->vchan = ((void*)0);

 FUNC_7(&VAR_4->lock, VAR_6);
}
