
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int sol_comp; } ;
typedef int SVCXPRT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct socket *VAR_1, void *VAR_2, int VAR_3)
{
 SVCXPRT *VAR_4 = (SVCXPRT *) VAR_2;

 if (!FUNC_0(&VAR_1->sol_comp))
  FUNC_1(VAR_4);
 return (VAR_0);
}
