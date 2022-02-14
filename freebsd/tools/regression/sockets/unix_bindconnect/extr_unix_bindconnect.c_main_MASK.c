
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 () ;

int
FUNC_7(void)
{
 char VAR_1[VAR_0];
 int VAR_2;

 FUNC_5(VAR_1, "/tmp/unix_bind.XXXXXXX", VAR_0);
 if (FUNC_3(VAR_1) == ((void*)0))
  FUNC_2(-1, "mkdtemp");
 FUNC_4(VAR_1);

 VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 == 0)
  VAR_2 = FUNC_1(VAR_1);

 FUNC_6();
 return (VAR_2);
}
