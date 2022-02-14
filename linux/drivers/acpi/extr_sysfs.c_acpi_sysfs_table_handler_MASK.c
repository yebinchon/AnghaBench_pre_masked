
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_table_attr {int node; } ;
typedef int acpi_status ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct acpi_table_attr*,void*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct acpi_table_attr*) ;
 struct acpi_table_attr* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;

acpi_status FUNC_4(u32 VAR_7, void *VAR_8, void *VAR_9)
{
 struct acpi_table_attr *VAR_10;

 switch (VAR_7) {
 case 131:
  VAR_10 =
      FUNC_2(sizeof(struct acpi_table_attr), VAR_4);
  if (!VAR_10)
   return VAR_2;

  if (FUNC_0(VAR_6,
      VAR_10, VAR_8)) {
   FUNC_1(VAR_10);
   return VAR_1;
  }
  FUNC_3(&VAR_10->node, &VAR_5);
  break;
 case 130:
 case 128:
 case 129:





  break;
 default:
  return VAR_0;
 }
 return VAR_3;
}
