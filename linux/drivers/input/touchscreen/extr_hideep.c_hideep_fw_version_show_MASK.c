
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct TYPE_2__ {int release_ver; } ;
struct hideep_ts {int dev_mutex; TYPE_1__ dwz_info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct hideep_ts* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,char*,int ) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
          struct device_attribute *VAR_2, char *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_5(VAR_1);
 struct hideep_ts *VAR_5 = FUNC_1(VAR_4);
 ssize_t VAR_6;

 FUNC_2(&VAR_5->dev_mutex);
 VAR_6 = FUNC_4(VAR_3, VAR_0, "%04x\n",
   FUNC_0(VAR_5->dwz_info.release_ver));
 FUNC_3(&VAR_5->dev_mutex);

 return VAR_6;
}
