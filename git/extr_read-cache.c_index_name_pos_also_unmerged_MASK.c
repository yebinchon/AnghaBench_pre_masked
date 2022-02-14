
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_nr; struct cache_entry** cache; } ;
struct cache_entry {int dummy; } ;


 int FUNC_0 (struct cache_entry*) ;
 scalar_t__ FUNC_1 (struct cache_entry*,char const*,int) ;
 int FUNC_2 (struct index_state*,char const*,int) ;

__attribute__((used)) static int FUNC_3(struct index_state *VAR_0,
 const char *VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 struct cache_entry *VAR_4;

 if (VAR_3 >= 0)
  return VAR_3;


 VAR_3 = -1 - VAR_3;
 if (VAR_3 >= VAR_0->cache_nr ||
   FUNC_1((VAR_4 = VAR_0->cache[VAR_3]), VAR_1, VAR_2))
  return -1;


 if (FUNC_0(VAR_4) == 1 && VAR_3 + 1 < VAR_0->cache_nr &&
   FUNC_0((VAR_4 = VAR_0->cache[VAR_3 + 1])) == 2 &&
   !FUNC_1(VAR_4, VAR_1, VAR_2))
  VAR_3++;
 return VAR_3;
}
