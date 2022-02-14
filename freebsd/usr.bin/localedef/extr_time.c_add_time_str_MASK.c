
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char wchar_t ;
struct TYPE_2__ {char* c_fmt; char* x_fmt; char* X_fmt; char* ampm_fmt; char* date_fmt; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 char* FUNC_1 (char*) ;

void
FUNC_2(wchar_t *VAR_3)
{
 char *VAR_4;

 if ((VAR_4 = FUNC_1(VAR_3)) == ((void*)0)) {
  VAR_0;
  return;
 }
 FUNC_0(VAR_3);

 switch (VAR_1) {
 case 133:
  VAR_2.c_fmt = VAR_4;
  break;
 case 134:
  VAR_2.x_fmt = VAR_4;
  break;
 case 129:
  VAR_2.X_fmt = VAR_4;
  break;
 case 128:
  VAR_2.ampm_fmt = VAR_4;
  break;
 case 135:




  VAR_2.date_fmt = VAR_4;
  break;
 case 132:
 case 130:
 case 131:

  FUNC_0(VAR_4);
  break;
 default:
  FUNC_0(VAR_4);
  VAR_0;
  break;
 }
}
