
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_object {int dummy; } acpi_object ;
struct list_head {int dummy; } ;
struct fwnode_handle {int dummy; } ;
struct acpi_buffer {int pointer; int member_0; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *,int *,struct acpi_buffer*,int ) ;
 scalar_t__ FUNC_3 (int ,int ,union acpi_object const*,struct list_head*,struct fwnode_handle*) ;

__attribute__((used)) static bool FUNC_4(acpi_handle VAR_2,
     const union acpi_object *VAR_3,
     struct list_head *VAR_4,
     struct fwnode_handle *VAR_5)
{
 struct acpi_buffer VAR_6 = { VAR_0 };
 acpi_status VAR_7;

 VAR_7 = FUNC_2(VAR_2, ((void*)0), ((void*)0), &VAR_6,
         VAR_1);
 if (FUNC_0(VAR_7))
  return 0;

 if (FUNC_3(VAR_6.pointer, VAR_2, VAR_3, VAR_4,
     VAR_5))
  return 1;

 FUNC_1(VAR_6.pointer);
 return 0;
}
