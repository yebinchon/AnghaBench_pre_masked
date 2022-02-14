
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int dummy; } ;
struct tag {int dummy; } ;
struct parsed_object_pool {unsigned int obj_hash_size; struct object** shallow_stat; struct object** object_state; struct object** tag_state; struct object** commit_state; struct object** tree_state; struct object** blob_state; int * buffer_slab; struct object** obj_hash; } ;
struct object {scalar_t__ type; } ;
struct commit {int dummy; } ;


 int FUNC_0 (struct object**) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct object**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tree*) ;
 int FUNC_4 (struct parsed_object_pool*,struct commit*) ;
 int FUNC_5 (struct tag*) ;
 int FUNC_6 (struct object**) ;

void FUNC_7(struct parsed_object_pool *VAR_3)
{







 unsigned VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->obj_hash_size; VAR_4++) {
  struct object *VAR_5 = VAR_3->obj_hash[VAR_4];

  if (!VAR_5)
   continue;

  if (VAR_5->type == VAR_2)
   FUNC_3((struct tree*)VAR_5);
  else if (VAR_5->type == VAR_0)
   FUNC_4(VAR_3, (struct commit*)VAR_5);
  else if (VAR_5->type == VAR_1)
   FUNC_5((struct tag*)VAR_5);
 }

 FUNC_0(VAR_3->obj_hash);
 VAR_3->obj_hash_size = 0;

 FUNC_2(VAR_3->buffer_slab);
 VAR_3->buffer_slab = ((void*)0);

 FUNC_1(VAR_3->blob_state);
 FUNC_1(VAR_3->tree_state);
 FUNC_1(VAR_3->commit_state);
 FUNC_1(VAR_3->tag_state);
 FUNC_1(VAR_3->object_state);
 FUNC_6(VAR_3->shallow_stat);
 FUNC_0(VAR_3->blob_state);
 FUNC_0(VAR_3->tree_state);
 FUNC_0(VAR_3->commit_state);
 FUNC_0(VAR_3->tag_state);
 FUNC_0(VAR_3->object_state);
 FUNC_0(VAR_3->shallow_stat);
}
