
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apei_exec_context {int value; int ip; } ;
struct acpi_whea_header {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct apei_exec_context *VAR_1,
     struct acpi_whea_header *VAR_2)
{
 VAR_1->ip = VAR_1->value;
 return VAR_0;
}
