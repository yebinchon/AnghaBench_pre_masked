
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;
struct acpi_device {int handle; } ;
typedef int acpi_status ;


 struct acpi_device* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int *,unsigned long long*) ;
 int VAR_1 ;
 int FUNC_3 (struct platform_device*,struct acpi_device*) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct acpi_device *VAR_3;
 acpi_status VAR_4;
 unsigned long long VAR_5;
 int VAR_6;

 VAR_3 = FUNC_0(&(VAR_2->dev));
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_3->handle, "PTYP", ((void*)0), &VAR_5);
 if (FUNC_1(VAR_4))
  return -VAR_0;

 if (VAR_5 != 0x11)
  return -VAR_0;

 VAR_6 = FUNC_4(&VAR_2->dev.kobj,
        &VAR_1);
 if (VAR_6)
  return VAR_6;

 FUNC_3(VAR_2, VAR_3);

 return 0;
}
