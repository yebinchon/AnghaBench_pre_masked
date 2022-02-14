
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int hactive; int flags; int pixelclock; int vactive; } ;
struct ipu_di_signal_cfg {int hsync_pin; int vsync_pin; scalar_t__ data_pol; scalar_t__ enable_pol; scalar_t__ clk_pol; TYPE_2__ mode; } ;
struct ipu_di {int id; int clk_di; int clk_ipu; TYPE_1__* ipu; } ;
struct TYPE_3__ {int dev; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int,int ) ;
 int VAR_16 ;
 int FUNC_2 (struct ipu_di*,struct ipu_di_signal_cfg*) ;
 int FUNC_3 (struct ipu_di*,int ,int ,int,int ,int) ;
 int FUNC_4 (struct ipu_di*,int ,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ipu_di*,int ) ;
 int FUNC_7 (struct ipu_di*,struct ipu_di_signal_cfg*) ;
 int FUNC_8 (struct ipu_di*,struct ipu_di_signal_cfg*,int) ;
 int FUNC_9 (struct ipu_di*,int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct ipu_di *VAR_17, struct ipu_di_signal_cfg *VAR_18)
{
 u32 VAR_19;
 u32 VAR_20, VAR_21;
 u32 VAR_22;

 FUNC_1(VAR_17->ipu->dev, "disp %d: panel size = %d x %d\n",
  VAR_17->id, VAR_18->mode.hactive, VAR_18->mode.vactive);

 FUNC_1(VAR_17->ipu->dev, "Clocks: IPU %luHz DI %luHz Needed %luHz\n",
  FUNC_0(VAR_17->clk_ipu),
  FUNC_0(VAR_17->clk_di),
  VAR_18->mode.pixelclock);

 FUNC_10(&VAR_16);

 FUNC_2(VAR_17, VAR_18);

 VAR_22 = FUNC_6(VAR_17, VAR_3) & 0xfff;
 VAR_22 = VAR_22 / 16;



 FUNC_9(VAR_17, (VAR_22 << 16), VAR_4);

 FUNC_4(VAR_17, VAR_15, VAR_22 - 1, VAR_22 - 1);
 FUNC_3(VAR_17, VAR_15, VAR_9, 3, 0, VAR_22 * 2);

 VAR_20 = FUNC_6(VAR_17, VAR_5) & VAR_6;
 VAR_20 |= VAR_7;

 if (VAR_18->mode.flags & VAR_1) {
  FUNC_7(VAR_17, VAR_18);


  VAR_20 |= 0x10000000;

  VAR_21 = 3;
 } else {
  FUNC_8(VAR_17, VAR_18, VAR_22);

  VAR_21 = 3;
  if (VAR_17->id == 1)




   if (!(VAR_18->hsync_pin == 2 && VAR_18->vsync_pin == 3))
    VAR_21 = 6;
 }

 if (VAR_18->mode.flags & VAR_0)
  VAR_20 |= FUNC_5(VAR_18->hsync_pin);
 if (VAR_18->mode.flags & VAR_2)
  VAR_20 |= FUNC_5(VAR_18->vsync_pin);

 if (VAR_18->clk_pol)
  VAR_20 |= VAR_8;

 FUNC_9(VAR_17, VAR_20, VAR_5);

 FUNC_9(VAR_17, (--VAR_21 << VAR_14) | 0x00000002,
       VAR_13);

 VAR_19 = FUNC_6(VAR_17, VAR_10);
 VAR_19 &= ~(VAR_11 | VAR_12);

 if (VAR_18->enable_pol)
  VAR_19 |= VAR_12;
 if (VAR_18->data_pol)
  VAR_19 |= VAR_11;

 FUNC_9(VAR_17, VAR_19, VAR_10);

 FUNC_11(&VAR_16);

 return 0;
}
