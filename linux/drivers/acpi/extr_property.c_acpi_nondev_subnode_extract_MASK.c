
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* elements; } ;
union acpi_object {TYPE_3__ package; } ;
struct list_head {int dummy; } ;
struct fwnode_handle {int dummy; } ;
struct TYPE_10__ {union acpi_object const* pointer; int subnodes; int properties; } ;
struct TYPE_11__ {int * ops; } ;
struct acpi_data_node {int sibling; TYPE_4__ data; int * handle; TYPE_6__ fwnode; struct fwnode_handle* parent; int name; } ;
typedef int acpi_status ;
typedef int * acpi_handle ;
struct TYPE_7__ {int pointer; } ;
struct TYPE_8__ {TYPE_1__ string; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,union acpi_object const*,TYPE_4__*,TYPE_6__*) ;
 int FUNC_3 (union acpi_object const*,TYPE_4__*) ;
 int FUNC_4 (int *,int **) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct acpi_data_node*) ;
 struct acpi_data_node* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,struct list_head*) ;

__attribute__((used)) static bool FUNC_9(const union acpi_object *VAR_2,
     acpi_handle VAR_3,
     const union acpi_object *VAR_4,
     struct list_head *VAR_5,
     struct fwnode_handle *VAR_6)
{
 struct acpi_data_node *VAR_7;
 bool VAR_8;

 VAR_7 = FUNC_7(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return 0;

 VAR_7->name = VAR_4->package.elements[0].string.pointer;
 VAR_7->fwnode.ops = &VAR_1;
 VAR_7->parent = VAR_6;
 FUNC_1(&VAR_7->data.properties);
 FUNC_1(&VAR_7->data.subnodes);

 VAR_8 = FUNC_3(VAR_2, &VAR_7->data);

 if (VAR_3) {
  acpi_handle VAR_9;
  acpi_status VAR_10;







  VAR_10 = FUNC_4(VAR_3, &VAR_9);
  if (FUNC_0(VAR_10)
      && FUNC_2(VAR_9, VAR_2, &VAR_7->data,
            &VAR_7->fwnode))
   VAR_8 = 1;
 } else if (FUNC_2(((void*)0), VAR_2, &VAR_7->data,
        &VAR_7->fwnode)) {
  VAR_8 = 1;
 }

 if (VAR_8) {
  VAR_7->handle = VAR_3;
  VAR_7->data.pointer = VAR_2;
  FUNC_8(&VAR_7->sibling, VAR_5);
  return 1;
 }

 FUNC_6(VAR_7);
 FUNC_5(VAR_3, "Invalid properties/subnodes data, skipping\n");
 return 0;
}
