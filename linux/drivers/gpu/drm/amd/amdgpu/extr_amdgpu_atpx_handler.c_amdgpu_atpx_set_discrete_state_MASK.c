
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union acpi_object {int dummy; } acpi_object ;
typedef scalar_t__ u8 ;
struct atpx_power_control {int size; scalar_t__ dgpu_state; } ;
struct TYPE_2__ {scalar_t__ power_cntl; } ;
struct amdgpu_atpx {int handle; TYPE_1__ functions; } ;
struct acpi_buffer {int length; struct atpx_power_control* pointer; } ;


 int VAR_0 ;
 int VAR_1 ;
 union acpi_object* FUNC_0 (int ,int ,struct acpi_buffer*) ;
 int FUNC_1 (union acpi_object*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_atpx *VAR_2, u8 VAR_3)
{
 struct acpi_buffer VAR_4;
 union acpi_object *VAR_5;
 struct atpx_power_control VAR_6;

 if (VAR_2->functions.power_cntl) {
  VAR_6.size = 3;
  VAR_6.dgpu_state = VAR_3;
  VAR_4.length = VAR_6.size;
  VAR_4.pointer = &VAR_6;
  VAR_5 = FUNC_0(VAR_2->handle,
     VAR_0,
     &VAR_4);
  if (!VAR_5)
   return -VAR_1;
  FUNC_1(VAR_5);


  if (VAR_3 == 0)
   FUNC_2(200);
 }
 return 0;
}
