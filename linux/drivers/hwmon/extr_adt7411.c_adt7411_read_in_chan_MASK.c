
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct adt7411_data {int vref_cached; int update_lock; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (struct i2c_client*,int,int ,int) ;
 int FUNC_3 (struct device*,int,long*) ;
 int FUNC_4 (struct device*) ;
 struct adt7411_data* FUNC_5 (struct device*) ;




 int FUNC_6 (struct i2c_client*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_3, u32 VAR_4, int VAR_5,
    long *VAR_6)
{
 struct adt7411_data *VAR_7 = FUNC_5(VAR_3);
 struct i2c_client *VAR_8 = VAR_7->client;

 int VAR_9;
 int VAR_10, VAR_11, VAR_12;
 int VAR_13 = VAR_5 - 1;

 FUNC_7(&VAR_7->update_lock);
 VAR_9 = FUNC_4(VAR_3);
 if (VAR_9 < 0)
  goto exit_unlock;

 switch (VAR_4) {
 case 130:
  VAR_11 = VAR_0 + (VAR_13 >> 2);
  VAR_12 = 2 * (VAR_13 & 0x03);
  VAR_9 = FUNC_2(VAR_8, VAR_11,
       VAR_1 + VAR_13,
       VAR_12);
  if (VAR_9 < 0)
   goto exit_unlock;
  *VAR_6 = VAR_9 * VAR_7->vref_cached / 1024;
  VAR_9 = 0;
  break;
 case 128:
 case 129:
  VAR_10 = (VAR_4 == 128)
   ? FUNC_1(VAR_5)
   : FUNC_0(VAR_5);
  VAR_9 = FUNC_6(VAR_8, VAR_10);
  if (VAR_9 < 0)
   goto exit_unlock;
  *VAR_6 = VAR_9 * VAR_7->vref_cached / 256;
  VAR_9 = 0;
  break;
 case 131:
  VAR_9 = FUNC_3(VAR_3, VAR_5, VAR_6);
  break;
 default:
  VAR_9 = -VAR_2;
  break;
 }
 exit_unlock:
 FUNC_8(&VAR_7->update_lock);
 return VAR_9;
}
