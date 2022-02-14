
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct acpi_lpi_state* lpi_states; } ;
struct acpi_processor {TYPE_1__ power; } ;
struct acpi_lpi_states_array {int size; int composite_states_size; struct acpi_lpi_state* entries; struct acpi_lpi_state** composite_states; } ;
struct acpi_lpi_state {int flags; scalar_t__ index; scalar_t__ enable_parent_state; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct acpi_lpi_state*,struct acpi_lpi_state*,struct acpi_lpi_state*) ;
 size_t VAR_2 ;
 int FUNC_1 (struct acpi_lpi_state*) ;
 int FUNC_2 (struct acpi_lpi_state*,struct acpi_lpi_state*,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct acpi_lpi_states_array*,struct acpi_lpi_state*) ;

__attribute__((used)) static int FUNC_5(struct acpi_processor *VAR_3,
         struct acpi_lpi_states_array *VAR_4,
         struct acpi_lpi_states_array *VAR_5)
{
 int VAR_6, VAR_7, VAR_8 = VAR_4->size;
 struct acpi_lpi_state *VAR_9, *VAR_10 = VAR_4->entries;

 VAR_4->composite_states_size = 0;
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++, VAR_10++) {
  struct acpi_lpi_state *VAR_11;

  if (!(VAR_10->flags & VAR_0))
   continue;

  if (VAR_2 >= VAR_1) {
   FUNC_3("Limiting number of LPI states to max (%d)\n",
    VAR_1);
   FUNC_3("Please increase ACPI_PROCESSOR_MAX_POWER if needed.\n");
   break;
  }

  VAR_11 = &VAR_3->power.lpi_states[VAR_2];

  if (!VAR_5) {
   FUNC_2(VAR_11, VAR_10, sizeof(*VAR_10));
   FUNC_4(VAR_4, VAR_11);
   VAR_2++;
   continue;
  }

  for (VAR_6 = 0; VAR_6 < VAR_5->composite_states_size; VAR_6++) {
   VAR_9 = VAR_5->composite_states[VAR_6];
   if (VAR_10->index <= VAR_9->enable_parent_state &&
       FUNC_0(VAR_9, VAR_10, VAR_11)) {
    FUNC_4(VAR_4, VAR_11);
    VAR_2++;
    VAR_11++;
   }
  }
 }

 FUNC_1(VAR_4->entries);
 return 0;
}
