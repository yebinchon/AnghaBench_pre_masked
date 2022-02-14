
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1031_data {unsigned long update_interval; int update_lock; struct i2c_client* client; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 struct adm1031_data* FUNC_3 (struct device*) ;
 int FUNC_4 (char const*,int,unsigned long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 unsigned long* VAR_3 ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_4,
         struct device_attribute *VAR_5,
         const char *VAR_6, size_t VAR_7)
{
 struct adm1031_data *VAR_8 = FUNC_3(VAR_4);
 struct i2c_client *VAR_9 = VAR_8->client;
 unsigned long VAR_10;
 int VAR_11, VAR_12;
 u8 VAR_13;

 VAR_12 = FUNC_4(VAR_6, 10, &VAR_10);
 if (VAR_12)
  return VAR_12;





 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_3) - 1; VAR_11++) {
  if (VAR_10 >= VAR_3[VAR_11])
   break;
 }



 VAR_13 = FUNC_1(VAR_9, VAR_0);
 VAR_13 &= ~VAR_1;
 VAR_13 |= VAR_11 << VAR_2;
 FUNC_2(VAR_9, VAR_0, VAR_13);

 FUNC_5(&VAR_8->update_lock);
 VAR_8->update_interval = VAR_3[VAR_11];
 FUNC_6(&VAR_8->update_lock);

 return VAR_7;
}
