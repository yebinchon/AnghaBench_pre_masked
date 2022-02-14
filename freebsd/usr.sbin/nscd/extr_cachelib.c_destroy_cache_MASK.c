
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_ {size_t entries_size; struct cache_* entries; } ;


 int FUNC_0 (void (*) (struct cache_*)) ;
 int FUNC_1 (void (*) (struct cache_*)) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cache_) ;
 int FUNC_4 (struct cache_*) ;

void
FUNC_5(struct cache_ *VAR_0)
{

 FUNC_0(FUNC_5);
 FUNC_2(VAR_0 != ((void*)0));

 if (VAR_0->entries != ((void*)0)) {
  size_t VAR_1;
  for (VAR_1 = 0; VAR_1 < VAR_0->entries_size; ++VAR_1)
   FUNC_3(VAR_0->entries[VAR_1]);

  FUNC_4(VAR_0->entries);
 }

 FUNC_4(VAR_0);
 FUNC_1(FUNC_5);
}
