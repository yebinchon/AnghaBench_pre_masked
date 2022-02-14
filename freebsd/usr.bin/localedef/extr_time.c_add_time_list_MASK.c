
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char wchar_t ;
struct TYPE_2__ {char* am; char* pm; int weekday; int wday; int month; int mon; } ;


 int VAR_0 ;







 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 char* FUNC_3 (char*) ;

void
FUNC_4(wchar_t *VAR_4)
{
 char *VAR_5;

 if ((VAR_5 = FUNC_3(VAR_4)) == ((void*)0)) {
  VAR_0;
  return;
 }
 FUNC_2(VAR_4);

 switch (VAR_1) {
 case 133:
  FUNC_0(VAR_3.mon, VAR_5, 12);
  break;
 case 128:
  FUNC_0(VAR_3.month, VAR_5, 12);
  break;
 case 134:
  FUNC_0(VAR_3.wday, VAR_5, 7);
  break;
 case 130:
  FUNC_0(VAR_3.weekday, VAR_5, 7);
  break;
 case 131:
  if (VAR_3.am == ((void*)0)) {
   VAR_3.am = VAR_5;
  } else if (VAR_3.pm == ((void*)0)) {
   VAR_3.pm = VAR_5;
  } else {
   FUNC_1(VAR_2,"too many list elements");
   FUNC_2(VAR_5);
  }
  break;
 case 132:
 case 129:
  FUNC_2(VAR_5);
  break;
 default:
  FUNC_2(VAR_5);
  VAR_0;
  break;
 }
}
