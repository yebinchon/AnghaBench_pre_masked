
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct userconf {int dummy; } ;
struct group {int dummy; } ;
typedef int intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct group*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int ) ;
 struct userconf* FUNC_3 (char const*) ;
 struct group* FUNC_4 (char*,int,int) ;
 int FUNC_5 (int,char**,char*) ;
 scalar_t__ FUNC_6 () ;
 char* VAR_6 ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (struct userconf*,int ,int ,char*,...) ;
 int VAR_7 ;
 size_t FUNC_9 (char*,char*) ;

int
FUNC_10(int VAR_8, char **VAR_9, char *VAR_10)
{
 struct userconf *VAR_11 = ((void*)0);
 struct group *VAR_12 = ((void*)0);
 char *VAR_13;
 const char *VAR_14 = ((void*)0);
 intmax_t VAR_15 = -1;
 int VAR_16, VAR_17;
 bool VAR_18 = 0;
 bool VAR_19 = 0;

 if (VAR_10 != ((void*)0)) {
  if (VAR_10[FUNC_9(VAR_10, "0123456789")] == '\0')
   VAR_15 = FUNC_7(VAR_10, VAR_2);
  else
   VAR_13 = VAR_10;
 }

 while ((VAR_16 = FUNC_5(VAR_8, VAR_9, "C:qn:g:Y")) != -1) {
  switch (VAR_16) {
  case 'C':
   VAR_14 = VAR_6;
   break;
  case 'q':
   VAR_18 = 1;
   break;
  case 'n':
   VAR_13 = VAR_6;
   break;
  case 'g':
   VAR_15 = FUNC_7(VAR_6, VAR_2);
   break;
  case 'Y':
   VAR_19 = 1;
   break;
  }
 }

 if (VAR_18)
  FUNC_2(VAR_5, "w", VAR_7);
 VAR_12 = FUNC_4(VAR_13, VAR_15, 1);
 VAR_11 = FUNC_3(VAR_14);
 VAR_17 = FUNC_0(VAR_12);
 if (VAR_17 == -1)
  FUNC_1(VAR_1, "group '%s' not available (NIS?)", VAR_13);
 else if (VAR_17 != 0)
  FUNC_1(VAR_1, "group update");
 FUNC_8(VAR_11, VAR_3, VAR_4, "%s(%ju) removed", VAR_13,
     (uintmax_t)VAR_15);

 if (VAR_19 && FUNC_6() == 0)
  FUNC_8(VAR_11, VAR_3, VAR_4, "NIS maps updated");

 return (VAR_0);
}
