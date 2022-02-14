
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configuration_entry {int mp_cache_entries_size; int * mp_cache_entries; } ;
typedef int cache_entry ;


 int FUNC_0 (int (*) (struct configuration_entry*,char const*,int **,int **)) ;
 int FUNC_1 (int (*) (struct configuration_entry*,char const*,int **,int **)) ;
 int * FUNC_2 (char const*,int *,int,int,scalar_t__ (*) (char const*,int *)) ;
 scalar_t__ FUNC_3 (char const*,int *) ;

int
FUNC_4(
 struct configuration_entry *VAR_0, const char *VAR_1,
 cache_entry **VAR_2, cache_entry **VAR_3)
{
 cache_entry *VAR_4;

 FUNC_0(FUNC_4);
 VAR_4 = FUNC_2(VAR_1, VAR_0->mp_cache_entries,
  VAR_0->mp_cache_entries_size,
  sizeof(cache_entry), FUNC_3);

 if (VAR_4 == ((void*)0)) {
  FUNC_1(FUNC_4);
  return (-1);
 }

 *VAR_2 = VAR_4;
 *VAR_3 = VAR_4 + 1;

 while (*VAR_2 != VAR_0->mp_cache_entries) {
     if (FUNC_3(VAR_1, *VAR_2 - 1) == 0)
  *VAR_2 = *VAR_2 - 1;
     else
  break;
 }

 while (*VAR_3 != VAR_0->mp_cache_entries +
  VAR_0->mp_cache_entries_size) {

     if (FUNC_3(
  VAR_1, *VAR_3) == 0)
      *VAR_3 = *VAR_3 + 1;
     else
  break;
 }

 FUNC_1(FUNC_4);
 return (0);
}
