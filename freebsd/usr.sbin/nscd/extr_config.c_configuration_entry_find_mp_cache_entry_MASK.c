
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configuration_entry {int mp_cache_entries_size; int mp_cache_entries; } ;
typedef int * cache_entry ;


 int FUNC_0 (int * (*) (struct configuration_entry*,char const*)) ;
 int FUNC_1 (int * (*) (struct configuration_entry*,char const*)) ;
 int ** FUNC_2 (char const*,int ,int ,int,int ) ;
 int VAR_0 ;

cache_entry
FUNC_3(
 struct configuration_entry *VAR_1, const char *VAR_2)
{
 cache_entry *VAR_3;

 FUNC_0(FUNC_3);
 VAR_3 = FUNC_2(VAR_2, VAR_1->mp_cache_entries,
  VAR_1->mp_cache_entries_size,
  sizeof(cache_entry), VAR_0);

 if (VAR_3 == ((void*)0)) {
  FUNC_1(FUNC_3);
  return (((void*)0));
 } else {
  FUNC_1(FUNC_3);
  return (*VAR_3);
 }
}
