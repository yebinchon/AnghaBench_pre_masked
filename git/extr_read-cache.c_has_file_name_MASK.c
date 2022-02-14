
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_nr; struct cache_entry const** cache; } ;
typedef struct cache_entry {char* name; int ce_flags; } const cache_entry ;


 int VAR_0 ;
 int FUNC_0 (struct cache_entry const*) ;
 int FUNC_1 (struct cache_entry const*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (struct index_state*,int) ;

__attribute__((used)) static int FUNC_4(struct index_state *VAR_1,
    const struct cache_entry *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = FUNC_0(VAR_2);
 int VAR_7 = FUNC_1(VAR_2);
 const char *VAR_8 = VAR_2->name;

 while (VAR_3 < VAR_1->cache_nr) {
  struct cache_entry *VAR_9 = VAR_1->cache[VAR_3++];

  if (VAR_6 >= FUNC_0(VAR_9))
   break;
  if (FUNC_2(VAR_8, VAR_9->name, VAR_6))
   break;
  if (FUNC_1(VAR_9) != VAR_7)
   continue;
  if (VAR_9->name[VAR_6] != '/')
   continue;
  if (VAR_9->ce_flags & VAR_0)
   continue;
  VAR_5 = -1;
  if (!VAR_4)
   break;
  FUNC_3(VAR_1, --VAR_3);
 }
 return VAR_5;
}
