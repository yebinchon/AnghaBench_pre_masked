
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_namespace_node {int dummy; } ;
typedef int acpi_size ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct acpi_namespace_node*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct acpi_namespace_node*,int *,int ,int ) ;

acpi_size FUNC_3(struct acpi_namespace_node *VAR_3)
{
 acpi_size VAR_4;



 if (FUNC_1(VAR_3) != VAR_0) {
  FUNC_0((VAR_1,
       "Invalid/cached reference target node: %p, descriptor type %d",
       VAR_3, FUNC_1(VAR_3)));
  return (0);
 }

 VAR_4 = FUNC_2(VAR_3, ((void*)0), 0, VAR_2);
 return (VAR_4);
}
