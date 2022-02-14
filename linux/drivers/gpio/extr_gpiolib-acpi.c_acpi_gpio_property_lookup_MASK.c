
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fwnode_reference_args {int nargs; struct fwnode_handle* fwnode; int * args; } ;
struct fwnode_handle {int dummy; } ;
struct TYPE_2__ {unsigned int quirks; void* adev; } ;
struct acpi_gpio_lookup {int active_low; TYPE_1__ info; int pin_index; int index; } ;
struct acpi_device {int dummy; } ;
typedef int args ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fwnode_handle*,char const*,int,int,struct fwnode_reference_args*) ;
 int FUNC_1 (struct acpi_device*,char const*,int,struct fwnode_reference_args*,unsigned int*) ;
 int FUNC_2 (struct fwnode_reference_args*,int ,int) ;
 void* FUNC_3 (struct fwnode_handle*) ;

__attribute__((used)) static int FUNC_4(struct fwnode_handle *VAR_2,
         const char *VAR_3, int VAR_4,
         struct acpi_gpio_lookup *VAR_5)
{
 struct fwnode_reference_args VAR_6;
 unsigned int VAR_7 = 0;
 int VAR_8;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, 3,
       &VAR_6);
 if (VAR_8) {
  struct acpi_device *VAR_9 = FUNC_3(VAR_2);

  if (!VAR_9)
   return VAR_8;

  if (!FUNC_1(VAR_9, VAR_3, VAR_4, &VAR_6,
            &VAR_7))
   return VAR_8;
 }




 if (!FUNC_3(VAR_6.fwnode))
  return -VAR_0;
 if (VAR_6.nargs != 3)
  return -VAR_1;

 VAR_5->index = VAR_6.args[0];
 VAR_5->pin_index = VAR_6.args[1];
 VAR_5->active_low = !!VAR_6.args[2];

 VAR_5->info.adev = FUNC_3(VAR_6.fwnode);
 VAR_5->info.quirks = VAR_7;

 return 0;
}
