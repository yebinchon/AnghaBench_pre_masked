
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct acpi_namespace_node {int dummy; } ;
typedef scalar_t__ acpi_size ;


 char* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct acpi_namespace_node*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct acpi_namespace_node*,char*,scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_5 (char*) ;

char *FUNC_6(struct acpi_namespace_node *VAR_4,
          u8 VAR_5)
{
 char *VAR_6;
 acpi_size VAR_7;

 FUNC_3(VAR_3, VAR_4);



 VAR_7 = FUNC_4(VAR_4, ((void*)0), 0, VAR_5);
 if (!VAR_7) {
  FUNC_5(((void*)0));
 }



 VAR_6 = FUNC_0(VAR_7);
 if (!VAR_6) {
  FUNC_2((VAR_2, "Could not allocate %u bytes", (u32)VAR_7));
  FUNC_5(((void*)0));
 }



 (void)FUNC_4(VAR_4, VAR_6, VAR_7,
         VAR_5);

 FUNC_1((VAR_0, "%s: Path \"%s\"\n",
         VAR_1, VAR_6));

 FUNC_5(VAR_6);
}
