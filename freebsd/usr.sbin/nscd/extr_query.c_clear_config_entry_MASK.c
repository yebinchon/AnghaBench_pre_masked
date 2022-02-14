
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configuration_entry {size_t mp_cache_entries_size; int ** mp_cache_entries; int * negative_cache_entry; int * positive_cache_entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void (*) (struct configuration_entry*)) ;
 int FUNC_1 (void (*) (struct configuration_entry*)) ;
 int FUNC_2 (struct configuration_entry*,int ) ;
 int FUNC_3 (struct configuration_entry*,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(struct configuration_entry *VAR_4)
{
 size_t VAR_5;

 FUNC_0(FUNC_5);
 FUNC_2(VAR_4, VAR_2);
 if (VAR_4->positive_cache_entry != ((void*)0))
  FUNC_4(
   VAR_4->positive_cache_entry,
   VAR_3);
 FUNC_3(VAR_4, VAR_2);

 FUNC_2(VAR_4, VAR_1);
 if (VAR_4->negative_cache_entry != ((void*)0))
  FUNC_4(
   VAR_4->negative_cache_entry,
   VAR_3);
 FUNC_3(VAR_4, VAR_1);

 FUNC_2(VAR_4, VAR_0);
 for (VAR_5 = 0; VAR_5 < VAR_4->mp_cache_entries_size; ++VAR_5)
  FUNC_4(
   VAR_4->mp_cache_entries[VAR_5],
   VAR_3);
 FUNC_3(VAR_4, VAR_0);

 FUNC_1(FUNC_5);
}
