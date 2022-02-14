
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netconfig {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct netconfig** FUNC_0 (int,int ,int ) ;
 struct netconfig* VAR_2 ;

void *
FUNC_1(void)
{
 struct netconfig **VAR_3;

 VAR_3 = FUNC_0(sizeof(struct netconfig *), VAR_0, VAR_1);
 *VAR_3 = VAR_2;

 return ((void *) VAR_3);
}
