
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * parent; } ;
struct i2c_adapter {int * lock_ops; int name; int * algo; TYPE_2__ dev; int class; int owner; } ;
struct amdgpu_device {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct i2c_adapter*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int,char*) ;
 struct amdgpu_device* FUNC_3 (struct i2c_adapter*) ;

int FUNC_4(struct i2c_adapter *VAR_4)
{
 struct amdgpu_device *VAR_5 = FUNC_3(VAR_4);
 int VAR_6;

 VAR_4->owner = VAR_1;
 VAR_4->class = VAR_0;
 VAR_4->dev.parent = &VAR_5->pdev->dev;
 VAR_4->algo = &VAR_2;
 FUNC_2(VAR_4->name, sizeof(VAR_4->name), "RAS EEPROM");
 VAR_4->lock_ops = &VAR_3;

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6)
  FUNC_0("Failed to register hw i2c, err: %d\n", VAR_6);

 return VAR_6;
}
