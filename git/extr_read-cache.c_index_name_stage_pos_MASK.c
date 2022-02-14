
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_nr; struct cache_entry** cache; } ;
struct cache_entry {int name; } ;


 int FUNC_0 (char const*,int,int,int ,int ,int ) ;
 int FUNC_1 (struct cache_entry*) ;
 int FUNC_2 (struct cache_entry*) ;

__attribute__((used)) static int FUNC_3(const struct index_state *VAR_0, const char *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = 0;
 VAR_5 = VAR_0->cache_nr;
 while (VAR_5 > VAR_4) {
  int VAR_6 = VAR_4 + ((VAR_5 - VAR_4) >> 1);
  struct cache_entry *VAR_7 = VAR_0->cache[VAR_6];
  int VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_7->name, FUNC_1(VAR_7), FUNC_2(VAR_7));
  if (!VAR_8)
   return VAR_6;
  if (VAR_8 < 0) {
   VAR_5 = VAR_6;
   continue;
  }
  VAR_4 = VAR_6+1;
 }
 return -VAR_4-1;
}
