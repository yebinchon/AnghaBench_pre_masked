
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union i2c_smbus_data {int dummy; } i2c_smbus_data ;
typedef int u8 ;
typedef int u16 ;
struct i2c_adapter {int retries; TYPE_1__* algo; scalar_t__ timeout; } ;
typedef int s32 ;
struct TYPE_2__ {int (* smbus_xfer ) (struct i2c_adapter*,int ,unsigned short,char,int ,int,union i2c_smbus_data*) ;int (* smbus_xfer_atomic ) (struct i2c_adapter*,int ,unsigned short,char,int ,int,union i2c_smbus_data*) ;int master_xfer; scalar_t__ master_xfer_atomic; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 int FUNC_0 (struct i2c_adapter*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct i2c_adapter*,int ,unsigned short,char,int ,int,union i2c_smbus_data*) ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_3 (unsigned long,scalar_t__) ;
 int FUNC_4 (struct i2c_adapter*,int ,unsigned short,char,int ,int) ;
 int FUNC_5 (struct i2c_adapter*,int ,unsigned short,char,int ,int,union i2c_smbus_data*,int) ;
 int FUNC_6 (struct i2c_adapter*,int ,unsigned short,char,int ,int,int) ;
 int FUNC_7 (struct i2c_adapter*,int ,unsigned short,char,int ,int,union i2c_smbus_data*) ;

s32 FUNC_8(struct i2c_adapter *VAR_6, u16 VAR_7,
       unsigned short VAR_8, char VAR_9,
       u8 VAR_10, int VAR_11, union i2c_smbus_data *VAR_12)
{
 int (*VAR_13)(struct i2c_adapter *VAR_14, u16 VAR_15,
    unsigned short VAR_16, char VAR_17,
    u8 VAR_18, int VAR_19, union i2c_smbus_data *VAR_20);
 unsigned long VAR_21;
 int VAR_22;
 s32 VAR_23;

 VAR_23 = FUNC_0(VAR_6);
 if (VAR_23)
  return VAR_23;




 FUNC_7(VAR_6, VAR_7, VAR_8, VAR_9,
     VAR_10, VAR_11, VAR_12);
 FUNC_4(VAR_6, VAR_7, VAR_8, VAR_9,
    VAR_10, VAR_11);

 VAR_8 &= VAR_4 | VAR_2 | VAR_3;

 VAR_13 = VAR_6->algo->smbus_xfer;
 if (FUNC_1()) {
  if (VAR_6->algo->smbus_xfer_atomic)
   VAR_13 = VAR_6->algo->smbus_xfer_atomic;
  else if (VAR_6->algo->master_xfer_atomic)
   VAR_13 = ((void*)0);
 }

 if (VAR_13) {

  VAR_21 = VAR_5;
  for (VAR_23 = 0, VAR_22 = 0; VAR_22 <= VAR_6->retries; VAR_22++) {
   VAR_23 = VAR_13(VAR_6, VAR_7, VAR_8, VAR_9,
     VAR_10, VAR_11, VAR_12);
   if (VAR_23 != -VAR_0)
    break;
   if (FUNC_3(VAR_5,
           VAR_21 + VAR_6->timeout))
    break;
  }

  if (VAR_23 != -VAR_1 || !VAR_6->algo->master_xfer)
   goto trace;




 }

 VAR_23 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9,
          VAR_10, VAR_11, VAR_12);

trace:

 FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9,
     VAR_10, VAR_11, VAR_12, VAR_23);
 FUNC_6(VAR_6, VAR_7, VAR_8, VAR_9,
      VAR_10, VAR_11, VAR_23);

 return VAR_23;
}
