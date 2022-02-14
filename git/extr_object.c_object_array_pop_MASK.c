
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_array {int nr; TYPE_1__* objects; } ;
struct object {int dummy; } ;
struct TYPE_2__ {struct object* item; } ;


 int FUNC_0 (TYPE_1__*) ;

struct object *FUNC_1(struct object_array *VAR_0)
{
 struct object *VAR_1;

 if (!VAR_0->nr)
  return ((void*)0);

 VAR_1 = VAR_0->objects[VAR_0->nr - 1].item;
 FUNC_0(&VAR_0->objects[VAR_0->nr - 1]);
 VAR_0->nr--;
 return VAR_1;
}
