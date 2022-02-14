
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_table_header {size_t length; } ;
typedef scalar_t__ acpi_status ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,struct acpi_table_header**) ;
 scalar_t__ VAR_6 ;
 void* FUNC_3 (struct acpi_table_header*,size_t,int ) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

int FUNC_7(void **VAR_7, size_t *VAR_8)
{
 struct acpi_table_header *VAR_9;
 acpi_status VAR_10;
 void *VAR_11;

 if (!VAR_7)
  return -VAR_2;

 *VAR_7 = ((void*)0);


 VAR_10 = FUNC_2(VAR_1, 0, &VAR_9);
 if (VAR_10 == VAR_0) {
  FUNC_6("CRAT table not found\n");
  return -VAR_3;
 } else if (FUNC_0(VAR_10)) {
  const char *VAR_12 = FUNC_1(VAR_10);

  FUNC_4("CRAT table error: %s\n", VAR_12);
  return -VAR_2;
 }

 if (VAR_6) {
  FUNC_5("CRAT table disabled by module option\n");
  return -VAR_3;
 }

 VAR_11 = FUNC_3(VAR_9, VAR_9->length, VAR_5);
 if (!VAR_11)
  return -VAR_4;

 *VAR_7 = VAR_11;
 *VAR_8 = VAR_9->length;

 return 0;
}
