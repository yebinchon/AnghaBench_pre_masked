
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,char*,char*) ;





 int FUNC_7 (int,char**) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 int VAR_8 ;
 int FUNC_13 (char*,int ) ;

int
FUNC_14(int VAR_9, char *VAR_10[])
{
 int VAR_11;

 VAR_4 = FUNC_4();
 VAR_5 = VAR_10[0];
 FUNC_7(VAR_9, VAR_10);
 FUNC_10();
 FUNC_9();
 if (!FUNC_0(VAR_7)) {
  FUNC_13("you (%s) are not allowed to use this program", VAR_7);
  FUNC_6(VAR_6, VAR_4, "AUTH", "crontab command not allowed");
  FUNC_3(VAR_0);
 }
 VAR_11 = VAR_2;
 switch (VAR_3) {
 case 130: FUNC_5();
    break;
 case 132: FUNC_1();
    break;
 case 131: FUNC_2();
    break;
 case 129: if (FUNC_8() < 0)
     VAR_11 = VAR_0;
    break;
 case 128:
    break;
 }
 FUNC_3(VAR_11);

}
