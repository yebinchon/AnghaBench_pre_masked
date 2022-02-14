
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_scan_handler {int list_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;

int FUNC_1(struct acpi_scan_handler *VAR_2)
{
 if (!VAR_2)
  return -VAR_0;

 FUNC_0(&VAR_2->list_node, &VAR_1);
 return 0;
}
