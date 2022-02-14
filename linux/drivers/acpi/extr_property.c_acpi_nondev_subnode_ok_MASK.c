
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* elements; } ;
union acpi_object {TYPE_3__ package; } ;
struct list_head {int dummy; } ;
struct fwnode_handle {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;
struct TYPE_4__ {int pointer; } ;
struct TYPE_5__ {TYPE_1__ string; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,union acpi_object const*,struct list_head*,struct fwnode_handle*) ;

__attribute__((used)) static bool FUNC_3(acpi_handle VAR_0,
       const union acpi_object *VAR_1,
       struct list_head *VAR_2,
       struct fwnode_handle *VAR_3)
{
 acpi_handle VAR_4;
 acpi_status VAR_5;

 if (!VAR_0)
  return 0;

 VAR_5 = FUNC_1(VAR_0, VAR_1->package.elements[1].string.pointer,
     &VAR_4);
 if (FUNC_0(VAR_5))
  return 0;

 return FUNC_2(VAR_4, VAR_1, VAR_2, VAR_3);
}
