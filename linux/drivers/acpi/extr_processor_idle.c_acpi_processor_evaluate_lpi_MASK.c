
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int pointer; } ;
struct TYPE_7__ {int value; } ;
struct TYPE_6__ {scalar_t__ pointer; } ;
struct TYPE_5__ {int count; union acpi_object* elements; } ;
union acpi_object {scalar_t__ type; TYPE_4__ string; TYPE_3__ integer; TYPE_2__ buffer; TYPE_1__ package; } ;
struct acpi_power_register {scalar_t__ space_id; int address; } ;
struct acpi_lpi_states_array {int size; struct acpi_lpi_state* entries; } ;
struct acpi_lpi_state {int address; int index; int min_residency; int wake_latency; int flags; int arch_flags; int res_cnt_freq; int enable_parent_state; int desc; int entry_method; } ;
struct acpi_buffer {union acpi_object* pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ,char*,int *,struct acpi_buffer*) ;
 int FUNC_3 (int ,char*,int) ;
 struct acpi_lpi_state* FUNC_4 (int,int,int ) ;
 int FUNC_5 (union acpi_object*) ;
 scalar_t__ FUNC_6 (union acpi_object*,int*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(acpi_handle VAR_16,
           struct acpi_lpi_states_array *VAR_17)
{
 acpi_status VAR_18;
 int VAR_19 = 0;
 int VAR_20, VAR_21 = 1, VAR_22;
 struct acpi_buffer VAR_23 = { VAR_2, ((void*)0) };
 union acpi_object *VAR_24;
 struct acpi_lpi_state *VAR_25;

 VAR_18 = FUNC_2(VAR_16, "_LPI", ((void*)0), &VAR_23);
 if (FUNC_1(VAR_18)) {
  FUNC_0((VAR_7, "No _LPI, giving up\n"));
  return -VAR_13;
 }

 VAR_24 = VAR_23.pointer;


 if (!VAR_24 || VAR_24->type != VAR_10 ||
     VAR_24->package.count < 4) {
  FUNC_7("not enough elements in _LPI\n");
  VAR_19 = -VAR_12;
  goto end;
 }

 VAR_20 = VAR_24->package.elements[2].integer.value;


 if (VAR_20 < 1 || VAR_20 != VAR_24->package.count - 3) {
  FUNC_7("count given by _LPI is not valid\n");
  VAR_19 = -VAR_12;
  goto end;
 }

 VAR_25 = FUNC_4(VAR_20, sizeof(*VAR_25), VAR_15);
 if (!VAR_25) {
  VAR_19 = -VAR_14;
  goto end;
 }

 VAR_17->size = VAR_20;
 VAR_17->entries = VAR_25;


 for (VAR_22 = 3; VAR_21 <= VAR_20; VAR_22++, VAR_21++, VAR_25++) {
  union acpi_object *VAR_26, *VAR_27, *VAR_28;

  VAR_26 = &VAR_24->package.elements[VAR_22];
  if (VAR_26->type != VAR_10 || VAR_26->package.count < 7)
   continue;

  VAR_27 = VAR_26->package.elements;

  VAR_28 = VAR_27 + 6;
  if (VAR_28->type == VAR_8) {
   struct acpi_power_register *VAR_29;

   VAR_29 = (struct acpi_power_register *)VAR_28->buffer.pointer;
   if (VAR_29->space_id != VAR_1 &&
       VAR_29->space_id != VAR_0)
    continue;

   VAR_25->address = VAR_29->address;
   VAR_25->entry_method =
    VAR_29->space_id == VAR_0 ?
    VAR_3 : VAR_5;
  } else if (VAR_28->type == VAR_9) {
   VAR_25->entry_method = VAR_4;
   VAR_25->address = VAR_28->integer.value;
  } else {
   continue;
  }



  VAR_28 = VAR_27 + 9;
  if (VAR_28->type == VAR_11)
   FUNC_8(VAR_25->desc, VAR_28->string.pointer,
    VAR_6);

  VAR_25->index = VAR_21;
  if (FUNC_6(VAR_27 + 0, &VAR_25->min_residency)) {
   FUNC_7("No min. residency found, assuming 10 us\n");
   VAR_25->min_residency = 10;
  }

  if (FUNC_6(VAR_27 + 1, &VAR_25->wake_latency)) {
   FUNC_7("No wakeup residency found, assuming 10 us\n");
   VAR_25->wake_latency = 10;
  }

  if (FUNC_6(VAR_27 + 2, &VAR_25->flags))
   VAR_25->flags = 0;

  if (FUNC_6(VAR_27 + 3, &VAR_25->arch_flags))
   VAR_25->arch_flags = 0;

  if (FUNC_6(VAR_27 + 4, &VAR_25->res_cnt_freq))
   VAR_25->res_cnt_freq = 1;

  if (FUNC_6(VAR_27 + 5, &VAR_25->enable_parent_state))
   VAR_25->enable_parent_state = 0;
 }

 FUNC_3(VAR_16, "Found %d power states\n", VAR_21);
end:
 FUNC_5(VAR_23.pointer);
 return VAR_19;
}
