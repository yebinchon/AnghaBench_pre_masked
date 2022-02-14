
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int * free; } ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int *,long) ;

__attribute__((used)) static int FUNC_1(struct cache *VAR_2, long VAR_3)
{
 unsigned int VAR_4;


 if (FUNC_0(&VAR_2->free[VAR_1], VAR_3))
  return 1;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (FUNC_0(&VAR_2->free[VAR_4], VAR_3))
   return 1;

 return 0;
}
