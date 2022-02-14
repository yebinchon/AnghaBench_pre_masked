
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_data_node {scalar_t__ handle; } ;
typedef int ssize_t ;


 int FUNC_0 (scalar_t__,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct acpi_data_node *VAR_0, char *VAR_1)
{
 return VAR_0->handle ? FUNC_0(VAR_0->handle, VAR_1) : 0;
}
