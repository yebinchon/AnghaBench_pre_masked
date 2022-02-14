
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name {struct name* n_flink; } ;



struct name *
FUNC_0(struct name *VAR_0)
{
 struct name *VAR_1;

 VAR_1 = VAR_0;
 if (VAR_1 == ((void*)0))
  return (((void*)0));
 while (VAR_1->n_flink != ((void*)0))
  VAR_1 = VAR_1->n_flink;
 return (VAR_1);
}
