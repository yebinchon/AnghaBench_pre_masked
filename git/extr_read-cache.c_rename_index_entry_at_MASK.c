
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {struct cache_entry** cache; } ;
struct cache_entry {int ce_namelen; int name; scalar_t__ index; int ce_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct index_state*,struct cache_entry*,int) ;
 int FUNC_1 (struct index_state*,int ) ;
 int FUNC_2 (struct cache_entry*,struct cache_entry*) ;
 struct cache_entry* FUNC_3 (struct index_state*,int) ;
 int FUNC_4 (int ,char const*,int) ;
 int FUNC_5 (struct index_state*,int) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (struct index_state*,int ) ;

void FUNC_8(struct index_state *VAR_3, int VAR_4, const char *VAR_5)
{
 struct cache_entry *VAR_6 = VAR_3->cache[VAR_4], *VAR_7;
 int VAR_8 = FUNC_6(VAR_5);

 VAR_7 = FUNC_3(VAR_3, VAR_8);
 FUNC_2(VAR_7, VAR_6);
 VAR_7->ce_flags &= ~VAR_2;
 VAR_7->ce_namelen = VAR_8;
 VAR_7->index = 0;
 FUNC_4(VAR_7->name, VAR_5, VAR_8 + 1);

 FUNC_1(VAR_3, VAR_6->name);
 FUNC_7(VAR_3, VAR_6->name);
 FUNC_5(VAR_3, VAR_4);
 FUNC_0(VAR_3, VAR_7, VAR_0|VAR_1);
}
