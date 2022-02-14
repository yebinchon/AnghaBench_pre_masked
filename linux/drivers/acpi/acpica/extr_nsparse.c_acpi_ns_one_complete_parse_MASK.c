
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_parse_object {int dummy; } acpi_parse_object ;
typedef int u8 ;
typedef scalar_t__ u32 ;
struct acpi_walk_state {int namespace_override; } ;
struct acpi_table_header {int length; int signature; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_owner_id ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct acpi_walk_state* FUNC_4 (int ,int *,int *,int *) ;
 int FUNC_5 (struct acpi_walk_state*) ;
 int FUNC_6 (struct acpi_walk_state*,union acpi_parse_object*,int *,int *,scalar_t__,int *,int ) ;
 int FUNC_7 (struct acpi_namespace_node*,int ,struct acpi_walk_state*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 struct acpi_namespace_node* VAR_7 ;
 int FUNC_10 (scalar_t__,struct acpi_table_header**) ;
 union acpi_parse_object* FUNC_11 (int *) ;
 int FUNC_12 (union acpi_parse_object*) ;
 int FUNC_13 (union acpi_parse_object*) ;
 int FUNC_14 (struct acpi_walk_state*) ;
 int FUNC_15 (scalar_t__,int *) ;
 int VAR_8 ;
 int FUNC_16 (int ) ;

acpi_status
FUNC_17(u32 VAR_9,
      u32 VAR_10,
      struct acpi_namespace_node *VAR_11)
{
 union acpi_parse_object *VAR_12;
 acpi_status VAR_13;
 u32 VAR_14;
 u8 *VAR_15;
 struct acpi_walk_state *VAR_16;
 struct acpi_table_header *VAR_17;
 acpi_owner_id VAR_18;

 FUNC_3(VAR_8);

 VAR_13 = FUNC_10(VAR_10, &VAR_17);
 if (FUNC_2(VAR_13)) {
  FUNC_16(VAR_13);
 }



 if (VAR_17->length < sizeof(struct acpi_table_header)) {
  FUNC_16(VAR_4);
 }

 VAR_15 = (u8 *)VAR_17 + sizeof(struct acpi_table_header);
 VAR_14 = VAR_17->length - sizeof(struct acpi_table_header);

 VAR_13 = FUNC_15(VAR_10, &VAR_18);
 if (FUNC_2(VAR_13)) {
  FUNC_16(VAR_13);
 }



 VAR_12 = FUNC_11(VAR_15);
 if (!VAR_12) {
  FUNC_16(VAR_5);
 }



 VAR_16 = FUNC_4(VAR_18, ((void*)0), ((void*)0), ((void*)0));
 if (!VAR_16) {
  FUNC_13(VAR_12);
  FUNC_16(VAR_5);
 }

 VAR_13 = FUNC_6(VAR_16, VAR_12, ((void*)0),
           VAR_15, VAR_14, ((void*)0),
           (u8)VAR_9);
 if (FUNC_2(VAR_13)) {
  FUNC_5(VAR_16);
  goto cleanup;
 }



 if (FUNC_0(VAR_17->signature, VAR_2) &&
     VAR_9 == VAR_1) {
  VAR_16->namespace_override = VAR_6;
 }



 if (VAR_11 && VAR_11 != VAR_7) {
  VAR_13 =
      FUNC_7(VAR_11, VAR_3,
          VAR_16);
  if (FUNC_2(VAR_13)) {
   FUNC_5(VAR_16);
   goto cleanup;
  }
 }



 FUNC_1((VAR_0,
     "*PARSE* pass %u parse\n", VAR_9));
 FUNC_8();
 VAR_13 = FUNC_14(VAR_16);
 FUNC_9();

cleanup:
 FUNC_12(VAR_12);
 FUNC_16(VAR_13);
}
