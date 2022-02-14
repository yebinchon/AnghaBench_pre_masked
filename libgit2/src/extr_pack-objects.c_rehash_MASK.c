
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; } ;
typedef TYPE_1__ git_pobject ;
struct TYPE_6__ {size_t nr_objects; int object_ix; TYPE_1__* object_list; } ;
typedef TYPE_2__ git_packbuilder ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(git_packbuilder *VAR_0)
{
 git_pobject *VAR_1;
 size_t VAR_2;

 FUNC_0(VAR_0->object_ix);

 for (VAR_2 = 0, VAR_1 = VAR_0->object_list; VAR_2 < VAR_0->nr_objects; VAR_2++, VAR_1++) {
  if (FUNC_1(VAR_0->object_ix, &VAR_1->id, VAR_1) < 0)
   return -1;
 }

 return 0;
}
