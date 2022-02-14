
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int word; } ;
typedef int u8 ;
typedef int u16 ;
struct i2c_adapter {int dummy; } ;
struct cbus_host {int dummy; } ;


 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cbus_host*,int,int ,int ,int) ;
 struct cbus_host* FUNC_1 (struct i2c_adapter*) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_3,
          u16 VAR_4,
          unsigned short VAR_5,
          char VAR_6,
          u8 VAR_7,
          int VAR_8,
          union i2c_smbus_data *VAR_9)
{
 struct cbus_host *VAR_10 = FUNC_1(VAR_3);
 int VAR_11;

 if (VAR_8 != VAR_2)
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_10, VAR_6 == VAR_1, VAR_4,
       VAR_7, VAR_9->word);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_6 == VAR_1)
  VAR_9->word = VAR_11;

 return 0;
}
