
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_driver_req {int dummy; } ;
struct ath_diag {int dummy; } ;


 char* VAR_0 ;
 int FUNC_0 (struct ath_driver_req*,char const*) ;
 scalar_t__ FUNC_1 (struct ath_driver_req*,char const*,char*,char*) ;
 int FUNC_2 (struct ath_driver_req*) ;
 scalar_t__ FUNC_3 (struct ath_driver_req*,char const*) ;
 int FUNC_4 (int) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (int,char**,char*) ;
 int FUNC_7 () ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_8 () ;

int
FUNC_9(int VAR_3, char *VAR_4[])
{
 struct ath_diag VAR_5;
 const char *VAR_6;
 struct ath_driver_req VAR_7;
 int VAR_8, VAR_9;

 FUNC_2(&VAR_7);

 VAR_6 = FUNC_5("ATH");
 if (!VAR_6)
  VAR_6 = VAR_0;

 VAR_8 = 0;
 while ((VAR_9 = FUNC_6(VAR_3, VAR_4, "i:l")) != -1)
  switch (VAR_9) {
  case 'i':
   VAR_6 = VAR_1;
   break;
  case 'l':
   FUNC_7();
   FUNC_4(0);
  default:
   FUNC_8();

  }


 if (FUNC_3(&VAR_7, VAR_6) < 0) {
  FUNC_4(127);
 }

 VAR_3 -= VAR_2;
 VAR_4 += VAR_2;

 if (VAR_3 == 0) {
  FUNC_0(&VAR_7, VAR_6);
  FUNC_4(0);
 }

 if (VAR_3 < 2) {
  FUNC_8();

 }

 if (FUNC_1(&VAR_7, VAR_6, VAR_4[0], VAR_4[1]) != 0)
  FUNC_4(1);

 FUNC_4(0);
}
