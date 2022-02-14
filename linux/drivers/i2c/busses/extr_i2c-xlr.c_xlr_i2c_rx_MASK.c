
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
typedef int u16 ;
struct i2c_adapter {int dev; } ;
struct xlr_i2c_private {scalar_t__ irq; int iobase; scalar_t__ pos; TYPE_1__* cfg; struct i2c_adapter adap; } ;
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
 int FUNC_0 (int *,char*) ;
 unsigned long VAR_14 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (struct xlr_i2c_private*,int) ;
 void* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct xlr_i2c_private*,int) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct xlr_i2c_private *VAR_15, u16 VAR_16, u8 *VAR_17, u16 VAR_18)
{
 struct i2c_adapter *VAR_19 = &VAR_15->adap;
 u32 VAR_20;
 unsigned long VAR_21, VAR_22, VAR_23;
 int VAR_24, VAR_25;

 FUNC_6(VAR_15->iobase, VAR_5,
   VAR_6 | VAR_15->cfg->cfg_extra);
 FUNC_6(VAR_15->iobase, VAR_4, VAR_16 - 1);
 FUNC_6(VAR_15->iobase, VAR_8, VAR_18);

 VAR_15->pos = 0;

 VAR_21 = FUNC_1(VAR_13);
 VAR_22 = VAR_14 + VAR_21;
 VAR_25 = 0;
 VAR_24 = 0;
retry:
 FUNC_6(VAR_15->iobase, VAR_10, VAR_11);

 if (VAR_15->irq > 0)
  return FUNC_5(VAR_15, VAR_13 * VAR_16);

 while (!VAR_25) {
  VAR_23 = VAR_14;
  VAR_20 = FUNC_4(VAR_15->iobase, VAR_12);
  if (VAR_20 & VAR_9) {
   if (VAR_24 >= VAR_16)
    return -VAR_0;

   VAR_17[VAR_24++] =
    FUNC_4(VAR_15->iobase, VAR_7);


   VAR_22 = VAR_14 + VAR_21;
  }

  VAR_25 = FUNC_2(VAR_23, VAR_22);
  if (VAR_20 & VAR_3) {
   if (VAR_25)
    break;
   goto retry;
  }

  if (VAR_20 & VAR_2)
   return -VAR_0;

  if (!FUNC_3(VAR_15, VAR_20))
   return 0;
 }

 FUNC_0(&VAR_19->dev, "I2C receive timeout\n");
 return -VAR_1;
}
