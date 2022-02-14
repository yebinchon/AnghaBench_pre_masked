
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct commit_list {struct commit_list* next; struct commit* item; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;

__attribute__((used)) static struct commit *FUNC_0(struct commit_list *VAR_1)
{
 while (VAR_1) {
  struct commit *VAR_2 = VAR_1->item;
  VAR_1 = VAR_1->next;
  if (VAR_2->object.flags & VAR_0)
   continue;
  return VAR_2;
 }
 return ((void*)0);
}
