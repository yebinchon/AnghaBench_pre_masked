
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

__attribute__((used)) static int FUNC_0(struct commit *VAR_1)
{
 struct commit_list *VAR_2;
 int VAR_3;

 for (VAR_3 = 0, VAR_2 = VAR_1->parents; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_2->item->object.flags & VAR_0)
   continue;
  VAR_3++;
 }
 return VAR_3;
}
