
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_object {int dummy; } acpi_object ;
struct fwnode_handle {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,int ,union acpi_object const**) ;
 int FUNC_1 (struct fwnode_handle const*) ;

int FUNC_2(const struct fwnode_handle *VAR_1,
         const char *VAR_2, void **VAR_3)
{
 return FUNC_0(FUNC_1(VAR_1),
          VAR_2, VAR_0,
          (const union acpi_object **)VAR_3);
}
