
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct adt7411_data {int vref_cached; int update_lock; struct i2c_client* client; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 long FUNC_2 (long,int) ;
 int VAR_0 ;
 int FUNC_3 (struct device*) ;
 long FUNC_4 (long,int ,int) ;
 struct adt7411_data* FUNC_5 (struct device*) ;


 int FUNC_6 (struct i2c_client*,int,long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_1, u32 VAR_2, int VAR_3,
     long VAR_4)
{
 struct adt7411_data *VAR_5 = FUNC_5(VAR_1);
 struct i2c_client *VAR_6 = VAR_5->client;
 int VAR_7, VAR_8;

 FUNC_7(&VAR_5->update_lock);
 VAR_7 = FUNC_3(VAR_1);
 if (VAR_7 < 0)
  goto exit_unlock;
 VAR_4 = FUNC_4(VAR_4, 0, 255 * VAR_5->vref_cached / 256);
 VAR_4 = FUNC_2(VAR_4 * 256, VAR_5->vref_cached);

 switch (VAR_2) {
 case 128:
  VAR_8 = FUNC_1(VAR_3);
  break;
 case 129:
  VAR_8 = FUNC_0(VAR_3);
  break;
 default:
  VAR_7 = -VAR_0;
  goto exit_unlock;
 }

 VAR_7 = FUNC_6(VAR_6, VAR_8, VAR_4);
 exit_unlock:
 FUNC_8(&VAR_5->update_lock);
 return VAR_7;
}
