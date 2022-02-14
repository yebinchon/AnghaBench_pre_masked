
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_msg {int flags; } ;
struct efm32_i2c_ddata {size_t current_msg; int done; int retval; struct i2c_msg* msgs; } ;
typedef int irqreturn_t ;


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
 int FUNC_0 (int *) ;
 int FUNC_1 (struct efm32_i2c_ddata*,int ) ;
 int FUNC_2 (struct efm32_i2c_ddata*) ;
 int FUNC_3 (struct efm32_i2c_ddata*) ;
 int FUNC_4 (struct efm32_i2c_ddata*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_16, void *VAR_17)
{
 struct efm32_i2c_ddata *VAR_18 = VAR_17;
 struct i2c_msg *VAR_19 = &VAR_18->msgs[VAR_18->current_msg];
 u32 VAR_20 = FUNC_1(VAR_18, VAR_10);
 u32 VAR_21 = FUNC_1(VAR_18, VAR_13);

 FUNC_4(VAR_18, VAR_11, VAR_20 & VAR_12);

 switch (VAR_21 & VAR_15) {
 case 130:

  VAR_18->retval = -VAR_0;
  FUNC_0(&VAR_18->done);
  break;
 case 128:




  VAR_18->retval = -VAR_1;
  FUNC_4(VAR_18, VAR_5,
    VAR_9 | VAR_6 |
    VAR_8 | VAR_7);
  FUNC_0(&VAR_18->done);
  break;
 case 129:

  break;
 case 134:

  break;
 case 133:
  if (VAR_21 & VAR_14) {
   FUNC_4(VAR_18, VAR_5, VAR_9);
   VAR_18->retval = -VAR_2;
   FUNC_0(&VAR_18->done);
  } else if (VAR_19->flags & VAR_3) {

  } else {
   FUNC_3(VAR_18);
  }
  break;
 case 132:
  if (VAR_19->flags & VAR_3) {
   FUNC_2(VAR_18);
  } else {

  }
  break;
 case 131:
  if (VAR_21 & VAR_14) {
   FUNC_4(VAR_18, VAR_5, VAR_9);
   FUNC_0(&VAR_18->done);
  } else {
   FUNC_3(VAR_18);
  }
 }

 return VAR_4;
}
