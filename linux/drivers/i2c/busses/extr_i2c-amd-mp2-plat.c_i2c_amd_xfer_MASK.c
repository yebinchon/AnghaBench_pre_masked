
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_msg {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_2__ {int mp2_dev; } ;
struct amd_i2c_dev {TYPE_1__ common; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct amd_i2c_dev*,struct i2c_msg*) ;
 struct amd_i2c_dev* FUNC_3 (struct i2c_adapter*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_1, struct i2c_msg *VAR_2, int VAR_3)
{
 struct amd_i2c_dev *VAR_4 = FUNC_3(VAR_1);
 int VAR_5;
 struct i2c_msg *VAR_6;
 int VAR_7;


 if (FUNC_4(!VAR_4->common.mp2_dev))
  return -VAR_0;

 FUNC_0(VAR_4->common.mp2_dev);

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_6 = &VAR_2[VAR_5];
  VAR_7 = FUNC_2(VAR_4, VAR_6);
  if (VAR_7)
   break;
 }

 FUNC_1(VAR_4->common.mp2_dev);
 return VAR_7 ? VAR_7 : VAR_3;
}
