
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_reg_walk_info {scalar_t__ space_id; scalar_t__ reg_run_count; int function; } ;
struct acpi_namespace_node {int dummy; } ;
typedef scalar_t__ acpi_adr_space_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct acpi_namespace_node*) ;
 int VAR_8 ;
 int FUNC_3 (int ,struct acpi_namespace_node*,int ,int ,int ,int *,struct acpi_reg_walk_info*,int *) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;

void
FUNC_5(struct acpi_namespace_node *VAR_11,
       acpi_adr_space_type VAR_12, u32 VAR_13)
{
 struct acpi_reg_walk_info VAR_14;

 FUNC_1(VAR_9);
 if ((VAR_12 == VAR_3) ||
     (VAR_12 == VAR_2) ||
     (VAR_12 == VAR_0)) {
  VAR_10;
 }

 VAR_14.space_id = VAR_12;
 VAR_14.function = VAR_13;
 VAR_14.reg_run_count = 0;

 FUNC_0((VAR_4,
         "    Running _REG methods for SpaceId %s\n",
         FUNC_4(VAR_14.space_id)));







 (void)FUNC_3(VAR_6, VAR_11, VAR_7,
         VAR_5, VAR_8, ((void*)0),
         &VAR_14, ((void*)0));



 if (VAR_12 == VAR_1) {
  FUNC_2(VAR_11);
 }

 FUNC_0((VAR_4,
         "    Executed %u _REG methods for SpaceId %s\n",
         VAR_14.reg_run_count,
         FUNC_4(VAR_14.space_id)));

 VAR_10;
}
