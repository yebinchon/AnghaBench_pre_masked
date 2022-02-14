
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clockdomain {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clockdomain*) ;
 int VAR_2 ;

int FUNC_1(struct clockdomain **VAR_3)
{
 struct clockdomain **VAR_4 = ((void*)0);

 if (!VAR_2)
  return -VAR_0;

 if (!VAR_3)
  return -VAR_1;

 for (VAR_4 = VAR_3; *VAR_4; VAR_4++)
  FUNC_0(*VAR_4);

 return 0;
}
