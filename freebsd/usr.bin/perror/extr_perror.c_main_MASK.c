
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*) ;
 char* FUNC_4 (long) ;
 long FUNC_5 (char*,char**,int ) ;
 int FUNC_6 () ;

int
FUNC_7(int VAR_2, char **VAR_3)
{
 char *VAR_4;
 char *VAR_5;
 long VAR_6;

 (void) FUNC_3(VAR_0, "");
 if (VAR_2 != 2)
  FUNC_6();

 VAR_1 = 0;

 VAR_6 = FUNC_5(VAR_3[1], &VAR_4, 0);

 if (VAR_1 != 0)
  FUNC_0(1, ((void*)0));

 if ((VAR_5 = FUNC_4(VAR_6)) == ((void*)0))
  FUNC_0(1, ((void*)0));

 FUNC_2("%s\n", VAR_5);

 FUNC_1(0);
}
