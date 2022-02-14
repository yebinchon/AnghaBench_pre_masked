
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* uintmax_t ;
struct passwd {int dummy; } ;
typedef scalar_t__ intmax_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct passwd* FUNC_1 () ;
 struct passwd* FUNC_2 (int ) ;
 struct passwd* FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,char*,...) ;
 struct passwd VAR_5 ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int,char**,char*) ;
 char* VAR_6 ;
 int FUNC_8 (struct passwd*,int,int) ;
 scalar_t__ FUNC_9 (char*,int ) ;
 int FUNC_10 (char*,int ) ;
 int VAR_7 ;
 size_t FUNC_11 (char*,char*) ;

int
FUNC_12(int VAR_8, char **VAR_9, char *VAR_10)
{
 struct passwd *VAR_11 = ((void*)0);
 char *VAR_12 = ((void*)0);
 intmax_t VAR_13 = -1;
 int VAR_14;
 bool VAR_15 = 0;
 bool VAR_16 = 0;
 bool VAR_17 = 0;
 bool VAR_18 = 0;
 bool VAR_19 = 0;

 if (VAR_10 != ((void*)0)) {
  if (VAR_10[FUNC_11(VAR_10, "0123456789")] == '\0')
   VAR_13 = FUNC_9(VAR_10, VAR_3);
  else
   VAR_12 = VAR_10;
 }

 while ((VAR_14 = FUNC_7(VAR_8, VAR_9, "C:qn:u:FPa7")) != -1) {
  switch (VAR_14) {
  case 'C':

   break;
  case 'q':
   VAR_19 = 1;
   break;
  case 'n':
   VAR_12 = VAR_6;
   break;
  case 'u':
   VAR_13 = FUNC_9(VAR_6, VAR_3);
   break;
  case 'F':
   VAR_17 = 1;
   break;
  case 'P':
   VAR_16 = 1;
   break;
  case 'a':
   VAR_15 = 1;
   break;
  case '7':
   VAR_18 = 1;
   break;
  }
 }

 if (VAR_19)
  FUNC_6(VAR_4, "w", VAR_7);

 if (VAR_15) {
  FUNC_4();
  while ((VAR_11 = FUNC_1()) != ((void*)0))
   FUNC_8(VAR_11, VAR_16, VAR_18);
  FUNC_0();
  return (VAR_0);
 }

 if (VAR_13 < 0 && VAR_12 == ((void*)0))
  FUNC_5(VAR_1, "username or id required");

 VAR_11 = (VAR_12 != ((void*)0)) ? FUNC_2(FUNC_10(VAR_12, 0)) : FUNC_3(VAR_13);
 if (VAR_11 == ((void*)0)) {
  if (VAR_17) {
   VAR_11 = &VAR_5;
  } else {
   if (VAR_12 == ((void*)0))
    FUNC_5(VAR_2, "no such uid `%ju'",
        (uintmax_t) VAR_13);
   FUNC_5(VAR_2, "no such user `%s'", VAR_12);
  }
 }

 return (FUNC_8(VAR_11, VAR_16, VAR_18));
}
