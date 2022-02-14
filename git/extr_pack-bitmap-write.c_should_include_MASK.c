
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct object {int dummy; } ;
struct commit_list {struct commit_list* next; TYPE_2__* item; } ;
struct commit {struct commit_list* parents; } ;
struct bitmap {int dummy; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 int VAR_0 ;
 int FUNC_0 (struct bitmap*,struct commit*) ;
 int FUNC_1 (struct object*) ;

__attribute__((used)) static int
FUNC_2(struct commit *VAR_1, void *VAR_2)
{
 struct bitmap *VAR_3 = VAR_2;

 if (!FUNC_0(VAR_3, VAR_1)) {
  struct commit_list *VAR_4 = VAR_1->parents;

  FUNC_1((struct object *)VAR_1);

  while (VAR_4) {
   VAR_4->item->object.flags |= VAR_0;
   FUNC_1((struct object *)VAR_4->item);
   VAR_4 = VAR_4->next;
  }

  return 0;
 }

 return 1;
}
