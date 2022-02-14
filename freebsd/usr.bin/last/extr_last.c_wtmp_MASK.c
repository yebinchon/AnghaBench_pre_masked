
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_2__ {scalar_t__ tv_sec; } ;
struct utmpx {TYPE_1__ ut_tv; } ;
struct tm {int dummy; } ;
typedef int ct ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (struct utmpx*) ;
 int FUNC_3 () ;
 char* VAR_0 ;
 int FUNC_4 (struct utmpx*) ;
 struct utmpx* FUNC_5 () ;
 int VAR_1 ;
 struct tm* FUNC_6 (scalar_t__*) ;
 int FUNC_7 (struct utmpx*,struct utmpx*,int) ;
 struct utmpx* FUNC_8 (struct utmpx*,unsigned int) ;
 int FUNC_9 (char*,int,char*,struct tm*) ;
 int FUNC_10 (scalar_t__*) ;
 int FUNC_11 (char*,char*,unsigned long) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (int,char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static void
FUNC_18(void)
{
 struct utmpx *VAR_2 = ((void*)0);
 struct utmpx *VAR_3;
 static unsigned int VAR_4 = 0;
 time_t VAR_5;
 char VAR_6[80];
 struct tm *VAR_7;

 FUNC_0(&VAR_1);
 (void)FUNC_10(&VAR_5);

 FUNC_16("last-information");


 while ((VAR_3 = FUNC_5()) != ((void*)0)) {
  if (VAR_4 % 128 == 0) {
   VAR_2 = FUNC_8(VAR_2, (VAR_4 + 128) * sizeof *VAR_3);
   if (VAR_2 == ((void*)0))
    FUNC_15(1, "realloc");
  }
  FUNC_7(&VAR_2[VAR_4++], VAR_3, sizeof *VAR_3);
  if (VAR_5 > VAR_3->ut_tv.tv_sec)
   VAR_5 = VAR_3->ut_tv.tv_sec;
 }
 FUNC_3();


 FUNC_17("last");
 while (VAR_4 > 0)
  FUNC_2(&VAR_2[--VAR_4]);
 FUNC_13("last");
 FUNC_4(VAR_2);
 VAR_7 = FUNC_6(&VAR_5);
 (void) FUNC_9(VAR_6, sizeof(VAR_6), "%+", VAR_7);
 FUNC_14("\n{:utxdb/%s}", (VAR_0 == ((void*)0)) ? "utx.log" : VAR_0);
 FUNC_11("seconds", "%lu", (unsigned long) VAR_5);
 FUNC_14(FUNC_1(" begins {:begins/%s}\n"), VAR_6);
 FUNC_12("last-information");
}
