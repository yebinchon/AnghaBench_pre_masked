
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct notes_tree {int dummy; } ;
typedef int combine_notes_fn ;


 int FUNC_0 (struct notes_tree*,struct object_id const*,struct object_id const*,int ) ;
 struct object_id* FUNC_1 (struct notes_tree*,struct object_id const*) ;
 struct object_id const VAR_0 ;

int FUNC_2(struct notes_tree *VAR_1,
       const struct object_id *VAR_2, const struct object_id *VAR_3,
       int VAR_4, combine_notes_fn VAR_5)
{
 const struct object_id *VAR_6 = FUNC_1(VAR_1, VAR_2);
 const struct object_id *VAR_7 = FUNC_1(VAR_1, VAR_3);

 if (!VAR_4 && VAR_7)
  return 1;

 if (VAR_6)
  return FUNC_0(VAR_1, VAR_3, VAR_6, VAR_5);
 else if (VAR_7)
  return FUNC_0(VAR_1, VAR_3, &VAR_0, VAR_5);

 return 0;
}
