
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_walk_info {int count; } ;
struct acpi_buffer {scalar_t__ pointer; int length; } ;
typedef int acpi_status ;
typedef char* acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int ,struct acpi_walk_info*,int *) ;
 int FUNC_3 (char*,struct acpi_buffer*,int ) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static acpi_status
FUNC_5(acpi_handle VAR_3,
      u32 VAR_4,
      void *VAR_5, void **VAR_6)
{
 struct acpi_walk_info *VAR_7 = (struct acpi_walk_info *)VAR_5;
 struct acpi_buffer VAR_8;
 acpi_status VAR_9;

 VAR_7->count++;



 VAR_8.length = VAR_0;
 VAR_9 = FUNC_3(VAR_3, &VAR_8, VAR_2);
 if (FUNC_0(VAR_9)) {
  FUNC_4("Could Not get pathname for object %p\n",
          VAR_3);
  return (VAR_1);
 }

 FUNC_4("%32s", (char *)VAR_8.pointer);
 FUNC_1(VAR_8.pointer);



 (void)FUNC_2(VAR_3, VAR_4, VAR_7, ((void*)0));
 return (VAR_1);
}
