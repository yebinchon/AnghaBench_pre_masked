
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct walk_object {int id; } ;
struct TYPE_3__ {int object_pool; } ;
typedef TYPE_1__ git_packbuilder ;
typedef int git_oid ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int const*) ;
 struct walk_object* FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(struct walk_object **VAR_0, git_packbuilder *VAR_1, const git_oid *VAR_2)
{
 struct walk_object *VAR_3;

 VAR_3 = FUNC_2(&VAR_1->object_pool, 1);
 if (!VAR_3) {
  FUNC_0();
  return -1;
 }

 FUNC_1(&VAR_3->id, VAR_2);

 *VAR_0 = VAR_3;
 return 0;
}
