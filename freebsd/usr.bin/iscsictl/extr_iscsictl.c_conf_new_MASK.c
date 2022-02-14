
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conf {int conf_targets; } ;


 int FUNC_0 (int *) ;
 struct conf* FUNC_1 (int,int) ;
 int FUNC_2 (int,char*) ;

struct conf *
FUNC_3(void)
{
 struct conf *VAR_0;

 VAR_0 = FUNC_1(1, sizeof(*VAR_0));
 if (VAR_0 == ((void*)0))
  FUNC_2(1, "calloc");

 FUNC_0(&VAR_0->conf_targets);

 return (VAR_0);
}
