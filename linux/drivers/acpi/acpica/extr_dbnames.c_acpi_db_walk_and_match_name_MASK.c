
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct acpi_walk_info {int display_type; int debug_level; int owner_id; scalar_t__ count; } ;
struct TYPE_2__ {char* ascii; } ;
struct acpi_namespace_node {TYPE_1__ name; } ;
struct acpi_buffer {scalar_t__ pointer; int length; } ;
typedef int acpi_status ;
typedef char* acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,int,struct acpi_walk_info*,int *) ;
 int FUNC_3 (char*,struct acpi_buffer*,int ) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static acpi_status
FUNC_5(acpi_handle VAR_7,
       u32 VAR_8,
       void *VAR_9, void **VAR_10)
{
 acpi_status VAR_11;
 char *VAR_12 = (char *)VAR_9;
 u32 VAR_13;
 struct acpi_buffer VAR_14;
 struct acpi_walk_info VAR_15;



 for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {



  if ((VAR_12[VAR_13] != '?') &&
      (VAR_12[VAR_13] != ((struct acpi_namespace_node *)
        VAR_7)->name.ascii[VAR_13])) {



   return (VAR_5);
  }
 }



 VAR_14.length = VAR_0;
 VAR_11 = FUNC_3(VAR_7, &VAR_14, VAR_6);
 if (FUNC_0(VAR_11)) {
  FUNC_4("Could Not get pathname for object %p\n",
          VAR_7);
 } else {
  VAR_15.count = 0;
  VAR_15.owner_id = VAR_3;
  VAR_15.debug_level = VAR_4;
  VAR_15.display_type = VAR_2 | VAR_1;

  FUNC_4("%32s", (char *)VAR_14.pointer);
  (void)FUNC_2(VAR_7, VAR_8, &VAR_15,
           ((void*)0));
  FUNC_1(VAR_14.pointer);
 }

 return (VAR_5);
}
