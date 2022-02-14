
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name {struct name* n_blink; struct name* n_flink; } ;


 struct name* FUNC_0 (struct name*) ;

struct name *
FUNC_1(struct name *VAR_0, struct name *VAR_1)
{
 struct name *VAR_2;

 if (VAR_0 == ((void*)0))
  return (VAR_1);
 if (VAR_1 == ((void*)0))
  return (VAR_0);
 VAR_2 = FUNC_0(VAR_0);
 VAR_2->n_flink = VAR_1;
 VAR_1->n_blink = VAR_2;
 return (VAR_0);
}
