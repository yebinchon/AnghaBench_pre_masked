
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_nfit_desc {scalar_t__ scrub_count_state; int scrub_count; int scrub_flags; int init_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct acpi_nfit_desc *VAR_1)
{
 FUNC_1(&VAR_1->init_mutex);

 FUNC_0(VAR_0, &VAR_1->scrub_flags);
 VAR_1->scrub_count++;
 if (VAR_1->scrub_count_state)
  FUNC_2(VAR_1->scrub_count_state);
}
