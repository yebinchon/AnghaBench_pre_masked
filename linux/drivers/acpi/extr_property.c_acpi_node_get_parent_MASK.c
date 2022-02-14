
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fwnode_handle {int dummy; } ;
struct acpi_device {int dummy; } ;
typedef int acpi_handle ;
struct TYPE_4__ {struct fwnode_handle* parent; } ;
struct TYPE_3__ {int handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct acpi_device**) ;
 struct fwnode_handle* FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (struct fwnode_handle const*) ;
 scalar_t__ FUNC_5 (struct fwnode_handle const*) ;
 TYPE_2__* FUNC_6 (struct fwnode_handle const*) ;
 TYPE_1__* FUNC_7 (struct fwnode_handle const*) ;

struct fwnode_handle *FUNC_8(const struct fwnode_handle *VAR_0)
{
 if (FUNC_4(VAR_0)) {

  return FUNC_6(VAR_0)->parent;
 } else if (FUNC_5(VAR_0)) {
  acpi_handle VAR_1, VAR_2;

  VAR_1 = FUNC_7(VAR_0)->handle;
  if (FUNC_0(FUNC_3(VAR_1, &VAR_2))) {
   struct acpi_device *VAR_3;

   if (!FUNC_1(VAR_2, &VAR_3))
    return FUNC_2(VAR_3);
  }
 }

 return ((void*)0);
}
