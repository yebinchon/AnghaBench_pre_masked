
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thmc50_data {int analog_out; int update_lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long,int ,int) ;
 struct thmc50_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (char const*,int,unsigned long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_3,
    struct device_attribute *VAR_4,
    const char *VAR_5, size_t VAR_6)
{
 struct thmc50_data *VAR_7 = FUNC_1(VAR_3);
 struct i2c_client *VAR_8 = VAR_7->client;
 int VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4(VAR_5, 10, &VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_5(&VAR_7->update_lock);
 VAR_7->analog_out = FUNC_0(VAR_10, 0, 255);
 FUNC_3(VAR_8, VAR_0,
      VAR_7->analog_out);

 VAR_9 = FUNC_2(VAR_8, VAR_1);
 if (VAR_7->analog_out == 0)
  VAR_9 &= ~VAR_2;
 else
  VAR_9 |= VAR_2;
 FUNC_3(VAR_8, VAR_1, VAR_9);

 FUNC_6(&VAR_7->update_lock);
 return VAR_6;
}
