
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bus_type; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(void)
{
 int VAR_4;





 for (VAR_4 = 0; VAR_4 <= VAR_2; VAR_4++)
  if (VAR_1[VAR_4].bus_type == VAR_0) {
   if (VAR_3 == -1)
    VAR_3 = VAR_4;
   else if (VAR_3 != 0)
    FUNC_0(
  "MPTable contains multiple PCI buses but no PCI bus 0");
  }
}
