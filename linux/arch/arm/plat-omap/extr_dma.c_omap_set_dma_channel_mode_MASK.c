
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef enum omap_dma_channel_mode { ____Placeholder_omap_dma_channel_mode } omap_dma_channel_mode ;
struct TYPE_2__ {int (* dma_read ) (int ,int) ;int (* dma_write ) (int,int ,int) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int ,int) ;

void FUNC_4(int VAR_2, enum omap_dma_channel_mode VAR_3)
{
 if (FUNC_0() && !FUNC_1()) {
  u32 VAR_4;

  VAR_4 = VAR_1->dma_read(VAR_0, VAR_2);
  VAR_4 &= ~0x7;
  VAR_4 |= VAR_3;
  VAR_1->dma_write(VAR_4, VAR_0, VAR_2);
 }
}
