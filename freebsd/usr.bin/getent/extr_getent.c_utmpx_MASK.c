
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utmpx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,char*) ;
 char* FUNC_3 () ;
 struct utmpx* FUNC_4 () ;
 scalar_t__ FUNC_5 (int,char const*) ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (struct utmpx const*) ;

__attribute__((used)) static int
FUNC_8(int VAR_7, char *VAR_8[])
{
 const struct utmpx *VAR_9;
 const char *VAR_10 = ((void*)0);
 int VAR_11 = VAR_1, VAR_12 = 0;

 FUNC_0(VAR_7 > 1);
 FUNC_0(VAR_8 != ((void*)0));

 if (VAR_7 == 3 || VAR_7 == 4) {
  if (FUNC_6(VAR_8[2], "active") == 0)
   VAR_12 = VAR_3;
  else if (FUNC_6(VAR_8[2], "lastlogin") == 0)
   VAR_12 = VAR_4;
  else if (FUNC_6(VAR_8[2], "log") == 0)
   VAR_12 = VAR_5;
  else
   VAR_11 = VAR_2;
  if (VAR_7 == 4)
   VAR_10 = VAR_8[3];
 } else {
  VAR_11 = VAR_2;
 }

 if (VAR_11 == VAR_2) {
  FUNC_2(VAR_6,
      "Usage: %s utmpx active | lastlogin | log [filename]\n",
      FUNC_3());
 } else if (VAR_11 == VAR_1) {
  if (FUNC_5(VAR_12, VAR_10) != 0)
   return (VAR_0);
  while ((VAR_9 = FUNC_4()) != ((void*)0))
   FUNC_7(VAR_9);
  FUNC_1();
 }
 return (VAR_11);
}
