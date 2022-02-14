
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iqs5xx_private {int input; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 struct iqs5xx_private* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct i2c_client*,char*) ;
 int FUNC_4 (char*,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3, struct device_attribute *VAR_4,
    const char *VAR_5, size_t VAR_6)
{
 struct iqs5xx_private *VAR_7 = FUNC_1(VAR_3);
 struct i2c_client *VAR_8 = VAR_7->client;
 size_t VAR_9 = VAR_6;
 bool VAR_10 = !VAR_7->input;
 char VAR_11[VAR_2 + 1];
 int VAR_12;

 if (!VAR_9)
  return -VAR_0;

 if (VAR_5[VAR_9 - 1] == '\n')
  VAR_9--;

 if (VAR_9 > VAR_2)
  return -VAR_1;

 FUNC_4(VAR_11, VAR_5, VAR_9);
 VAR_11[VAR_9] = '\0';

 VAR_12 = FUNC_3(VAR_8, VAR_11);
 if (VAR_12)
  return VAR_12;





 if (VAR_10) {
  VAR_12 = FUNC_2(VAR_7->input);
  if (VAR_12) {
   FUNC_0(&VAR_8->dev,
    "Failed to register device: %d\n",
    VAR_12);
   return VAR_12;
  }
 }

 return VAR_6;
}
