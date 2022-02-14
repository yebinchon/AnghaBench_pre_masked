
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* pointer; } ;
struct TYPE_3__ {int value; } ;
union acpi_object {TYPE_2__ string; TYPE_1__ integer; } ;
typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct acpi_device_data {int dummy; } ;
typedef enum dev_prop_type { ____Placeholder_dev_prop_type } dev_prop_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct acpi_device_data const*,char const*,int ,union acpi_object const**) ;

__attribute__((used)) static int FUNC_1(const struct acpi_device_data *VAR_9,
          const char *VAR_10,
          enum dev_prop_type VAR_11, void *VAR_12)
{
 const union acpi_object *VAR_13;
 int VAR_14;

 if (!VAR_12)
  return -VAR_4;

 if (VAR_11 >= 128 && VAR_11 <= VAR_3) {
  VAR_14 = FUNC_0(VAR_9, VAR_10, VAR_0, &VAR_13);
  if (VAR_14)
   return VAR_14;

  switch (VAR_11) {
  case 128:
   if (VAR_13->integer.value > VAR_8)
    return -VAR_5;
   *(u8 *)VAR_12 = VAR_13->integer.value;
   break;
  case 130:
   if (VAR_13->integer.value > VAR_6)
    return -VAR_5;
   *(u16 *)VAR_12 = VAR_13->integer.value;
   break;
  case 129:
   if (VAR_13->integer.value > VAR_7)
    return -VAR_5;
   *(u32 *)VAR_12 = VAR_13->integer.value;
   break;
  default:
   *(u64 *)VAR_12 = VAR_13->integer.value;
   break;
  }
 } else if (VAR_11 == VAR_2) {
  VAR_14 = FUNC_0(VAR_9, VAR_10, VAR_1, &VAR_13);
  if (VAR_14)
   return VAR_14;

  *(char **)VAR_12 = VAR_13->string.pointer;

  return 1;
 } else {
  VAR_14 = -VAR_4;
 }
 return VAR_14;
}
