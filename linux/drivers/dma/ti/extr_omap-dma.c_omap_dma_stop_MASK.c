
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct omap_dmadev {TYPE_3__* plat; } ;
struct TYPE_4__ {int device; } ;
struct TYPE_5__ {TYPE_1__ chan; } ;
struct omap_chan {int ccr; int running; scalar_t__ cyclic; TYPE_2__ vc; } ;
struct TYPE_6__ {int errata; int dma_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct omap_chan*,int ) ;
 int FUNC_5 (struct omap_chan*,int ,int) ;
 int FUNC_6 (struct omap_chan*) ;
 int FUNC_7 (struct omap_chan*) ;
 int FUNC_8 (struct omap_dmadev*,int ) ;
 int FUNC_9 (struct omap_dmadev*,int ,int) ;
 struct omap_dmadev* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct omap_chan *VAR_12)
{
 struct omap_dmadev *VAR_13 = FUNC_10(VAR_12->vc.chan.device);
 uint32_t VAR_14;


 FUNC_5(VAR_12, VAR_4, 0);

 FUNC_6(VAR_12);

 VAR_14 = FUNC_4(VAR_12, VAR_0);
 if (VAR_13->plat->errata & VAR_7 && VAR_14 & VAR_3) {
  uint32_t VAR_15;

  VAR_15 = FUNC_8(VAR_13, VAR_11);
  VAR_14 = VAR_15 & ~VAR_9;
  VAR_14 |= FUNC_0(VAR_8);
  FUNC_9(VAR_13, VAR_11, VAR_14);

  VAR_14 = FUNC_4(VAR_12, VAR_0);
  VAR_14 &= ~VAR_2;
  FUNC_5(VAR_12, VAR_0, VAR_14);

  if (!(VAR_12->ccr & VAR_1))
   FUNC_7(VAR_12);

  FUNC_9(VAR_13, VAR_11, VAR_15);
 } else {
  if (!(VAR_14 & VAR_2))
   return -VAR_10;

  VAR_14 &= ~VAR_2;
  FUNC_5(VAR_12, VAR_0, VAR_14);

  if (!(VAR_12->ccr & VAR_1))
   FUNC_7(VAR_12);
 }

 FUNC_3();

 if (!FUNC_1(VAR_13->plat->dma_attr) && VAR_12->cyclic) {
  VAR_14 = FUNC_4(VAR_12, VAR_5);

  if (FUNC_2())
   VAR_14 |= 1 << 14;
  else
   VAR_14 &= ~VAR_6;

  FUNC_5(VAR_12, VAR_5, VAR_14);
 }
 VAR_12->running = 0;
 return 0;
}
