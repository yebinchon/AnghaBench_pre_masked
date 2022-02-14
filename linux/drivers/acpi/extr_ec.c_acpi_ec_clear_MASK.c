
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct acpi_ec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_ec*,scalar_t__*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct acpi_ec *VAR_1)
{
 int VAR_2, VAR_3;
 u8 VAR_4 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3 = FUNC_0(VAR_1, &VAR_4);
  if (VAR_3 || !VAR_4)
   break;
 }
 if (FUNC_3(VAR_2 == VAR_0))
  FUNC_2("Warning: Maximum of %d stale EC events cleared\n", VAR_2);
 else
  FUNC_1("%d stale EC events cleared\n", VAR_2);
}
