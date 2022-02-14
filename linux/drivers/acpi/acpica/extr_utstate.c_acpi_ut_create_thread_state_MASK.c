
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ thread_id; } ;
struct TYPE_3__ {int descriptor_type; } ;
union acpi_generic_state {TYPE_2__ thread; TYPE_1__ common; } ;
struct acpi_thread_state {int dummy; } ;
typedef scalar_t__ acpi_thread_id ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ FUNC_2 () ;
 union acpi_generic_state* FUNC_3 () ;

struct acpi_thread_state *FUNC_4(void)
{
 union acpi_generic_state *VAR_2;

 FUNC_1();



 VAR_2 = FUNC_3();
 if (!VAR_2) {
  return (((void*)0));
 }



 VAR_2->common.descriptor_type = VAR_0;
 VAR_2->thread.thread_id = FUNC_2();



 if (!VAR_2->thread.thread_id) {
  FUNC_0((VAR_1, "Invalid zero ID from AcpiOsGetThreadId"));
  VAR_2->thread.thread_id = (acpi_thread_id) 1;
 }

 return ((struct acpi_thread_state *)VAR_2);
}
