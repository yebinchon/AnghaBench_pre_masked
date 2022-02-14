
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_table_header {int dummy; } ;
struct acpi_table_attr {int node; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,struct acpi_table_header**) ;
 int VAR_4 ;
 int FUNC_2 (int ,struct acpi_table_attr*,struct acpi_table_header*) ;
 int VAR_5 ;
 int FUNC_3 (struct acpi_table_header*) ;
 int VAR_6 ;
 int FUNC_4 (struct acpi_table_attr*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 struct acpi_table_attr* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_10(void)
{
 struct acpi_table_attr *VAR_9;
 struct acpi_table_header *VAR_10 = ((void*)0);
 int VAR_11;
 acpi_status VAR_12;
 int VAR_13;

 VAR_8 = FUNC_5("tables", VAR_4);
 if (!VAR_8)
  goto err;

 VAR_7 = FUNC_5("data", VAR_8);
 if (!VAR_7)
  goto err_tables_data;

 VAR_6 = FUNC_5("dynamic", VAR_8);
 if (!VAR_6)
  goto err_dynamic_tables;

 for (VAR_11 = 0;; VAR_11++) {
  VAR_12 = FUNC_1(VAR_11, &VAR_10);

  if (VAR_12 == VAR_0)
   break;

  if (FUNC_0(VAR_12))
   continue;

  VAR_9 = FUNC_8(sizeof(*VAR_9), VAR_2);
  if (!VAR_9)
   return -VAR_1;

  VAR_13 = FUNC_2(VAR_8,
        VAR_9, VAR_10);
  if (VAR_13) {
   FUNC_4(VAR_9);
   return VAR_13;
  }
  FUNC_9(&VAR_9->node, &VAR_5);
  FUNC_3(VAR_10);
 }

 FUNC_7(VAR_8, VAR_3);
 FUNC_7(VAR_7, VAR_3);
 FUNC_7(VAR_6, VAR_3);

 return 0;
err_dynamic_tables:
 FUNC_6(VAR_7);
err_tables_data:
 FUNC_6(VAR_8);
err:
 return -VAR_1;
}
