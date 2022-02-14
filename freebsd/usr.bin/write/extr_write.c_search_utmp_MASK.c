
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef scalar_t__ time_t ;
struct utmpx {scalar_t__ ut_type; char* ut_user; char* ut_line; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*,char*) ;
 struct utmpx* FUNC_2 () ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*,int ) ;
 scalar_t__ FUNC_5 (int,char*,int*,scalar_t__*,int ) ;
 int FUNC_6 (char*,char*,char*) ;

void
FUNC_7(int VAR_2, char *VAR_3, char *VAR_4, char *VAR_5, uid_t VAR_6)
{
 struct utmpx *VAR_7;
 time_t VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_10 = VAR_11 = 0;
 VAR_8 = 0;
 VAR_13 = 0;

 while ((VAR_7 = FUNC_2()) != ((void*)0))
  if (VAR_7->ut_type == VAR_1 &&
      FUNC_3(VAR_3, VAR_7->ut_user) == 0) {
   ++VAR_10;
   if (FUNC_5(VAR_2, VAR_7->ut_line, &VAR_12, &VAR_9, 0))
    continue;
   if (VAR_6 && !VAR_12)
    continue;
   if (FUNC_3(VAR_7->ut_line, VAR_5) == 0) {
    VAR_13 = 1;
    continue;
   }
   ++VAR_11;
   if (VAR_9 > VAR_8) {
    VAR_8 = VAR_9;
    (void)FUNC_4(VAR_4, VAR_7->ut_line, VAR_0);
   }
  }
 FUNC_0();

 if (VAR_10 == 0)
  FUNC_1(1, "%s is not logged in", VAR_3);
 if (VAR_11 == 0) {
  if (VAR_13) {
   (void)FUNC_4(VAR_4, VAR_5, VAR_0);
   return;
  }
  FUNC_1(1, "%s has messages disabled", VAR_3);
 } else if (VAR_11 > 1) {
  FUNC_6("%s is logged in more than once; writing to %s", VAR_3, VAR_4);
 }
}
