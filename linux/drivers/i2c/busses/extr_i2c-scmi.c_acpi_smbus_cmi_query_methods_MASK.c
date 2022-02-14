
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_smbus_cmi {int dummy; } ;
struct acpi_buffer {int member_0; char* member_1; } ;
typedef int node_name ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,struct acpi_buffer*) ;
 int FUNC_2 (struct acpi_smbus_cmi*,char*) ;

__attribute__((used)) static acpi_status FUNC_3(acpi_handle VAR_2, u32 VAR_3,
   void *VAR_4, void **VAR_5)
{
 char VAR_6[5];
 struct acpi_buffer VAR_7 = { sizeof(VAR_6), VAR_6 };
 struct acpi_smbus_cmi *VAR_8 = VAR_4;
 acpi_status VAR_9;

 VAR_9 = FUNC_1(VAR_2, VAR_0, &VAR_7);

 if (FUNC_0(VAR_9))
  FUNC_2(VAR_8, VAR_6);

 return VAR_1;
}
