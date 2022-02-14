
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {TYPE_2__* device; } ;
struct rcar_dmac_chan {int index; TYPE_1__ chan; int lock; } ;
struct rcar_dmac {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct rcar_dmac_chan*,int ) ;
 int FUNC_2 (struct rcar_dmac_chan*) ;
 int FUNC_3 (struct rcar_dmac_chan*,int ,int) ;
 int FUNC_4 (struct rcar_dmac_chan*) ;
 int FUNC_5 (struct rcar_dmac_chan*) ;
 int FUNC_6 (struct rcar_dmac_chan*) ;
 int FUNC_7 (struct rcar_dmac*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct rcar_dmac* FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_8, void *VAR_9)
{
 u32 VAR_10 = VAR_6 | VAR_7;
 struct rcar_dmac_chan *VAR_11 = VAR_9;
 irqreturn_t VAR_12 = VAR_1;
 bool VAR_13 = 0;
 u32 VAR_14;

 FUNC_8(&VAR_11->lock);

 VAR_14 = FUNC_1(VAR_11, VAR_3);
 if (VAR_14 & VAR_4) {
  struct rcar_dmac *VAR_15 = FUNC_10(VAR_11->chan.device);






  FUNC_7(VAR_15, VAR_2, 1 << VAR_11->index);
  FUNC_4(VAR_11);
  VAR_13 = 1;
  goto spin_lock_end;
 }

 if (VAR_14 & VAR_7)
  VAR_10 |= VAR_5;
 FUNC_3(VAR_11, VAR_3, VAR_14 & ~VAR_10);
 if (VAR_10 & VAR_5)
  FUNC_4(VAR_11);

 if (VAR_14 & VAR_6)
  VAR_12 |= FUNC_5(VAR_11);

 if (VAR_14 & VAR_7)
  VAR_12 |= FUNC_6(VAR_11);

spin_lock_end:
 FUNC_9(&VAR_11->lock);

 if (VAR_13) {
  FUNC_0(VAR_11->chan.device->dev, "Channel Address Error\n");

  FUNC_2(VAR_11);
  VAR_12 = VAR_0;
 }

 return VAR_12;
}
