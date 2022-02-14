
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct silead_ts_data {int fw_name; } ;
struct silead_fw_data {int val; int offset; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
struct firmware {int size; scalar_t__ data; } ;


 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct silead_ts_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ,int,int *) ;
 int FUNC_4 (struct firmware const*) ;
 int FUNC_5 (struct firmware const**,int ,struct device*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct silead_ts_data *VAR_2 = FUNC_2(VAR_0);
 unsigned int VAR_3, VAR_4;
 const struct firmware *VAR_5;
 struct silead_fw_data *VAR_6;
 int VAR_7;

 FUNC_0(VAR_1, "Firmware file name: %s", VAR_2->fw_name);

 VAR_7 = FUNC_5(&VAR_5, VAR_2->fw_name, VAR_1);
 if (VAR_7) {
  FUNC_1(VAR_1, "Firmware request error %d\n", VAR_7);
  return VAR_7;
 }

 VAR_3 = VAR_5->size / sizeof(*VAR_6);
 VAR_6 = (struct silead_fw_data *)VAR_5->data;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_7 = FUNC_3(VAR_0,
             VAR_6[VAR_4].offset,
             4,
             (u8 *)&VAR_6[VAR_4].val);
  if (VAR_7) {
   FUNC_1(VAR_1, "Firmware load error %d\n", VAR_7);
   break;
  }
 }

 FUNC_4(VAR_5);
 return VAR_7 ?: 0;
}
