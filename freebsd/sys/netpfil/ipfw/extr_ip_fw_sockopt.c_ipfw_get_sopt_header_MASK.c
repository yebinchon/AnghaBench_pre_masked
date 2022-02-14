
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt_data {scalar_t__ kavail; scalar_t__ koff; scalar_t__ kbuf; } ;
typedef int * caddr_t ;


 int * FUNC_0 (struct sockopt_data*,size_t) ;
 int FUNC_1 (scalar_t__,int ,scalar_t__) ;

caddr_t
FUNC_2(struct sockopt_data *VAR_0, size_t VAR_1)
{
 caddr_t VAR_2;

 if ((VAR_2 = FUNC_0(VAR_0, VAR_1)) == ((void*)0))
  return (((void*)0));

 if (VAR_0->kavail > 0)
  FUNC_1(VAR_0->kbuf + VAR_0->koff, 0, VAR_0->kavail);

 return (VAR_2);
}
