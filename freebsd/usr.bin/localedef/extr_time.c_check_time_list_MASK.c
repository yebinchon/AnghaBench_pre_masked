
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pm; int ** weekday; int ** wday; int ** month; int ** mon; } ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

void
FUNC_1(void)
{
 switch (VAR_0) {
 case 133:
  if (VAR_2.mon[11] != ((void*)0))
   return;
  break;
 case 128:
  if (VAR_2.month[11] != ((void*)0))
   return;
  break;
 case 134:
  if (VAR_2.wday[6] != ((void*)0))
   return;
  break;
 case 130:
  if (VAR_2.weekday[6] != ((void*)0))
   return;
  break;
 case 131:
  if (VAR_2.pm != ((void*)0))
   return;
  break;
 case 129:
 case 132:
  return;
 default:
  FUNC_0(VAR_1,"unknown list");
  break;
 }

 FUNC_0(VAR_1,"too few items in list (%d)", VAR_0);
}
