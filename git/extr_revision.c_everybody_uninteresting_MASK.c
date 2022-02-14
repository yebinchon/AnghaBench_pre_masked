
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct commit_list {struct commit_list* next; struct commit* item; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct commit_list *VAR_1,
       struct commit **VAR_2)
{
 struct commit_list *VAR_3 = VAR_1;

 if (*VAR_2) {
  struct commit *VAR_4 = *VAR_2;
  if (!(VAR_4->object.flags & VAR_0))
   return 0;
 }

 while (VAR_3) {
  struct commit *VAR_5 = VAR_3->item;
  VAR_3 = VAR_3->next;
  if (VAR_5->object.flags & VAR_0)
   continue;

  *VAR_2 = VAR_5;
  return 0;
 }
 return 1;
}
