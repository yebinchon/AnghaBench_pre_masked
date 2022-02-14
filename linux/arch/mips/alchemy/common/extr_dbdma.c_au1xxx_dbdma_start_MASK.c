
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int cur_ptr; TYPE_2__* chan_ptr; } ;
typedef TYPE_1__ chan_tab_t ;
struct TYPE_4__ {scalar_t__ ddma_dbell; int ddma_cfg; int ddma_desptr; } ;
typedef TYPE_2__ au1x_dma_chan_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;

void FUNC_2(u32 VAR_1)
{
 chan_tab_t *VAR_2;
 au1x_dma_chan_t *VAR_3;

 VAR_2 = *((chan_tab_t **)VAR_1);
 VAR_3 = VAR_2->chan_ptr;
 VAR_3->ddma_desptr = FUNC_0(VAR_2->cur_ptr);
 VAR_3->ddma_cfg |= VAR_0;
 FUNC_1();
 VAR_3->ddma_dbell = 0;
 FUNC_1();
}
