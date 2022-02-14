
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct omap_dmadev {TYPE_3__* plat; } ;
struct TYPE_4__ {int device; } ;
struct TYPE_5__ {TYPE_1__ chan; } ;
struct omap_chan {TYPE_2__ vc; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_6__ {int dma_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct omap_chan*,int ) ;
 scalar_t__ FUNC_3 (struct omap_chan*,int ) ;
 struct omap_dmadev* FUNC_4 (int ) ;

__attribute__((used)) static dma_addr_t FUNC_5(struct omap_chan *VAR_4)
{
 struct omap_dmadev *VAR_5 = FUNC_4(VAR_4->vc.chan.device);
 dma_addr_t VAR_6, VAR_7;

 if (FUNC_0(VAR_5->plat->dma_attr)) {
  VAR_6 = FUNC_2(VAR_4, VAR_1);
 } else {
  VAR_6 = FUNC_3(VAR_4, VAR_2);
  VAR_7 = FUNC_3(VAR_4, VAR_0);






  if (VAR_7 == 0)
   VAR_6 = FUNC_2(VAR_4, VAR_3);
 }

 if (FUNC_1())
  VAR_6 |= FUNC_2(VAR_4, VAR_3) & 0xffff0000;

 return VAR_6;
}
