
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_i2c_dev {int shared_with_punit; int release_lock; int acquire_lock; int dev; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int *,unsigned long long*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_5(struct dw_i2c_dev *VAR_3)
{
 acpi_status VAR_4;
 unsigned long long VAR_5 = 0;
 acpi_handle VAR_6;

 if (!VAR_3 || !VAR_3->dev)
  return 0;

 VAR_6 = FUNC_1(VAR_3->dev);
 if (!VAR_6)
  return 0;

 VAR_4 = FUNC_2(VAR_6, "_SEM", ((void*)0), &VAR_5);
 if (FUNC_0(VAR_4))
  return 0;

 if (!VAR_5)
  return 0;

 if (!FUNC_4())
  return -VAR_0;

 FUNC_3(VAR_3->dev, "I2C bus managed by PUNIT\n");
 VAR_3->acquire_lock = VAR_1;
 VAR_3->release_lock = VAR_2;
 VAR_3->shared_with_punit = 1;

 return 0;
}
