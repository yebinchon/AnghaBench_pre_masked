
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ high_precision; } ;
struct sht3x_data {int mode; int data_lock; int i2c_lock; TYPE_1__ setup; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct sht3x_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i2c_client*,char const*,int) ;
 int FUNC_3 (char const*,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 char** VAR_2 ;
 char** VAR_3 ;
 char const* VAR_4 ;
 int FUNC_6 (struct sht3x_data*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_5,
         struct device_attribute *VAR_6,
         const char *VAR_7,
         size_t VAR_8)
{
 u16 VAR_9;
 u8 VAR_10;
 int VAR_11;
 const char *VAR_12;
 struct sht3x_data *VAR_13 = FUNC_0(VAR_5);
 struct i2c_client *VAR_14 = VAR_13->client;

 VAR_11 = FUNC_3(VAR_7, 0, &VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_10 = FUNC_1(VAR_9);

 FUNC_4(&VAR_13->data_lock);

 if (VAR_10 == VAR_13->mode) {
  FUNC_5(&VAR_13->data_lock);
  return VAR_8;
 }

 FUNC_4(&VAR_13->i2c_lock);






 if (VAR_13->mode > 0) {
  VAR_11 = FUNC_2(VAR_14, VAR_4,
          VAR_1);
  if (VAR_11 != VAR_1)
   goto out;
  VAR_13->mode = 0;
 }

 if (VAR_10 > 0) {
  if (VAR_13->setup.high_precision)
   VAR_12 = VAR_2[VAR_10 - 1];
  else
   VAR_12 = VAR_3[VAR_10 - 1];


  VAR_11 = FUNC_2(VAR_14, VAR_12, VAR_1);
  if (VAR_11 != VAR_1)
   goto out;
 }


 VAR_13->mode = VAR_10;
 FUNC_6(VAR_13);

out:
 FUNC_5(&VAR_13->i2c_lock);
 FUNC_5(&VAR_13->data_lock);
 if (VAR_11 != VAR_1)
  return VAR_11 < 0 ? VAR_11 : -VAR_0;

 return VAR_8;
}
