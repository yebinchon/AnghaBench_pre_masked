
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (int ,char*,int) ;

void
FUNC_5(char *VAR_2)
{
 register int VAR_3, VAR_4, VAR_5;
 char VAR_6[1024];

 if ((VAR_3 = FUNC_2(VAR_2, VAR_0, 0)) < 0)
  FUNC_1(1, "%s", VAR_2);

 while ((VAR_4 = FUNC_3(VAR_3, VAR_6, sizeof(VAR_6))) > 0)
  if ((VAR_5 = FUNC_4(VAR_1, VAR_6, VAR_4)) == -1)
   FUNC_1(1, "write to stderr");
 if (VAR_4 != 0)
  FUNC_1(1, "%s", VAR_2);
 (void)FUNC_0(VAR_3);
}
