
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_device {scalar_t__ handle; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,struct acpi_device**) ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static acpi_status
FUNC_3(acpi_handle VAR_4, u32 VAR_5, void *VAR_6,
   void **VAR_7)
{
 struct acpi_device *VAR_8 = VAR_6;
 struct acpi_device *VAR_9;
 int VAR_10;

 if (VAR_4 == VAR_8->handle)
  return VAR_2;

 VAR_10 = FUNC_0(VAR_4, &VAR_9);
 if (VAR_10)
  return VAR_3;

 if (!FUNC_2(FUNC_1(VAR_9), VAR_0))
   return VAR_1;

 return VAR_3;
}
