
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union acpi_object {int dummy; } acpi_object ;
typedef int u16 ;
struct atpx_mux {int size; int mux; } ;
struct TYPE_2__ {scalar_t__ switch_start; } ;
struct amdgpu_atpx {int handle; TYPE_1__ functions; } ;
struct acpi_buffer {int length; struct atpx_mux* pointer; } ;


 int VAR_0 ;
 int VAR_1 ;
 union acpi_object* FUNC_0 (int ,int ,struct acpi_buffer*) ;
 int FUNC_1 (union acpi_object*) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_atpx *VAR_2, u16 VAR_3)
{
 struct acpi_buffer VAR_4;
 union acpi_object *VAR_5;
 struct atpx_mux VAR_6;

 if (VAR_2->functions.switch_start) {
  VAR_6.size = 4;
  VAR_6.mux = VAR_3;
  VAR_4.length = VAR_6.size;
  VAR_4.pointer = &VAR_6;
  VAR_5 = FUNC_0(VAR_2->handle,
     VAR_0,
     &VAR_4);
  if (!VAR_5)
   return -VAR_1;
  FUNC_1(VAR_5);
 }
 return 0;
}
