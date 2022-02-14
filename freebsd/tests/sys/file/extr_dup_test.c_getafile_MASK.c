
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(void)
{
 int VAR_0;

 char VAR_1[] = "/tmp/dup2XXXXXXXXX";
 if ((VAR_0 = FUNC_2(VAR_1)) < 0)
  FUNC_0(1, "mkstemp");
 FUNC_3(VAR_1);
 if (FUNC_1(VAR_0, 1024) != 0)
  FUNC_0(1, "ftruncate");
 return (VAR_0);
}
