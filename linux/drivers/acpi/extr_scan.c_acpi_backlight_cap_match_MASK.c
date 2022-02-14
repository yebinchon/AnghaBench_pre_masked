
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,char*) ;

__attribute__((used)) static acpi_status
FUNC_2(acpi_handle VAR_3, u32 VAR_4, void *VAR_5,
     void **VAR_6)
{
 long *VAR_7 = VAR_5;

 if (FUNC_1(VAR_3, "_BCM") &&
     FUNC_1(VAR_3, "_BCL")) {
  FUNC_0((VAR_0, "Found generic backlight "
      "support\n"));
  *VAR_7 |= VAR_1;

  return VAR_2;
 }
 return 0;
}
