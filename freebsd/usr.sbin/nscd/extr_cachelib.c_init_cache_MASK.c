
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_params {int dummy; } ;
struct cache_ {int entries_capacity; scalar_t__ entries_size; int * entries; int params; } ;


 int VAR_0 ;
 int FUNC_0 (struct cache_* (*) (struct cache_params const*)) ;
 int FUNC_1 (struct cache_* (*) (struct cache_params const*)) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 (int *,struct cache_params const*,int) ;

struct cache_ *
FUNC_5(struct cache_params const *VAR_1)
{
 struct cache_ *VAR_2;

 FUNC_0(FUNC_5);
 FUNC_2(VAR_1 != ((void*)0));

 VAR_2 = FUNC_3(1, sizeof(*VAR_2));
 FUNC_2(VAR_2 != ((void*)0));

 FUNC_2(VAR_1 != ((void*)0));
 FUNC_4(&VAR_2->params, VAR_1, sizeof(struct cache_params));

 VAR_2->entries = FUNC_3(VAR_0,
  sizeof(*VAR_2->entries));
 FUNC_2(VAR_2->entries != ((void*)0));

 VAR_2->entries_capacity = VAR_0;
 VAR_2->entries_size = 0;

 FUNC_1(FUNC_5);
 return (VAR_2);
}
