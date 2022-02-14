
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {char* member_0; char* member_1; int member_2; int * member_3; } ;
typedef int intmax_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 struct group* FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int ) ;
 struct group* FUNC_4 (char*,int,int) ;
 int FUNC_5 (int,char**,char*) ;
 char* VAR_3 ;
 int FUNC_6 (struct group*,int) ;
 int FUNC_7 (char*,int ) ;
 int VAR_4 ;
 size_t FUNC_8 (char*,char*) ;

int
FUNC_9(int VAR_5, char **VAR_6, char *VAR_7)
{
 struct group *VAR_8 = ((void*)0);
 char *VAR_9 = ((void*)0);
 intmax_t VAR_10 = -1;
 int VAR_11;
 bool VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_12 = VAR_13 = VAR_14 = VAR_15 = 0;

 struct group VAR_16 = {
  "nogroup",
  "*",
  -1,
  ((void*)0)
 };

 if (VAR_7 != ((void*)0)) {
  if (VAR_7[FUNC_8(VAR_7, "0123456789")] == '\0')
   VAR_10 = FUNC_7(VAR_7, VAR_1);
  else
   VAR_9 = VAR_7;
 }

 while ((VAR_11 = FUNC_5(VAR_5, VAR_6, "C:qn:g:FPa")) != -1) {
  switch (VAR_11) {
  case 'C':

   break;
  case 'q':
   VAR_14 = 1;
   break;
  case 'n':
   VAR_9 = VAR_3;
   break;
  case 'g':
   VAR_10 = FUNC_7(VAR_3, VAR_1);
   break;
  case 'F':
   VAR_13 = 1;
   break;
  case 'P':
   VAR_15 = 1;
   break;
  case 'a':
   VAR_12 = 1;
   break;
  }
 }

 if (VAR_14)
  FUNC_3(VAR_2, "w", VAR_4);

 if (VAR_12) {
  FUNC_2();
  while ((VAR_8 = FUNC_1()) != ((void*)0))
   FUNC_6(VAR_8, VAR_15);
  FUNC_0();
  return (VAR_0);
 }

 VAR_8 = FUNC_4(VAR_9, VAR_10, !VAR_13);
 if (VAR_8 == ((void*)0))
  VAR_8 = &VAR_16;

 return (FUNC_6(VAR_8, VAR_15));
}
