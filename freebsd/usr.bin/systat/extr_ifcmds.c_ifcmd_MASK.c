
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 char* FUNC_3 () ;
 int FUNC_4 (char const*) ;
 int * VAR_2 ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;
 int FUNC_6 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int VAR_4 ;
 int * FUNC_8 (char const*) ;

int
FUNC_9(const char *VAR_5, const char *VAR_6)
{
 int VAR_7;

 if (FUNC_7(VAR_5, "scale")) {
  if ((VAR_7 = FUNC_4(VAR_6)) != -1)
   VAR_1 = VAR_7;
  else {
   FUNC_6(VAR_0, 0);
   FUNC_1();
   FUNC_0("what scale? ");
   FUNC_0(FUNC_3());
  }
 } else if (FUNC_7(VAR_5, "match")) {
  if (VAR_6 != ((void*)0) && *VAR_6 != '\0' && FUNC_5(VAR_6, "*", 2) != 0) {

   if (VAR_2 != ((void*)0))
    FUNC_2(VAR_2);
   VAR_3 = 1;
   VAR_2 = FUNC_8(VAR_6);
  } else {

   if (VAR_2 != ((void*)0))
    FUNC_2(VAR_2);
   VAR_3 = 1;
   VAR_2 = ((void*)0);
  }
 } else if (FUNC_7(VAR_5, "pps"))
  VAR_4 = !VAR_4;

 return (1);
}
