
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_entry_ {int dummy; } ;
struct cache_ {size_t entries_size; struct cache_entry_** entries; } ;


 int FUNC_0 (int (*) (struct cache_*,char const*)) ;
 int FUNC_1 (int (*) (struct cache_*,char const*)) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cache_entry_*) ;
 struct cache_entry_** FUNC_4 (struct cache_*,char const*) ;
 int FUNC_5 (struct cache_entry_**,struct cache_entry_**,int) ;

int
FUNC_6(struct cache_ *VAR_0, const char *VAR_1)
{
 struct cache_entry_ **VAR_2;

 FUNC_0(FUNC_6);
 FUNC_2(VAR_0 != ((void*)0));

 VAR_2 = FUNC_4(VAR_0, VAR_1);
 if (VAR_2 != ((void*)0)) {
  FUNC_3(*VAR_2);
  --VAR_0->entries_size;

  FUNC_5(VAR_2, VAR_2 + 1,
   (&(VAR_0->entries[--VAR_0->entries_size]) -
       VAR_2) * sizeof(struct cache_entry_ *));

  FUNC_1(FUNC_6);
  return (0);
 } else {
  FUNC_1(FUNC_6);
  return (-1);
 }
}
