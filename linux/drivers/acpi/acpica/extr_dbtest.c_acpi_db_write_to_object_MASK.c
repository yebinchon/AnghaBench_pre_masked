
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int handle; int actual_type; } ;
union acpi_object {TYPE_1__ reference; int type; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_namespace_node {int type; } ;
typedef int acpi_status ;


 int FUNC_0 (int ,struct acpi_namespace_node*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int *,struct acpi_object_list*,int *) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (union acpi_object*,union acpi_object*,int) ;
 int VAR_5 ;

__attribute__((used)) static acpi_status
FUNC_6(struct acpi_namespace_node *VAR_6,
   union acpi_object *VAR_7)
{
 struct acpi_object_list VAR_8;
 union acpi_object VAR_9[2];
 acpi_status VAR_10;

 VAR_9[0].type = VAR_0;
 VAR_9[0].reference.actual_type = VAR_6->type;
 VAR_9[0].reference.handle = FUNC_0(VAR_4, VAR_6);



 FUNC_5(&VAR_9[1], VAR_7, sizeof(union acpi_object));

 VAR_8.count = 2;
 VAR_8.pointer = VAR_9;

 VAR_3 = VAR_2;
 VAR_10 = FUNC_2(VAR_5, ((void*)0), &VAR_8, ((void*)0));
 VAR_3 = VAR_1;

 if (FUNC_1(VAR_10)) {
  FUNC_4("Could not write to object, %s",
          FUNC_3(VAR_10));
 }

 return (VAR_10);
}
