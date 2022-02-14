
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {TYPE_2__* chan_ptr; } ;
typedef TYPE_1__ chan_tab_t ;
struct TYPE_4__ {scalar_t__ ddma_bytecnt; } ;
typedef TYPE_2__ au1x_dma_chan_t ;


 int FUNC_0 () ;

u32 FUNC_1(u32 VAR_0)
{
 chan_tab_t *VAR_1;
 au1x_dma_chan_t *VAR_2;
 u32 VAR_3;

 VAR_1 = *((chan_tab_t **)VAR_0);
 VAR_2 = VAR_1->chan_ptr;


 VAR_3 = VAR_2->ddma_bytecnt;
 FUNC_0();

 return VAR_3;
}
