
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union acpi_object {int dummy; } acpi_object ;
struct TYPE_5__ {int of_compatible_ok; } ;
struct TYPE_8__ {union acpi_object const* of_compatible; } ;
struct acpi_device {TYPE_1__ flags; TYPE_4__ data; TYPE_3__* parent; } ;
struct TYPE_6__ {scalar_t__ of_compatible_ok; } ;
struct TYPE_7__ {TYPE_2__ flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,char*,int ,union acpi_object const**) ;
 int FUNC_1 (struct acpi_device*,char*,int ,union acpi_object const**) ;

__attribute__((used)) static void FUNC_2(struct acpi_device *VAR_1)
{
 const union acpi_object *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_1->data, "compatible",
        VAR_0, &VAR_2);
 if (VAR_3) {
  VAR_3 = FUNC_1(VAR_1, "compatible",
         VAR_0, &VAR_2);
  if (VAR_3) {
   if (VAR_1->parent
       && VAR_1->parent->flags.of_compatible_ok)
    goto out;

   return;
  }
 }
 VAR_1->data.of_compatible = VAR_2;

 out:
 VAR_1->flags.of_compatible_ok = 1;
}
