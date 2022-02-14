
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mip4_ts {int product_id; TYPE_1__* input; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int mutex; } ;


 int VAR_0 ;
 struct mip4_ts* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (char*,int ,char*,int) ;
 struct i2c_client* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
       struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_4(VAR_1);
 struct mip4_ts *VAR_5 = FUNC_0(VAR_4);
 size_t VAR_6;

 FUNC_1(&VAR_5->input->mutex);

 VAR_6 = FUNC_3(VAR_3, VAR_0, "%04X\n", VAR_5->product_id);

 FUNC_2(&VAR_5->input->mutex);

 return VAR_6;
}
