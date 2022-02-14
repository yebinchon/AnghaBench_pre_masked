
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_nr; struct cache_entry** cache; } ;
struct cache_entry {int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cache_entry const*) ;
 int FUNC_1 (struct index_state const*,int ,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(const struct index_state *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1, VAR_0, FUNC_3(VAR_0));
 if (VAR_2 < 0) {
  VAR_2 = -1 - VAR_2;
  if (VAR_1->cache_nr > VAR_2) {
   const struct cache_entry *VAR_3 = VAR_1->cache[VAR_2];
   if (FUNC_0(VAR_3) == FUNC_3(VAR_0) &&
       !FUNC_2(VAR_3->name, VAR_0))
    return 1;
  }
 }

 return 0;
}
