
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_2__ {scalar_t__ la_acpi_id; int la_enabled; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(u_int VAR_3, u_int *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 <= VAR_2; VAR_5++) {
  if (!VAR_1[VAR_5].la_enabled)
   continue;
  if (VAR_1[VAR_5].la_acpi_id != VAR_3)
   continue;
  *VAR_4 = VAR_5;
  return (0);
 }
 return (VAR_0);
}
