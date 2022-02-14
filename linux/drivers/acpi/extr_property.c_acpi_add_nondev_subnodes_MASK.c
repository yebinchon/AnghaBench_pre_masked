
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int count; union acpi_object* elements; } ;
struct TYPE_3__ {int handle; } ;
union acpi_object {int type; TYPE_2__ package; TYPE_1__ reference; } ;
struct list_head {int dummy; } ;
struct fwnode_handle {int dummy; } ;
typedef int acpi_handle ;





 int FUNC_0 (int ,union acpi_object const*,struct list_head*,struct fwnode_handle*) ;
 int FUNC_1 (union acpi_object const*,int *,union acpi_object const*,struct list_head*,struct fwnode_handle*) ;
 int FUNC_2 (int ,union acpi_object const*,struct list_head*,struct fwnode_handle*) ;

__attribute__((used)) static int FUNC_3(acpi_handle VAR_0,
        const union acpi_object *VAR_1,
        struct list_head *VAR_2,
        struct fwnode_handle *VAR_3)
{
 bool VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1->package.count; VAR_5++) {
  const union acpi_object *VAR_6, *VAR_7;
  acpi_handle VAR_8;
  bool VAR_9;

  VAR_6 = &VAR_1->package.elements[VAR_5];

  if (VAR_6->package.count != 2)
   continue;


  if (VAR_6->package.elements[0].type != 128)
   continue;


  switch (VAR_6->package.elements[1].type) {
  case 128:
   VAR_9 = FUNC_2(VAR_0, VAR_6, VAR_2,
        VAR_3);
   break;
  case 130:
   VAR_8 = VAR_6->package.elements[1].reference.handle;
   VAR_9 = FUNC_0(VAR_8, VAR_6, VAR_2,
            VAR_3);
   break;
  case 129:
   VAR_7 = &VAR_6->package.elements[1];
   VAR_9 = FUNC_1(VAR_7, ((void*)0), VAR_6,
            VAR_2, VAR_3);
   break;
  default:
   VAR_9 = 0;
   break;
  }
  VAR_4 = VAR_4 || VAR_9;
 }

 return VAR_4;
}
