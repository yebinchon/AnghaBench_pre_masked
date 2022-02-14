
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct etnaviv_gpu {int sync_point_event; int completed_fence; TYPE_1__* event; int sync_point_work; int wq; int dev; } ;
struct dma_fence {int seqno; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct dma_fence* fence; scalar_t__ sync_point; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (struct etnaviv_gpu*) ;
 int FUNC_4 (struct etnaviv_gpu*,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct etnaviv_gpu*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_5, void *VAR_6)
{
 struct etnaviv_gpu *VAR_7 = VAR_6;
 irqreturn_t VAR_8 = VAR_1;

 u32 VAR_9 = FUNC_7(VAR_7, VAR_2);

 if (VAR_9 != 0) {
  int VAR_10;

  FUNC_8(VAR_7->dev);

  FUNC_0(VAR_7->dev, "intr 0x%08x\n", VAR_9);

  if (VAR_9 & VAR_3) {
   FUNC_1(VAR_7->dev, "AXI bus error\n");
   VAR_9 &= ~VAR_3;
  }

  if (VAR_9 & VAR_4) {
   FUNC_3(VAR_7);
   VAR_9 &= ~VAR_4;
  }

  while ((VAR_10 = FUNC_6(VAR_9)) != 0) {
   struct dma_fence *VAR_11;

   VAR_10 -= 1;

   VAR_9 &= ~(1 << VAR_10);

   FUNC_0(VAR_7->dev, "event %u\n", VAR_10);

   if (VAR_7->event[VAR_10].sync_point) {
    VAR_7->sync_point_event = VAR_10;
    FUNC_9(VAR_7->wq, &VAR_7->sync_point_work);
   }

   VAR_11 = VAR_7->event[VAR_10].fence;
   if (!VAR_11)
    continue;

   VAR_7->event[VAR_10].fence = ((void*)0);
   if (FUNC_5(VAR_11->seqno, VAR_7->completed_fence))
    VAR_7->completed_fence = VAR_11->seqno;
   FUNC_2(VAR_11);

   FUNC_4(VAR_7, VAR_10);
  }

  VAR_8 = VAR_0;
 }

 return VAR_8;
}
