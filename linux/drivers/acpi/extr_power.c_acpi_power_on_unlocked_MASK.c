
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_power_resource {int ref_count; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct acpi_power_resource*) ;

__attribute__((used)) static int FUNC_2(struct acpi_power_resource *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1->ref_count++) {
  FUNC_0((VAR_0,
      "Power resource [%s] already on\n",
      VAR_1->name));
 } else {
  VAR_2 = FUNC_1(VAR_1);
  if (VAR_2)
   VAR_1->ref_count--;
 }
 return VAR_2;
}
