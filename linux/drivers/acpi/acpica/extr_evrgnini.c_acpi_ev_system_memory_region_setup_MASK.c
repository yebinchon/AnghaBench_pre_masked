
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int address; int length; } ;
union acpi_operand_object {TYPE_1__ region; } ;
typedef scalar_t__ u32 ;
struct acpi_mem_space_context {int address; int length; scalar_t__ mapped_length; int mapped_logical_address; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_handle ;


 struct acpi_mem_space_context* FUNC_0 (int) ;
 int FUNC_1 (struct acpi_mem_space_context*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;

acpi_status
FUNC_5(acpi_handle VAR_4,
       u32 VAR_5,
       void *VAR_6, void **VAR_7)
{
 union acpi_operand_object *VAR_8 =
     (union acpi_operand_object *)VAR_4;
 struct acpi_mem_space_context *VAR_9;

 FUNC_2(VAR_3);

 if (VAR_5 == VAR_0) {
  if (*VAR_7) {
   VAR_9 =
       (struct acpi_mem_space_context *)*VAR_7;



   if (VAR_9->mapped_length) {
    FUNC_3(VAR_9->
           mapped_logical_address,
           VAR_9->
           mapped_length);
   }
   FUNC_1(VAR_9);
   *VAR_7 = ((void*)0);
  }
  FUNC_4(VAR_2);
 }



 VAR_9 =
     FUNC_0(sizeof(struct acpi_mem_space_context));
 if (!(VAR_9)) {
  FUNC_4(VAR_1);
 }



 VAR_9->length = VAR_8->region.length;
 VAR_9->address = VAR_8->region.address;

 *VAR_7 = VAR_9;
 FUNC_4(VAR_2);
}
