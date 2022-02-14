
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct i2c_adapter {int dev; } ;
struct xlr_i2c_private {int pos; scalar_t__ irq; int iobase; TYPE_1__* cfg; struct i2c_adapter adap; } ;
struct TYPE_2__ {int cfg_extra; } ;


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
 int FUNC_0 (int *,char*) ;
 unsigned long VAR_16 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (struct xlr_i2c_private*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct xlr_i2c_private*,int) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct xlr_i2c_private *VAR_17, u16 VAR_18,
 u8 *VAR_19, u16 VAR_20)
{
 struct i2c_adapter *VAR_21 = &VAR_17->adap;
 unsigned long VAR_22, VAR_23, VAR_24;
 u32 VAR_25;
 int VAR_26, VAR_27;
 u8 VAR_28;
 u32 VAR_29;

 VAR_28 = VAR_19[0];
 FUNC_6(VAR_17->iobase, VAR_3, VAR_28);
 FUNC_6(VAR_17->iobase, VAR_9, VAR_20);
 FUNC_6(VAR_17->iobase, VAR_6,
   VAR_7 | VAR_17->cfg->cfg_extra);

 VAR_22 = FUNC_1(VAR_15);
 VAR_23 = VAR_16 + VAR_22;
 VAR_27 = 0;

 if (VAR_18 == 1) {
  FUNC_6(VAR_17->iobase, VAR_5, VAR_18 - 1);
  VAR_29 = VAR_12;
  VAR_26 = 1;
 } else {
  FUNC_6(VAR_17->iobase, VAR_5, VAR_18 - 2);
  FUNC_6(VAR_17->iobase, VAR_8, VAR_19[1]);
  VAR_29 = VAR_13;
  VAR_26 = 2;
 }

 VAR_17->pos = VAR_26;

retry:

 FUNC_6(VAR_17->iobase, VAR_11, VAR_29);

 if (VAR_17->irq > 0)
  return FUNC_5(VAR_17, VAR_15 * VAR_18);

 while (!VAR_27) {
  VAR_24 = VAR_16;
  VAR_25 = FUNC_4(VAR_17->iobase, VAR_14);

  if ((VAR_25 & VAR_10) && VAR_26 < VAR_18) {
   FUNC_6(VAR_17->iobase, VAR_8, VAR_19[VAR_26++]);


   VAR_23 = VAR_16 + VAR_22;
  }
  VAR_27 = FUNC_2(VAR_24, VAR_23);

  if (VAR_25 & VAR_4) {
   if (VAR_27)
    break;
   goto retry;
  }

  if (VAR_25 & VAR_2)
   return -VAR_0;

  if (!FUNC_3(VAR_17, VAR_25) && VAR_26 >= VAR_18)
   return 0;
 }
 FUNC_0(&VAR_21->dev, "I2C transmit timeout\n");
 return -VAR_1;
}
