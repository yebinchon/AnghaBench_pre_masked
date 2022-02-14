
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_changed; struct cache_entry** cache; } ;
struct cache_entry {int ce_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cache_entry*) ;
 int FUNC_1 (struct index_state*,struct cache_entry*) ;
 int FUNC_2 (struct index_state*,struct cache_entry*) ;
 int FUNC_3 (struct index_state*,struct cache_entry*,struct cache_entry*) ;
 int FUNC_4 (struct index_state*,int,struct cache_entry*) ;

__attribute__((used)) static void FUNC_5(struct index_state *VAR_3, int VAR_4, struct cache_entry *VAR_5)
{
 struct cache_entry *VAR_6 = VAR_3->cache[VAR_4];

 FUNC_3(VAR_3, VAR_6, VAR_5);
 FUNC_2(VAR_3, VAR_6);
 FUNC_0(VAR_6);
 VAR_5->ce_flags &= ~VAR_1;
 FUNC_4(VAR_3, VAR_4, VAR_5);
 VAR_5->ce_flags |= VAR_2;
 FUNC_1(VAR_3, VAR_5);
 VAR_3->cache_changed |= VAR_0;
}
