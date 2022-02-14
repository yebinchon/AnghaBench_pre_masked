
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*) ;
 int * FUNC_3 (char const*,char const*) ;
 int FUNC_4 (int) ;
 int * FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*,size_t,char*,char const*,char const*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (size_t) ;
 int * VAR_5 ;
 int * VAR_6 ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int) ;

FILE *
FUNC_12(const char *VAR_7, const char *VAR_8)
{
 FILE *VAR_9;

 if (FUNC_9(VAR_7, "-") == 0) {
  return ((VAR_8 && VAR_8[0] == 'r') ? VAR_5 : VAR_6);
 } else {
  mode_t VAR_10 = 0;
  int VAR_11 = FUNC_2(VAR_7);

  if (VAR_11 && (VAR_8[0] == 'w'))
   VAR_10 = FUNC_11(VAR_2 | VAR_3 |
       VAR_0 | VAR_1);

  if (VAR_11 && (VAR_4 != ((void*)0))) {
   char *VAR_12;
   size_t VAR_13;

   VAR_13 = FUNC_10(VAR_7) + 128;
   VAR_12 = FUNC_8(VAR_13);

   FUNC_1(VAR_6);

   if (VAR_8[0] == 'r')
    FUNC_6(VAR_12, VAR_13 - 1, "cat %s | %s -d",
        VAR_7, VAR_4);
   else if (VAR_8[0] == 'w')
    FUNC_6(VAR_12, VAR_13 - 1, "%s > %s",
        VAR_4, VAR_7);
   else
    FUNC_0(2, "%s", FUNC_4(7));

   if ((VAR_9 = FUNC_5(VAR_12, VAR_8)) == ((void*)0))
    FUNC_0(2, ((void*)0));

   FUNC_7(VAR_12);

  } else
   if ((VAR_9 = FUNC_3(VAR_7, VAR_8)) == ((void*)0))
    FUNC_0(2, ((void*)0));

  if (VAR_11 && (VAR_8[0] == 'w'))
   FUNC_11(VAR_10);
 }

 return (VAR_9);
}
