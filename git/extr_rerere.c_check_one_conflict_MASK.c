
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_nr; struct cache_entry const** cache; } ;
typedef struct cache_entry {int ce_mode; } const cache_entry ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct cache_entry const*,struct cache_entry const*) ;
 int FUNC_2 (struct cache_entry const*) ;

__attribute__((used)) static int FUNC_3(struct index_state *VAR_3, int VAR_4, int *VAR_5)
{
 const struct cache_entry *VAR_6 = VAR_3->cache[VAR_4];

 if (!FUNC_2(VAR_6)) {
  *VAR_5 = VAR_1;
  return VAR_4 + 1;
 }

 *VAR_5 = VAR_0;
 while (VAR_4 < VAR_3->cache_nr && FUNC_2(VAR_3->cache[VAR_4]) == 1)
  VAR_4++;


 if (VAR_4 + 1 < VAR_3->cache_nr) {
  const struct cache_entry *VAR_7 = VAR_3->cache[VAR_4];
  const struct cache_entry *VAR_8 = VAR_3->cache[VAR_4 + 1];
  if (FUNC_2(VAR_7) == 2 &&
      FUNC_2(VAR_8) == 3 &&
      FUNC_1(VAR_6, VAR_8) &&
      FUNC_0(VAR_7->ce_mode) &&
      FUNC_0(VAR_8->ce_mode))
   *VAR_5 = VAR_2;
 }


 while (VAR_4 < VAR_3->cache_nr && FUNC_1(VAR_6, VAR_3->cache[VAR_4]))
  VAR_4++;
 return VAR_4;
}
