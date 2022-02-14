
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct pasemi_dmachan {int ring_size; scalar_t__ ring_dma; int * ring_virt; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int *,scalar_t__) ;
 TYPE_1__* VAR_0 ;

void FUNC_2(struct pasemi_dmachan *VAR_1)
{
 FUNC_0(!VAR_1->ring_virt);

 FUNC_1(&VAR_0->dev, VAR_1->ring_size * sizeof(u64),
     VAR_1->ring_virt, VAR_1->ring_dma);
 VAR_1->ring_virt = ((void*)0);
 VAR_1->ring_size = 0;
 VAR_1->ring_dma = 0;
}
