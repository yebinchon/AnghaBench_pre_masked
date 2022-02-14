
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_2__ {scalar_t__ cpu_hyperthread; scalar_t__ cpu_disabled; scalar_t__ cpu_bsp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;

void
FUNC_1(void)
{
 u_int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = VAR_1[VAR_4];
  if (VAR_5 == -1)
   continue;
  if (VAR_2[VAR_5].cpu_bsp)
   continue;
  if (VAR_2[VAR_5].cpu_disabled)
   continue;


  if (VAR_2[VAR_5].cpu_hyperthread &&
      !VAR_3)
   continue;

  FUNC_0(VAR_4);
 }
}
