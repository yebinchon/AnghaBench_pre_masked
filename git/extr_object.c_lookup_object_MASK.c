
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {TYPE_1__* parsed_objects; } ;
struct object_id {int dummy; } ;
struct object {int oid; } ;
struct TYPE_2__ {unsigned int obj_hash_size; struct object** obj_hash; } ;


 int FUNC_0 (struct object*,struct object*) ;
 unsigned int FUNC_1 (struct object_id const*,unsigned int) ;
 scalar_t__ FUNC_2 (struct object_id const*,int *) ;

struct object *FUNC_3(struct repository *VAR_0, const struct object_id *VAR_1)
{
 unsigned int VAR_2, VAR_3;
 struct object *VAR_4;

 if (!VAR_0->parsed_objects->obj_hash)
  return ((void*)0);

 VAR_3 = VAR_2 = FUNC_1(VAR_1, VAR_0->parsed_objects->obj_hash_size);
 while ((VAR_4 = VAR_0->parsed_objects->obj_hash[VAR_2]) != ((void*)0)) {
  if (FUNC_2(VAR_1, &VAR_4->oid))
   break;
  VAR_2++;
  if (VAR_2 == VAR_0->parsed_objects->obj_hash_size)
   VAR_2 = 0;
 }
 if (VAR_4 && VAR_2 != VAR_3) {





  FUNC_0(VAR_0->parsed_objects->obj_hash[VAR_2],
       VAR_0->parsed_objects->obj_hash[VAR_3]);
 }
 return VAR_4;
}
