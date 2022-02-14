
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long tree_size; void* tree_data; int oid; } ;
struct pbase_tree {TYPE_1__ pcache; struct pbase_tree* next; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct object_id*) ;
 scalar_t__ FUNC_2 (int *,struct object_id*) ;
 struct pbase_tree* VAR_1 ;
 void* FUNC_3 (int ,struct object_id*,int ,unsigned long*,struct object_id*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct pbase_tree* FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct object_id *VAR_5)
{
 struct pbase_tree *VAR_6;
 void *VAR_7;
 unsigned long VAR_8;
 struct object_id VAR_9;

 if (VAR_4 <= VAR_0++)
  return;

 VAR_7 = FUNC_3(VAR_2, VAR_5,
       VAR_3, &VAR_8, &VAR_9);
 if (!VAR_7)
  return;

 for (VAR_6 = VAR_1; VAR_6; VAR_6 = VAR_6->next) {
  if (FUNC_2(&VAR_6->pcache.oid, &VAR_9)) {
   FUNC_0(VAR_7);
   return;
  }
 }

 VAR_6 = FUNC_4(1, sizeof(*VAR_6));
 VAR_6->next = VAR_1;
 VAR_1 = VAR_6;

 FUNC_1(&VAR_6->pcache.oid, &VAR_9);
 VAR_6->pcache.tree_data = VAR_7;
 VAR_6->pcache.tree_size = VAR_8;
}
