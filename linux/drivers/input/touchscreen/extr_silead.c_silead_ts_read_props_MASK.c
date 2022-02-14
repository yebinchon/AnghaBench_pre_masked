
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct silead_ts_data {int max_fingers; int fw_name; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;


 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,char const**) ;
 int FUNC_2 (struct device*,char*,int*) ;
 struct silead_ts_data* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int ,int,char*,char const*) ;

__attribute__((used)) static void FUNC_5(struct i2c_client *VAR_0)
{
 struct silead_ts_data *VAR_1 = FUNC_3(VAR_0);
 struct device *VAR_2 = &VAR_0->dev;
 const char *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2, "silead,max-fingers",
      &VAR_1->max_fingers);
 if (VAR_4) {
  FUNC_0(VAR_2, "Max fingers read error %d\n", VAR_4);
  VAR_1->max_fingers = 5;
 }

 VAR_4 = FUNC_1(VAR_2, "firmware-name", &VAR_3);
 if (!VAR_4)
  FUNC_4(VAR_1->fw_name, sizeof(VAR_1->fw_name),
    "silead/%s", VAR_3);
 else
  FUNC_0(VAR_2, "Firmware file name read error. Using default.");
}
