
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct silead_ts_data {int fw_name; } ;
struct i2c_device_id {char* name; } ;


 int FUNC_0 (int ,int,char*,char*) ;

__attribute__((used)) static int FUNC_1(struct silead_ts_data *VAR_0,
      const struct i2c_device_id *VAR_1)
{
 FUNC_0(VAR_0->fw_name, sizeof(VAR_0->fw_name),
   "silead/%s.fw", VAR_1->name);
 return 0;
}
