
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct pasemi_dmachan {int ring_size; int ring_virt; int ring_dma; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int *,int ) ;
 TYPE_1__* VAR_2 ;

int FUNC_2(struct pasemi_dmachan *VAR_3, int VAR_4)
{
 FUNC_0(VAR_3->ring_virt);

 VAR_3->ring_size = VAR_4;

 VAR_3->ring_virt = FUNC_1(&VAR_2->dev,
          VAR_4 * sizeof(u64),
          &VAR_3->ring_dma, VAR_1);

 if (!VAR_3->ring_virt)
  return -VAR_0;

 return 0;
}
