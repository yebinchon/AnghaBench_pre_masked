
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netconfig {int * nc_netid; } ;



struct netconfig *
FUNC_0(void *VAR_0)
{
 struct netconfig **VAR_1 = (struct netconfig **) VAR_0;
 struct netconfig *VAR_2;

 VAR_2 = *VAR_1;
 if (VAR_2->nc_netid == ((void*)0))
  return (((void*)0));

 (*VAR_1)++;

 return (VAR_2);
}
