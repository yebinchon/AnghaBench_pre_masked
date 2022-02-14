
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configuration_entry {int mp_cache_entries_size; int * mp_cache_entries; } ;
typedef int cache_entry ;


 int FUNC_0 (int (*) (struct configuration_entry*,int )) ;
 int FUNC_1 (int (*) (struct configuration_entry*,int )) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int,int,int ) ;

int
FUNC_7(struct configuration_entry *VAR_1,
 cache_entry VAR_2)
{
 cache_entry *VAR_3, *VAR_4;

 FUNC_0(FUNC_7);
 ++VAR_1->mp_cache_entries_size;
 VAR_3 = FUNC_4(sizeof(*VAR_3) *
  VAR_1->mp_cache_entries_size);
 FUNC_2(VAR_3 != ((void*)0));
 VAR_3[0] = VAR_2;

 if (VAR_1->mp_cache_entries_size - 1 > 0) {
  FUNC_5(VAR_3 + 1,
      VAR_1->mp_cache_entries,
      (VAR_1->mp_cache_entries_size - 1) *
      sizeof(cache_entry));
 }

 VAR_4 = VAR_1->mp_cache_entries;
 VAR_1->mp_cache_entries = VAR_3;
 FUNC_3(VAR_4);

 FUNC_6(VAR_1->mp_cache_entries,
  VAR_1->mp_cache_entries_size,
  sizeof(cache_entry),
  VAR_0);

 FUNC_1(FUNC_7);
 return (0);
}
