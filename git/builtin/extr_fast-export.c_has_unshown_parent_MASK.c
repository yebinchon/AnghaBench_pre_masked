
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct commit_list {TYPE_2__* item; struct commit_list* next; } ;
struct commit {struct commit_list* parents; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct commit *VAR_2)
{
 struct commit_list *VAR_3;

 for (VAR_3 = VAR_2->parents; VAR_3; VAR_3 = VAR_3->next)
  if (!(VAR_3->item->object.flags & VAR_0) &&
      !(VAR_3->item->object.flags & VAR_1))
   return 1;
 return 0;
}
