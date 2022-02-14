
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mip4_ts {TYPE_2__* client; TYPE_1__* input; int fw_name; } ;
struct i2c_client {int dummy; } ;
struct firmware {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int mutex; } ;


 int FUNC_0 (int *,char*,int,...) ;
 struct mip4_ts* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct mip4_ts*,struct firmware const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct firmware const*) ;
 int FUNC_6 (struct firmware const**,int ,struct device*) ;
 struct i2c_client* FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_0,
        struct device_attribute *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_7(VAR_0);
 struct mip4_ts *VAR_5 = FUNC_1(VAR_4);
 const struct firmware *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_6(&VAR_6, VAR_5->fw_name, VAR_0);
 if (VAR_7) {
  FUNC_0(&VAR_5->client->dev,
   "Failed to retrieve firmware %s: %d\n",
   VAR_5->fw_name, VAR_7);
  return VAR_7;
 }






 FUNC_3(&VAR_5->input->mutex);

 VAR_7 = FUNC_2(VAR_5, VAR_6);

 FUNC_4(&VAR_5->input->mutex);

 FUNC_5(VAR_6);

 if (VAR_7) {
  FUNC_0(&VAR_5->client->dev,
   "Firmware update failed: %d\n", VAR_7);
  return VAR_7;
 }

 return VAR_3;
}
