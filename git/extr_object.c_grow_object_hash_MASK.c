
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {TYPE_1__* parsed_objects; } ;
struct object {int dummy; } ;
struct TYPE_2__ {int obj_hash_size; struct object** obj_hash; } ;


 int FUNC_0 (struct object**) ;
 int FUNC_1 (struct object*,struct object**,int) ;
 struct object** FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct repository *VAR_0)
{
 int VAR_1;




 int VAR_2 = VAR_0->parsed_objects->obj_hash_size < 32 ? 32 : 2 * VAR_0->parsed_objects->obj_hash_size;
 struct object **VAR_3;

 VAR_3 = FUNC_2(VAR_2, sizeof(struct object *));
 for (VAR_1 = 0; VAR_1 < VAR_0->parsed_objects->obj_hash_size; VAR_1++) {
  struct object *VAR_4 = VAR_0->parsed_objects->obj_hash[VAR_1];

  if (!VAR_4)
   continue;
  FUNC_1(VAR_4, VAR_3, VAR_2);
 }
 FUNC_0(VAR_0->parsed_objects->obj_hash);
 VAR_0->parsed_objects->obj_hash = VAR_3;
 VAR_0->parsed_objects->obj_hash_size = VAR_2;
}
