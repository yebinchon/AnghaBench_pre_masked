
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct notes_cache {int tree; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 struct object_id* FUNC_0 (int *,struct object_id*) ;
 char* FUNC_1 (struct object_id const*,int*,unsigned long*) ;

char *FUNC_2(struct notes_cache *VAR_0, struct object_id *VAR_1,
        size_t *VAR_2)
{
 const struct object_id *VAR_3;
 enum object_type VAR_4;
 char *VAR_5;
 unsigned long VAR_6;

 VAR_3 = FUNC_0(&VAR_0->tree, VAR_1);
 if (!VAR_3)
  return ((void*)0);
 VAR_5 = FUNC_1(VAR_3, &VAR_4, &VAR_6);

 *VAR_2 = VAR_6;
 return VAR_5;
}
