
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int count1; int object_type1; int type; } ;
struct TYPE_5__ {int expected_btypes; int argument_list; } ;
union acpi_predefined_info {TYPE_3__ ret_info; TYPE_2__ info; } ;
typedef int u32 ;
struct TYPE_4__ {int ascii; } ;
struct acpi_namespace_node {TYPE_1__ name; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_handle ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (char*,struct acpi_namespace_node*,union acpi_predefined_info const*) ;
 char* FUNC_3 (struct acpi_namespace_node*,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int) ;
 union acpi_predefined_info* FUNC_6 (int ) ;

__attribute__((used)) static acpi_status
FUNC_7(acpi_handle VAR_3,
      u32 VAR_4,
      void *VAR_5, void **VAR_6)
{
 struct acpi_namespace_node *VAR_7 =
     (struct acpi_namespace_node *)VAR_3;
 u32 *VAR_8 = (u32 *)VAR_5;
 const union acpi_predefined_info *VAR_9;
 const union acpi_predefined_info *VAR_10 = ((void*)0);
 char *VAR_11;
 char VAR_12[48];

 VAR_9 = FUNC_6(VAR_7->name.ascii);
 if (!VAR_9) {
  return (VAR_1);
 }

 VAR_11 = FUNC_3(VAR_7, VAR_2);
 if (!VAR_11) {
  return (VAR_1);
 }



 if (VAR_9->info.expected_btypes & VAR_0) {
  VAR_10 = VAR_9 + 1;
 }

 FUNC_5(VAR_12,
       VAR_9->info.expected_btypes);

 FUNC_4("%-32s Arguments %X, Return Types: %s", VAR_11,
         FUNC_1(VAR_9->info.argument_list),
         VAR_12);

 if (VAR_10) {
  FUNC_4(" (PkgType %2.2X, ObjType %2.2X, Count %2.2X)",
          VAR_10->ret_info.type,
          VAR_10->ret_info.object_type1,
          VAR_10->ret_info.count1);
 }

 FUNC_4("\n");



 FUNC_2(VAR_11, VAR_7, VAR_9);

 FUNC_0(VAR_11);
 (*VAR_8)++;
 return (VAR_1);
}
