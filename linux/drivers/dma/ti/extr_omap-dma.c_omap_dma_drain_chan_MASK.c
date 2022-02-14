
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_6__ {TYPE_2__ chan; } ;
struct omap_chan {int dma_ch; TYPE_3__ vc; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct omap_chan*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct omap_chan *VAR_3)
{
 int VAR_4;
 u32 VAR_5;


 for (VAR_4 = 0; ; VAR_4++) {
  VAR_5 = FUNC_1(VAR_3, VAR_0);
  if (!(VAR_5 & (VAR_1 | VAR_2)))
   break;

  if (VAR_4 > 100)
   break;

  FUNC_2(5);
 }

 if (VAR_5 & (VAR_1 | VAR_2))
  FUNC_0(VAR_3->vc.chan.device->dev,
   "DMA drain did not complete on lch %d\n",
   VAR_3->dma_ch);
}
