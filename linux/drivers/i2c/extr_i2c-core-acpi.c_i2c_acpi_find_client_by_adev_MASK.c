
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct acpi_device {int dummy; } ;


 struct device* FUNC_0 (int *,struct acpi_device*) ;
 int VAR_0 ;
 struct i2c_client* FUNC_1 (struct device*) ;

__attribute__((used)) static struct i2c_client *FUNC_2(struct acpi_device *VAR_1)
{
 struct device *VAR_2;

 VAR_2 = FUNC_0(&VAR_0, VAR_1);
 return VAR_2 ? FUNC_1(VAR_2) : ((void*)0);
}
