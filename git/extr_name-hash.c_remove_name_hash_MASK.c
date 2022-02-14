
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int name_hash; int name_hash_initialized; } ;
struct cache_entry {int ce_flags; int ent; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,struct cache_entry*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct index_state*,struct cache_entry*) ;

void FUNC_2(struct index_state *VAR_2, struct cache_entry *VAR_3)
{
 if (!VAR_2->name_hash_initialized || !(VAR_3->ce_flags & VAR_0))
  return;
 VAR_3->ce_flags &= ~VAR_0;
 FUNC_0(&VAR_2->name_hash, &VAR_3->ent, VAR_3);

 if (VAR_1)
  FUNC_1(VAR_2, VAR_3);
}
