
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {struct index_state* index; } ;
struct index_state {int cache_nr; struct cache_entry** cache; } ;
struct cache_entry {int ce_flags; int ce_namelen; int name; int ce_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct index_state*,struct cache_entry*,int ) ;
 int FUNC_2 (struct cache_entry*) ;
 int FUNC_3 (struct cache_entry*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 struct cache_entry* FUNC_6 (struct index_state*,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (struct repository*) ;

int FUNC_9(struct repository *VAR_2)
{
 struct index_state *VAR_3;
 int VAR_4;
 int VAR_5 = 0;

 FUNC_8(VAR_2);
 VAR_3 = VAR_2->index;
 for (VAR_4 = 0; VAR_4 < VAR_3->cache_nr; VAR_4++) {
  struct cache_entry *VAR_6 = VAR_3->cache[VAR_4];
  struct cache_entry *VAR_7;
  int VAR_8;

  if (!FUNC_3(VAR_6))
   continue;
  VAR_5 = 1;
  VAR_8 = FUNC_2(VAR_6);
  VAR_7 = FUNC_6(VAR_3, VAR_8);
  FUNC_7(VAR_7->name, VAR_6->name, VAR_8);
  VAR_7->ce_flags = FUNC_4(0) | VAR_1;
  VAR_7->ce_namelen = VAR_8;
  VAR_7->ce_mode = VAR_6->ce_mode;
  if (FUNC_1(VAR_3, VAR_7, VAR_0))
   return FUNC_5(FUNC_0("%s: cannot drop to stage #0"),
         VAR_7->name);
 }
 return VAR_5;
}
