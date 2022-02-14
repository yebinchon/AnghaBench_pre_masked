
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; } ;
union acpi_object {TYPE_1__ package; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct acpi_namespace_node*,int ,union acpi_object**) ;
 int FUNC_2 (union acpi_object*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static acpi_status FUNC_4(struct acpi_namespace_node *VAR_1)
{
 union acpi_object *VAR_2 = ((void*)0);
 acpi_status VAR_3;



 VAR_3 = FUNC_1(VAR_1, VAR_0, &VAR_2);
 if (FUNC_0(VAR_3)) {
  return (VAR_3);
 }

 FUNC_3(" %.2X Elements", VAR_2->package.count);
 FUNC_2(VAR_2);
 return (VAR_3);
}
