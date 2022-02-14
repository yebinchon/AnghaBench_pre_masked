
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct intel_opregion {TYPE_1__* acpi; } ;
struct TYPE_2__ {void** did2; void** didl; } ;


 int FUNC_0 (void**) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct intel_opregion *VAR_0, int VAR_1, u32 VAR_2)
{
 if (VAR_1 < FUNC_0(VAR_0->acpi->didl)) {
  VAR_0->acpi->didl[VAR_1] = VAR_2;
 } else {
  VAR_1 -= FUNC_0(VAR_0->acpi->didl);

  if (FUNC_1(VAR_1 >= FUNC_0(VAR_0->acpi->did2)))
   return;

  VAR_0->acpi->did2[VAR_1] = VAR_2;
 }
}
