
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
typedef int buf ;


 int FUNC_0 (struct socket*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,struct socket*) ;

void FUNC_3(struct socket *VAR_0)
{
 char VAR_1[100];

 FUNC_2(VAR_1, sizeof(VAR_1), VAR_0);
 FUNC_1("Put sock %s\n", VAR_1);
 FUNC_0(VAR_0);
}
