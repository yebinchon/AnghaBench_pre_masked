
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,char*,char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (char*,char**) ;
 int FUNC_4 (int,char**,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 () ;

int
FUNC_8(int VAR_10, char *VAR_11[])
{
 int VAR_12;

 while (FUNC_4(VAR_10, VAR_11, "") != -1)
  FUNC_7();
 VAR_10 -= VAR_9;
 VAR_11 += VAR_9;
 if (VAR_10 < 1)
  FUNC_7();

 if (FUNC_5(VAR_7))
  FUNC_0();
 if (FUNC_5(VAR_6) && FUNC_1(VAR_7, VAR_6) == -1)

  FUNC_2(VAR_1, "%s", VAR_11[0]);

 (void)FUNC_6(VAR_4, VAR_5);

 FUNC_3(*VAR_11, VAR_11);
 VAR_12 = (VAR_8 == VAR_0) ? VAR_3 : VAR_2;
 FUNC_2(VAR_12, "%s", VAR_11[0]);
}
