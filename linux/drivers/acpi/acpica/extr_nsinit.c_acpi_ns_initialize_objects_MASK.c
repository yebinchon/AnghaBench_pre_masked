
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_init_walk_info {int op_region_count; int method_count; int object_count; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ,int ,int ,int ,int *,struct acpi_init_walk_info*,int *) ;
 int FUNC_6 (struct acpi_init_walk_info*,int ,int) ;
 int VAR_9 ;
 int FUNC_7 (int ) ;

acpi_status FUNC_8(void)
{
 acpi_status VAR_10;
 struct acpi_init_walk_info VAR_11;

 FUNC_4(VAR_9);

 FUNC_0((VAR_1,
     "[Init] Completing Initialization of ACPI Objects\n"));
 FUNC_0((VAR_0,
     "**** Starting initialization of namespace objects ****\n"));
 FUNC_1((VAR_2,
         "Final data object initialization: "));



 FUNC_6(&VAR_11, 0, sizeof(struct acpi_init_walk_info));
 VAR_10 = FUNC_5(VAR_4, VAR_3,
         VAR_5, VAR_8,
         ((void*)0), &VAR_11, ((void*)0));
 if (FUNC_3(VAR_10)) {
  FUNC_2((VAR_6, VAR_10, "During WalkNamespace"));
 }

 FUNC_1((VAR_2,
         "Namespace contains %u (0x%X) objects\n",
         VAR_11.object_count, VAR_11.object_count));

 FUNC_0((VAR_0,
     "%u Control Methods found\n%u Op Regions found\n",
     VAR_11.method_count, VAR_11.op_region_count));

 FUNC_7(VAR_7);
}
