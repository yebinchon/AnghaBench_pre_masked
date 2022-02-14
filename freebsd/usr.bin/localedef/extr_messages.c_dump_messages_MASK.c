
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* yesstr; char* nostr; char* yesexpr; char* noexpr; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__ VAR_1 ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,int *) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*) ;

void
FUNC_5(void)
{
 FILE *VAR_2;
 char *VAR_3;

 if (VAR_1.yesstr == ((void*)0)) {
  FUNC_4("missing field 'yesstr'");
  VAR_1.yesstr = "";
 }
 if (VAR_1.nostr == ((void*)0)) {
  FUNC_4("missing field 'nostr'");
  VAR_1.nostr = "";
 }





 if ((VAR_3 = FUNC_3(VAR_1.yesstr, ':')) != ((void*)0))
  *VAR_3 = 0;
 if ((VAR_3 = FUNC_3(VAR_1.nostr, ':')) != ((void*)0))
  *VAR_3 = 0;

 if ((VAR_2 = FUNC_1()) == ((void*)0)) {
  return;
 }

 if ((FUNC_2(VAR_1.yesexpr, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.noexpr, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.yesstr, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.nostr, VAR_2) == VAR_0)) {
  return;
 }
 FUNC_0(VAR_2);
}
