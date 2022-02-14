
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lazy_name_thread_data {TYPE_2__* istate; TYPE_1__* lazy_entries; } ;
struct cache_entry {int ent; int ce_flags; } ;
struct TYPE_4__ {int cache_nr; int name_hash; struct cache_entry** cache; } ;
struct TYPE_3__ {int hash_name; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void *FUNC_2(void *VAR_1)
{
 struct lazy_name_thread_data *VAR_2 = VAR_1;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->istate->cache_nr; VAR_3++) {
  struct cache_entry *VAR_4 = VAR_2->istate->cache[VAR_3];
  VAR_4->ce_flags |= VAR_0;
  FUNC_1(&VAR_4->ent, VAR_2->lazy_entries[VAR_3].hash_name);
  FUNC_0(&VAR_2->istate->name_hash, &VAR_4->ent);
 }

 return ((void*)0);
}
