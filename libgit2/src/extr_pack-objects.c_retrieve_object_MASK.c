
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct walk_object {int id; } ;
struct TYPE_4__ {int walk_objects; } ;
typedef TYPE_1__ git_packbuilder ;
typedef int git_oid ;


 struct walk_object* FUNC_0 (int ,int const*) ;
 int FUNC_1 (int ,int *,struct walk_object*) ;
 int FUNC_2 (struct walk_object**,TYPE_1__*,int const*) ;

__attribute__((used)) static int FUNC_3(struct walk_object **VAR_0, git_packbuilder *VAR_1, const git_oid *VAR_2)
{
 struct walk_object *VAR_3;
 int VAR_4;

 if ((VAR_3 = FUNC_0(VAR_1->walk_objects, VAR_2)) == ((void*)0)) {
  if ((VAR_4 = FUNC_2(&VAR_3, VAR_1, VAR_2)) < 0)
   return VAR_4;

  if ((VAR_4 = FUNC_1(VAR_1->walk_objects, &VAR_3->id, VAR_3)) < 0)
   return VAR_4;
 }

 *VAR_0 = VAR_3;
 return 0;
}
