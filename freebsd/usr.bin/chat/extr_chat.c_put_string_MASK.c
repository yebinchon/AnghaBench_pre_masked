
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (char) ;

int
FUNC_7(char *VAR_4)
{
    VAR_1 = 0;
    VAR_4 = FUNC_3(VAR_4, 1);

    if (VAR_3)
        FUNC_2("send (%v)", VAR_1 ? "??????" : VAR_4);

    FUNC_0(VAR_2); VAR_0 = 0;

    while (*VAR_4) {
 char VAR_5 = *VAR_4++;

 if (VAR_5 != '\\') {
     if (!FUNC_6 (VAR_5))
  return 0;
     continue;
 }

 VAR_5 = *VAR_4++;
 switch (VAR_5) {
 case 'd':
     FUNC_4(1);
     break;

 case 'K':
     FUNC_1();
     break;

 case 'p':
     FUNC_5(10000);
     break;

 default:
     if (!FUNC_6 (VAR_5))
  return 0;
     break;
 }
    }

    FUNC_0(0);
    VAR_0 = 0;
    return (1);
}
