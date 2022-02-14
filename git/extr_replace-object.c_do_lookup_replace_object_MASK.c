
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {TYPE_1__* objects; } ;
struct object_id {int dummy; } ;
struct replace_object {struct object_id replacement; } ;
struct TYPE_2__ {int replace_map; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct object_id const*) ;
 struct replace_object* FUNC_3 (int ,struct object_id const*) ;
 int FUNC_4 (struct repository*) ;

const struct object_id *FUNC_5(struct repository *VAR_1,
       const struct object_id *VAR_2)
{
 int VAR_3 = VAR_0;
 const struct object_id *VAR_4 = VAR_2;

 FUNC_4(VAR_1);


 while (VAR_3-- > 0) {
  struct replace_object *VAR_5 =
   FUNC_3(VAR_1->objects->replace_map, VAR_4);
  if (!VAR_5)
   return VAR_4;
  VAR_4 = &VAR_5->replacement;
 }
 FUNC_1(FUNC_0("replace depth too high for object %s"), FUNC_2(VAR_2));
}
