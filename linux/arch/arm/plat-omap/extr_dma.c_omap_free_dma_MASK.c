
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev_id; int next_lch; int * callback; } ;
struct TYPE_3__ {int (* dma_write ) (int ,int ,int) ;} ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,int ,int) ;

void FUNC_8(int VAR_4)
{
 unsigned long VAR_5;

 if (VAR_1[VAR_4].dev_id == -1) {
  FUNC_4("omap_dma: trying to free unallocated DMA channel %d\n",
         VAR_4);
  return;
 }


 if (FUNC_0())
  FUNC_1(VAR_4);


 FUNC_3(VAR_4);


 VAR_3->dma_write(0, VAR_0, VAR_4);


 if (FUNC_0())
  FUNC_2(VAR_4);

 FUNC_5(&VAR_2, VAR_5);
 VAR_1[VAR_4].dev_id = -1;
 VAR_1[VAR_4].next_lch = -1;
 VAR_1[VAR_4].callback = ((void*)0);
 FUNC_6(&VAR_2, VAR_5);
}
