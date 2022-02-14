
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_nr; struct cache_entry** cache; } ;
struct cache_entry {char* name; int ce_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct cache_entry const*) ;
 struct cache_entry* FUNC_2 (struct index_state*,char const*,int,int ) ;
 int FUNC_3 (struct index_state*,char const*,int) ;
 scalar_t__ FUNC_4 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_5(struct index_state *VAR_3,
      const char *VAR_4, int VAR_5)
{
 int VAR_6;
 const struct cache_entry *VAR_7;

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5, 0);
 if (VAR_7) {
  if (!FUNC_1(VAR_7))
   return VAR_2;
  if (FUNC_0(VAR_7->ce_mode))
   return VAR_0;




  return VAR_1;
 }


 VAR_6 = FUNC_3(VAR_3, VAR_4, VAR_5);
 if (VAR_6 >= 0)
  return VAR_2;
 VAR_6 = -VAR_6-1;
 while (VAR_6 < VAR_3->cache_nr) {
  VAR_7 = VAR_3->cache[VAR_6++];
  if (FUNC_4(VAR_7->name, VAR_4, VAR_5))
   break;
  if (VAR_7->name[VAR_5] > '/')
   break;
  if (VAR_7->name[VAR_5] < '/')
   continue;
  if (!FUNC_1(VAR_7))
   break;
  return VAR_0;
 }
 return VAR_2;
}
