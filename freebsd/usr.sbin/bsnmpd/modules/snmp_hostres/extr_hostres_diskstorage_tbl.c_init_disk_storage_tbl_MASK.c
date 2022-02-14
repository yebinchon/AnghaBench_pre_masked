
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mddev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,char*,char*,int ) ;
 int FUNC_4 (int ,char*,char*) ;

int
FUNC_5(void)
{
 char VAR_5[32] = "";


 FUNC_0();

 VAR_4 = -1;
 FUNC_3(VAR_5, sizeof(VAR_5) - 1, "%s%s", VAR_3, VAR_1);
 if ((VAR_4 = FUNC_1(VAR_5, VAR_2)) == -1) {
  FUNC_4(VAR_0, "open %s failed - will not include md(4) "
      "info: %m", VAR_5);
 }

 FUNC_2(1);

 return (0);
}
