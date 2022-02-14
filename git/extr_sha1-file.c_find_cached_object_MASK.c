
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct cached_object {struct object_id const oid; } ;
struct TYPE_2__ {struct object_id const* empty_tree; } ;


 int VAR_0 ;
 struct cached_object* VAR_1 ;
 struct cached_object VAR_2 ;
 scalar_t__ FUNC_0 (struct object_id const*,struct object_id const*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static struct cached_object *FUNC_1(const struct object_id *VAR_4)
{
 int VAR_5;
 struct cached_object *VAR_6 = VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++, VAR_6++) {
  if (FUNC_0(&VAR_6->oid, VAR_4))
   return VAR_6;
 }
 if (FUNC_0(VAR_4, VAR_3->empty_tree))
  return &VAR_2;
 return ((void*)0);
}
