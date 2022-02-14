
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char**,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char*) ;
 int VAR_0 ;

int
FUNC_4(int VAR_1, char **VAR_2)
{

 if (VAR_1 != 2) {
  FUNC_3(VAR_0, "usage: %s <progname>\n", VAR_2[0]);
  FUNC_2(2);
 }

 FUNC_1(VAR_2[1], &VAR_2[1], ((void*)0));
 FUNC_0(1, "execve failed");
}
