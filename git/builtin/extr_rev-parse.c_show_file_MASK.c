
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* prefix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 () ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_4(const char *VAR_4, int VAR_5)
{
 FUNC_3();
 if ((VAR_2 & (VAR_0|VAR_1)) == (VAR_0|VAR_1)) {
  if (VAR_5) {
   const char *VAR_6 = VAR_3->prefix;
   char *VAR_7 = FUNC_1(VAR_6, VAR_4);
   FUNC_2(VAR_7);
   FUNC_0(VAR_7);
  } else
   FUNC_2(VAR_4);
  return 1;
 }
 return 0;
}
