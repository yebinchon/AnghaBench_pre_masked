
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ pointer; } ;
struct TYPE_3__ {int length; void* pointer; } ;
struct acpi_osc_context {int rev; TYPE_2__ ret; TYPE_1__ cap; int uuid_str; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct acpi_osc_context*) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static acpi_status FUNC_3(acpi_handle VAR_1,
        const u32 *VAR_2, u32 *VAR_3)
{
 struct acpi_osc_context VAR_4 = {
  .uuid_str = VAR_0,
  .rev = 1,
  .cap.length = 12,
  .cap.pointer = (void *)VAR_2,
 };
 acpi_status VAR_5;

 VAR_5 = FUNC_1(VAR_1, &VAR_4);
 if (FUNC_0(VAR_5)) {
  *VAR_3 = *((u32 *)(VAR_4.ret.pointer + 8));
  FUNC_2(VAR_4.ret.pointer);
 }
 return VAR_5;
}
