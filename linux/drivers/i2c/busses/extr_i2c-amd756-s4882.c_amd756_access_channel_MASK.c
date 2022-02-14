
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union i2c_smbus_data {scalar_t__ byte; } ;
typedef scalar_t__ u8 ;
typedef int u16 ;
struct i2c_adapter {int dummy; } ;
typedef int s32 ;
struct TYPE_4__ {TYPE_1__* algo; } ;
struct TYPE_3__ {int (* smbus_xfer ) (struct i2c_adapter*,int,unsigned short,char,int,int,union i2c_smbus_data*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct i2c_adapter*,int,unsigned short,char,int,int,union i2c_smbus_data*) ;
 int FUNC_3 (struct i2c_adapter*,int,unsigned short,char,scalar_t__,int,union i2c_smbus_data*) ;

__attribute__((used)) static inline s32 FUNC_4(struct i2c_adapter * VAR_6, u16 VAR_7,
     unsigned short VAR_8, char VAR_9,
     u8 VAR_10, int VAR_11,
     union i2c_smbus_data * VAR_12,
     u8 VAR_13)
{
 int VAR_14;


 if (VAR_7 != 0x4c && (VAR_7 & 0xfc) != 0x50 && (VAR_7 & 0xfc) != 0x30)
  return -VAR_0;

 FUNC_0(&VAR_3);

 if (VAR_5 != VAR_13) {
  union i2c_smbus_data VAR_15;
  VAR_15.byte = VAR_13;

  VAR_14 = VAR_4.algo->smbus_xfer(VAR_6, 0x18, 0,
            VAR_2, 0x01,
            VAR_1,
            &VAR_15);
  if (VAR_14)
   goto UNLOCK;
  VAR_5 = VAR_13;
 }
 VAR_14 = VAR_4.algo->smbus_xfer(VAR_6, VAR_7, VAR_8, VAR_9,
           VAR_10, VAR_11, VAR_12);

UNLOCK:
 FUNC_1(&VAR_3);
 return VAR_14;
}
