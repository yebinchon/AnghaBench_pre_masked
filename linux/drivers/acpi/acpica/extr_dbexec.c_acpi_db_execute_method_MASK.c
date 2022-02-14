
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_object {int dummy; } acpi_object ;
typedef size_t u32 ;
struct acpi_object_list {size_t count; union acpi_object* pointer; } ;
struct acpi_db_method_info {int pathname; scalar_t__** args; int * types; } ;
struct acpi_buffer {scalar_t__ length; int pointer; } ;
typedef scalar_t__ acpi_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ FUNC_4 (int ,scalar_t__*,union acpi_object*) ;
 int FUNC_5 (size_t,union acpi_object*) ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (int *,int ,struct acpi_object_list*,struct acpi_buffer*) ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 void* VAR_13 ;
 int FUNC_7 (char*) ;
 int VAR_14 ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static acpi_status
FUNC_9(struct acpi_db_method_info *VAR_15,
         struct acpi_buffer *VAR_16)
{
 acpi_status VAR_17;
 struct acpi_object_list VAR_18;
 union acpi_object VAR_19[VAR_0 + 1];
 u32 VAR_20;

 FUNC_3(VAR_14);

 if (VAR_12 && !VAR_8) {
  FUNC_7("Warning: debug output is not enabled!\n");
 }

 VAR_18.count = 0;
 VAR_18.pointer = ((void*)0);



 if (VAR_15->args && VAR_15->args[0]) {



  for (VAR_20 = 0; (VAR_15->args[VAR_20] && *(VAR_15->args[VAR_20])); VAR_20++) {



   VAR_17 = FUNC_4(VAR_15->types[VAR_20],
          VAR_15->args[VAR_20],
          &VAR_19[VAR_20]);
   if (FUNC_2(VAR_17)) {
    FUNC_1((VAR_4, VAR_17,
      "While parsing method arguments"));
    goto cleanup;
   }
  }

  VAR_18.count = VAR_20;
  VAR_18.pointer = VAR_19;
 }



 VAR_16->pointer = VAR_11;
 VAR_16->length = VAR_1;



 VAR_13 = VAR_7;
 VAR_17 = FUNC_6(((void*)0), VAR_15->pathname,
          &VAR_18, VAR_16);

 VAR_10 = VAR_6;
 VAR_13 = VAR_6;

 if (FUNC_2(VAR_17)) {
  if ((VAR_17 == VAR_2) || VAR_9) {



   FUNC_1((VAR_4, VAR_17,
     "Aborting top-level method"));

   VAR_9 = VAR_6;
   VAR_17 = VAR_5;
   goto cleanup;
  }

  FUNC_1((VAR_4, VAR_17,
    "while executing %s from AML Debugger",
    VAR_15->pathname));

  if (VAR_17 == VAR_3) {
   FUNC_0((VAR_4,
        "Possible buffer overflow within AML Debugger "
        "buffer (size 0x%X needed 0x%X)",
        VAR_1,
        (u32)VAR_16->length));
  }
 }

cleanup:
 FUNC_5(VAR_18.count, VAR_19);
 FUNC_8(VAR_17);
}
