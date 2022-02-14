
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int chancnt; } ;
struct dw_dma {TYPE_2__* chan; TYPE_1__ dma; int all_chan_mask; } ;
struct TYPE_6__ {int ERROR; int DST_TRAN; int SRC_TRAN; int BLOCK; int XFER; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_0 (struct dw_dma*,int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct dw_dma*,int ) ;
 int FUNC_4 (struct dw_dma*,int ,int ) ;

void FUNC_5(struct dw_dma *VAR_4)
{
 unsigned int VAR_5;

 FUNC_4(VAR_4, VAR_0, 0);

 FUNC_0(VAR_4, VAR_3.XFER, VAR_4->all_chan_mask);
 FUNC_0(VAR_4, VAR_3.BLOCK, VAR_4->all_chan_mask);
 FUNC_0(VAR_4, VAR_3.SRC_TRAN, VAR_4->all_chan_mask);
 FUNC_0(VAR_4, VAR_3.DST_TRAN, VAR_4->all_chan_mask);
 FUNC_0(VAR_4, VAR_3.ERROR, VAR_4->all_chan_mask);

 while (FUNC_3(VAR_4, VAR_0) & VAR_1)
  FUNC_2();

 for (VAR_5 = 0; VAR_5 < VAR_4->dma.chancnt; VAR_5++)
  FUNC_1(VAR_2, &VAR_4->chan[VAR_5].flags);
}
