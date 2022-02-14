
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 () ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int VAR_1 ;

int
FUNC_9(void)
{
 int VAR_2;

 if (FUNC_6() != 0)
  FUNC_3(-1, "must be run as root");

 FUNC_8(VAR_1, "fifo_create.XXXXXXXXXXX");
 if (FUNC_7(VAR_1) == ((void*)0))
  FUNC_2(-1, "mkdtemp");
 FUNC_0(VAR_0);

 if (FUNC_1(VAR_1) < 0)
  FUNC_2(-1, "chdir");






 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  FUNC_4(VAR_2);
  FUNC_5(VAR_2);
 }

 return (0);
}
