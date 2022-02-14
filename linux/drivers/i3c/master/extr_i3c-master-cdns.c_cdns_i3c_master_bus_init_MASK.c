
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i3c_master_controller {int dummy; } ;
struct i3c_device_info {int bcr; int hdr_cap; } ;
struct TYPE_2__ {int i3c; unsigned long i2c; } ;
struct i3c_bus {int mode; TYPE_1__ scl_rate; } ;
struct cdns_i3c_master {scalar_t__ regs; int base; int sysclk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_8 ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;



 unsigned long VAR_12 ;
 int FUNC_2 (int ) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct cdns_i3c_master*,int ,struct i3c_device_info*) ;
 int FUNC_7 (struct cdns_i3c_master*) ;
 unsigned long FUNC_8 (int ) ;
 struct i3c_bus* FUNC_9 (struct i3c_master_controller*) ;
 int FUNC_10 (struct i3c_master_controller*,int ) ;
 int FUNC_11 (int *,struct i3c_device_info*) ;
 int FUNC_12 (int) ;
 struct cdns_i3c_master* FUNC_13 (struct i3c_master_controller*) ;
 int FUNC_14 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct i3c_master_controller *VAR_17)
{
 struct cdns_i3c_master *VAR_18 = FUNC_13(VAR_17);
 unsigned long VAR_19, VAR_20, VAR_21;
 struct i3c_bus *VAR_22 = FUNC_9(VAR_17);
 u32 VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 struct i3c_device_info VAR_28 = { };
 int VAR_29, VAR_30;

 switch (VAR_22->mode) {
 case 128:
  VAR_23 = VAR_7;
  break;

 case 130:
  VAR_23 = VAR_5;
  break;

 case 129:
  VAR_23 = VAR_6;
  break;

 default:
  return -VAR_9;
 }

 VAR_20 = FUNC_8(VAR_18->sysclk);
 if (!VAR_20)
  return -VAR_9;

 VAR_26 = FUNC_1(VAR_20, (VAR_22->scl_rate.i3c * 4)) - 1;
 if (VAR_26 > VAR_15)
  return -VAR_10;

 VAR_22->scl_rate.i3c = VAR_20 / ((VAR_26 + 1) * 4);

 VAR_24 = FUNC_4(VAR_26);

 VAR_27 = ((VAR_12 * VAR_20) / (VAR_26 + 1)) - 2;
 VAR_25 = FUNC_5(VAR_27);

 VAR_21 = VAR_22->scl_rate.i2c;

 VAR_26 = (VAR_20 / (VAR_21 * 5)) - 1;
 if (VAR_26 > VAR_15)
  return -VAR_10;

 VAR_22->scl_rate.i2c = VAR_20 / ((VAR_26 + 1) * 5);

 VAR_24 |= FUNC_3(VAR_26);
 FUNC_14(VAR_24, VAR_18->regs + VAR_14);


 VAR_19 = 1000000000 / (VAR_22->scl_rate.i3c * 4);
 VAR_30 = FUNC_1(VAR_12, VAR_19) - 2;
 if (VAR_30 < 0)
  VAR_30 = 0;
 VAR_25 = FUNC_5(VAR_30);
 FUNC_14(VAR_25, VAR_18->regs + VAR_16);


 VAR_29 = FUNC_10(VAR_17, 0);
 if (VAR_29 < 0)
  return VAR_29;

 FUNC_14(FUNC_12(VAR_29) | VAR_8,
        VAR_18->regs + FUNC_0(0));

 FUNC_6(VAR_18, 0, &VAR_28);
 if (VAR_28.bcr & VAR_11)
  VAR_28.hdr_cap = FUNC_2(VAR_13);

 VAR_29 = FUNC_11(&VAR_18->base, &VAR_28);
 if (VAR_29)
  return VAR_29;







 VAR_23 |= VAR_2 | VAR_3 | VAR_1 | VAR_4;
 FUNC_14(VAR_23, VAR_18->regs + VAR_0);

 FUNC_7(VAR_18);

 return 0;
}
