
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int value; } ;
struct TYPE_7__ {int pointer; } ;
struct TYPE_6__ {int handle; } ;
struct TYPE_5__ {size_t count; union acpi_object* elements; } ;
union acpi_object {int type; TYPE_4__ integer; TYPE_3__ string; TYPE_2__ reference; TYPE_1__ package; } ;
typedef size_t u32 ;
struct fwnode_reference_args {size_t nargs; int * args; struct fwnode_handle* fwnode; } ;
struct fwnode_handle {int dummy; } ;
struct acpi_device_data {int dummy; } ;
struct acpi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int ,struct acpi_device**) ;
 int FUNC_1 (struct acpi_device_data const*,char const*,int ,union acpi_object const**) ;
 struct acpi_device_data* FUNC_2 (struct fwnode_handle const*) ;
 struct fwnode_handle* FUNC_3 (struct fwnode_handle*,int ) ;
 void* FUNC_4 (struct acpi_device*) ;

int FUNC_5(const struct fwnode_handle *VAR_9,
 const char *VAR_10, size_t VAR_11, size_t VAR_12,
 struct fwnode_reference_args *VAR_13)
{
 const union acpi_object *VAR_14, *VAR_15;
 const union acpi_object *VAR_16;
 const struct acpi_device_data *VAR_17;
 struct acpi_device *VAR_18;
 int VAR_19, VAR_20 = 0;

 VAR_17 = FUNC_2(VAR_9);
 if (!VAR_17)
  return -VAR_7;

 VAR_19 = FUNC_1(VAR_17, VAR_10, VAR_0, &VAR_16);
 if (VAR_19)
  return VAR_19 == -VAR_5 ? -VAR_7 : -VAR_5;





 if (VAR_16->type == VAR_2) {
  if (VAR_11)
   return -VAR_5;

  VAR_19 = FUNC_0(VAR_16->reference.handle, &VAR_18);
  if (VAR_19)
   return VAR_19 == -VAR_6 ? -VAR_5 : VAR_19;

  VAR_13->fwnode = FUNC_4(VAR_18);
  VAR_13->nargs = 0;
  return 0;
 }
 if (VAR_16->type != VAR_3)
  return -VAR_5;
 if (VAR_11 >= VAR_16->package.count)
  return -VAR_7;

 VAR_14 = VAR_16->package.elements;
 VAR_15 = VAR_14 + VAR_16->package.count;

 while (VAR_14 < VAR_15) {
  u32 VAR_21, VAR_22;

  if (VAR_14->type == VAR_2) {
   struct fwnode_handle *VAR_23;

   VAR_19 = FUNC_0(VAR_14->reference.handle,
        &VAR_18);
   if (VAR_19)
    return -VAR_5;

   VAR_21 = 0;
   VAR_14++;





   for (VAR_23 = FUNC_4(VAR_18);
        VAR_14 < VAR_15 && VAR_14->type == VAR_4;
        VAR_14++) {
    VAR_23 = FUNC_3(
     VAR_23, VAR_14->string.pointer);
    if (!VAR_23)
     return -VAR_5;
   }


   for (VAR_22 = 0; VAR_14 + VAR_22 < VAR_15 && VAR_22 < VAR_12; VAR_22++) {
    int VAR_24 = VAR_14[VAR_22].type;

    if (VAR_24 == VAR_1)
     VAR_21++;
    else if (VAR_24 == VAR_2)
     break;
    else
     return -VAR_5;
   }

   if (VAR_21 > VAR_8)
    return -VAR_5;

   if (VAR_20 == VAR_11) {
    VAR_13->fwnode = VAR_23;
    VAR_13->nargs = VAR_21;
    for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22++)
     VAR_13->args[VAR_22] = VAR_14[VAR_22].integer.value;

    return 0;
   }

   VAR_14 += VAR_21;
  } else if (VAR_14->type == VAR_1) {
   if (VAR_20 == VAR_11)
    return -VAR_7;
   VAR_14++;
  } else {
   return -VAR_5;
  }

  VAR_20++;
 }

 return -VAR_7;
}
