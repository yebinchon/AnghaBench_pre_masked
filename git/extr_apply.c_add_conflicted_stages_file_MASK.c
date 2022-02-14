
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct patch {int new_mode; int new_name; int * threeway_stage; } ;
struct cache_entry {int ce_namelen; int oid; int ce_flags; int ce_mode; int name; } ;
struct apply_state {TYPE_1__* repo; int update_index; } ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,struct cache_entry*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct cache_entry*) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 struct cache_entry* FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct apply_state *VAR_2,
           struct patch *VAR_3)
{
 int VAR_4, VAR_5;
 unsigned VAR_6;
 struct cache_entry *VAR_7;

 if (!VAR_2->update_index)
  return 0;
 VAR_5 = FUNC_11(VAR_3->new_name);
 VAR_6 = VAR_3->new_mode ? VAR_3->new_mode : (VAR_1 | 0644);

 FUNC_10(VAR_2->repo->index, VAR_3->new_name);
 for (VAR_4 = 1; VAR_4 < 4; VAR_4++) {
  if (FUNC_6(&VAR_3->threeway_stage[VAR_4 - 1]))
   continue;
  VAR_7 = FUNC_7(VAR_2->repo->index, VAR_5);
  FUNC_8(VAR_7->name, VAR_3->new_name, VAR_5);
  VAR_7->ce_mode = FUNC_3(VAR_6);
  VAR_7->ce_flags = FUNC_2(VAR_4);
  VAR_7->ce_namelen = VAR_5;
  FUNC_9(&VAR_7->oid, &VAR_3->threeway_stage[VAR_4 - 1]);
  if (FUNC_1(VAR_2->repo->index, VAR_7, VAR_0) < 0) {
   FUNC_4(VAR_7);
   return FUNC_5(FUNC_0("unable to add cache entry for %s"),
         VAR_3->new_name);
  }
 }

 return 0;
}
