
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fwnode_handle {int dummy; } ;
struct device {TYPE_1__* of_node; } ;
struct acpi_device {int dummy; } ;
struct TYPE_2__ {struct fwnode_handle fwnode; } ;


 struct acpi_device* FUNC_0 (struct device*) ;
 struct fwnode_handle* FUNC_1 (struct acpi_device*) ;
 struct fwnode_handle* FUNC_2 (struct fwnode_handle*,struct fwnode_handle*) ;

struct fwnode_handle *FUNC_3(struct device *VAR_0,
       struct fwnode_handle *VAR_1)
{
 struct acpi_device *VAR_2 = FUNC_0(VAR_0);
 struct fwnode_handle *VAR_3 = ((void*)0);

 if (VAR_0->of_node)
  VAR_3 = &VAR_0->of_node->fwnode;
 else if (VAR_2)
  VAR_3 = FUNC_1(VAR_2);

 return FUNC_2(VAR_3, VAR_1);
}
