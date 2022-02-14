
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct in_addr*,int *,int) ;
 int * VAR_1 ;

int
FUNC_1(struct in_addr VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (!FUNC_0(&VAR_2, &VAR_1[VAR_3], sizeof(struct in_addr)))
   return(0);

 return(1);
}
