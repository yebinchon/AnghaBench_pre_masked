
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_5__ {int oid; } ;
struct commit {TYPE_2__ object; TYPE_1__* parents; } ;
struct TYPE_6__ {struct object_id* empty_tree; } ;
struct TYPE_4__ {struct commit* item; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 struct object_id* FUNC_2 (struct commit*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct object_id const*,struct object_id*) ;
 scalar_t__ FUNC_5 (struct commit*) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static int FUNC_6(struct commit *VAR_1)
{
 const struct object_id *VAR_2;

 if (FUNC_5(VAR_1))
  return FUNC_1(FUNC_0("could not parse commit %s"),
        FUNC_3(&VAR_1->object.oid));
 if (VAR_1->parents) {
  struct commit *VAR_3 = VAR_1->parents->item;
  if (FUNC_5(VAR_3))
   return FUNC_1(FUNC_0("could not parse parent commit %s"),
    FUNC_3(&VAR_3->object.oid));
  VAR_2 = FUNC_2(VAR_3);
 } else {
  VAR_2 = VAR_0->empty_tree;
 }

 return FUNC_4(VAR_2, FUNC_2(VAR_1));
}
