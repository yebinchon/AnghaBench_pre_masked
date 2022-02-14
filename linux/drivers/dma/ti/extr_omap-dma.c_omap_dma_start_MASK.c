
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct omap_dmadev {scalar_t__ ll123_supported; TYPE_3__* plat; } ;
struct omap_desc {int cicr; scalar_t__ dir; int ccr; TYPE_4__* sg; scalar_t__ using_ll; } ;
struct TYPE_5__ {int device; } ;
struct TYPE_6__ {TYPE_1__ chan; } ;
struct omap_chan {int running; TYPE_2__ vc; } ;
struct TYPE_8__ {int t2_desc_paddr; } ;
struct TYPE_7__ {int dma_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct omap_chan*,int ,int) ;
 int FUNC_2 (struct omap_chan*) ;
 struct omap_dmadev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct omap_chan *VAR_19, struct omap_desc *VAR_20)
{
 struct omap_dmadev *VAR_21 = FUNC_3(VAR_19->vc.chan.device);
 uint16_t VAR_22 = VAR_20->cicr;

 if (FUNC_0(VAR_21->plat->dma_attr))
  FUNC_1(VAR_19, VAR_17, 0);
 else
  FUNC_1(VAR_19, VAR_5, 0);

 FUNC_2(VAR_19);

 if (VAR_20->using_ll) {
  uint32_t VAR_23 = VAR_13 | VAR_10 | VAR_9;

  if (VAR_20->dir == VAR_18)
   VAR_23 |= (VAR_7 | VAR_12);
  else
   VAR_23 |= (VAR_8 | VAR_11);
  FUNC_1(VAR_19, VAR_6, VAR_23);

  FUNC_1(VAR_19, VAR_16, VAR_20->sg[0].t2_desc_paddr);
  FUNC_1(VAR_19, VAR_0, 0);
  FUNC_1(VAR_19, VAR_2, 0xffff);
  FUNC_1(VAR_19, VAR_1, 0xffffff);

  VAR_22 &= ~VAR_15;
 } else if (VAR_21->ll123_supported) {
  FUNC_1(VAR_19, VAR_6, 0);
 }


 FUNC_1(VAR_19, VAR_14, VAR_22);


 FUNC_1(VAR_19, VAR_3, VAR_20->ccr | VAR_4);

 VAR_19->running = 1;
}
