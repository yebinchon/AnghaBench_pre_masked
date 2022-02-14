
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct acpi_ec_query_handler {int node; int kref; void* data; int func; int handle; int query_bit; } ;
struct acpi_ec {int mutex; int list; } ;
typedef int acpi_handle ;
typedef int acpi_ec_query_func ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct acpi_ec_query_handler* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct acpi_ec *VAR_2, u8 VAR_3,
         acpi_handle VAR_4, acpi_ec_query_func VAR_5,
         void *VAR_6)
{
 struct acpi_ec_query_handler *VAR_7 =
     FUNC_1(sizeof(struct acpi_ec_query_handler), VAR_1);

 if (!VAR_7)
  return -VAR_0;

 VAR_7->query_bit = VAR_3;
 VAR_7->handle = VAR_4;
 VAR_7->func = VAR_5;
 VAR_7->data = VAR_6;
 FUNC_3(&VAR_2->mutex);
 FUNC_0(&VAR_7->kref);
 FUNC_2(&VAR_7->node, &VAR_2->list);
 FUNC_4(&VAR_2->mutex);
 return 0;
}
