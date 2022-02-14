
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u32 ;
typedef int irqreturn_t ;
struct TYPE_7__ {TYPE_3__* cur_ptr; int chan_callparam; int (* chan_callback ) (int,int ) ;TYPE_2__* chan_ptr; } ;
typedef TYPE_1__ chan_tab_t ;
struct TYPE_8__ {scalar_t__ ddma_irq; } ;
typedef TYPE_2__ au1x_dma_chan_t ;
struct TYPE_9__ {int dscr_nxtptr; } ;
typedef TYPE_3__ au1x_ddma_desc_t ;
struct TYPE_10__ {size_t ddma_intstat; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (size_t) ;
 TYPE_1__** VAR_0 ;
 TYPE_5__* VAR_1 ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_2, void *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 chan_tab_t *VAR_6;
 au1x_ddma_desc_t *VAR_7;
 au1x_dma_chan_t *VAR_8;

 VAR_4 = VAR_1->ddma_intstat;
 FUNC_5();
 VAR_5 = FUNC_2(VAR_4);

 VAR_6 = VAR_0[VAR_5];
 VAR_8 = VAR_6->chan_ptr;
 VAR_7 = VAR_6->cur_ptr;


 VAR_8->ddma_irq = 0;
 FUNC_5();

 if (VAR_6->chan_callback)
  VAR_6->chan_callback(VAR_2, VAR_6->chan_callparam);

 VAR_6->cur_ptr = FUNC_3(FUNC_0(VAR_7->dscr_nxtptr));
 return FUNC_1(1);
}
