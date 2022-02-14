
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char wchar_t ;
struct TYPE_2__ {char* yesstr; char* nostr; char* yesexpr; char* noexpr; } ;


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
 case 128:
  VAR_2.yesstr = VAR_4;
  break;
 case 130:
  VAR_2.nostr = VAR_4;
  break;
 case 129:
  VAR_2.yesexpr = VAR_4;
  break;
 case 131:
  VAR_2.noexpr = VAR_4;
  break;
 default:
  FUNC_0(VAR_4);
  VAR_0;
  break;
 }
}
