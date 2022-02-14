
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {scalar_t__ device_type; int handle; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct acpi_device *VAR_7)
{
 if (VAR_7->device_type == VAR_0)
  FUNC_0(VAR_3,
      VAR_5);
 else if (VAR_7->device_type == VAR_1)
  FUNC_0(VAR_4,
      VAR_5);
 else
  FUNC_1(VAR_7->handle, VAR_2,
        VAR_6);
}
