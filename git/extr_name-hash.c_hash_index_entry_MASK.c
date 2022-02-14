
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int name_hash; } ;
struct cache_entry {int ce_flags; int ent; int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct index_state*,struct cache_entry*) ;
 int FUNC_1 (struct cache_entry*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct index_state *VAR_2, struct cache_entry *VAR_3)
{
 if (VAR_3->ce_flags & VAR_0)
  return;
 VAR_3->ce_flags |= VAR_0;
 FUNC_3(&VAR_3->ent, FUNC_4(VAR_3->name, FUNC_1(VAR_3)));
 FUNC_2(&VAR_2->name_hash, &VAR_3->ent);

 if (VAR_1)
  FUNC_0(VAR_2, VAR_3);
}
