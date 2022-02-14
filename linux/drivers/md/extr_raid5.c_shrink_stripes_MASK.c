
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {int * slab_cache; scalar_t__ max_nr_stripes; } ;


 scalar_t__ FUNC_0 (struct r5conf*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct r5conf *VAR_0)
{
 while (VAR_0->max_nr_stripes &&
        FUNC_0(VAR_0))
  ;

 FUNC_1(VAR_0->slab_cache);
 VAR_0->slab_cache = ((void*)0);
}
