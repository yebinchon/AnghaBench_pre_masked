
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {scalar_t__ device_type; int handle; } ;
typedef int acpi_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,struct acpi_device*) ;
 int FUNC_2 (int ,int ,int ,struct acpi_device*) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_8)
{
 acpi_status VAR_9;

 if (VAR_8->device_type == VAR_0)
  VAR_9 =
      FUNC_1(VAR_3,
           VAR_6,
           VAR_8);
 else if (VAR_8->device_type == VAR_1)
  VAR_9 =
      FUNC_1(VAR_4,
           VAR_6,
           VAR_8);
 else
  VAR_9 = FUNC_2(VAR_8->handle,
           VAR_2,
           VAR_7,
           VAR_8);

 if (FUNC_0(VAR_9))
  return -VAR_5;
 return 0;
}
