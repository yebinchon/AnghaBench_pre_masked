
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name {struct name* n_blink; struct name* n_flink; } ;



struct name *
FUNC_0(struct name *VAR_0, struct name *VAR_1)
{
 VAR_1->n_flink = VAR_0;
 VAR_1->n_blink = ((void*)0);
 if (VAR_0 != ((void*)0))
  VAR_0->n_blink = VAR_1;
 return (VAR_1);
}
