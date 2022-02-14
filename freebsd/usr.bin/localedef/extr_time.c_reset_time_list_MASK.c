
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pm; int * am; int ** weekday; int ** wday; int ** month; int ** mon; } ;







 int FUNC_0 (char*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

void
FUNC_1(void)
{
 int VAR_2;
 switch (VAR_0) {
 case 131:
  for (VAR_2 = 0; VAR_2 < 12; VAR_2++) {
   FUNC_0((char *)VAR_1.mon[VAR_2]);
   VAR_1.mon[VAR_2] = ((void*)0);
  }
  break;
 case 128:
  for (VAR_2 = 0; VAR_2 < 12; VAR_2++) {
   FUNC_0((char *)VAR_1.month[VAR_2]);
   VAR_1.month[VAR_2] = ((void*)0);
  }
  break;
 case 132:
  for (VAR_2 = 0; VAR_2 < 7; VAR_2++) {
   FUNC_0((char *)VAR_1.wday[VAR_2]);
   VAR_1.wday[VAR_2] = ((void*)0);
  }
  break;
 case 129:
  for (VAR_2 = 0; VAR_2 < 7; VAR_2++) {
   FUNC_0((char *)VAR_1.weekday[VAR_2]);
   VAR_1.weekday[VAR_2] = ((void*)0);
  }
  break;
 case 130:
  FUNC_0((char *)VAR_1.am);
  VAR_1.am = ((void*)0);
  FUNC_0((char *)VAR_1.pm);
  VAR_1.pm = ((void*)0);
  break;
 }
}
