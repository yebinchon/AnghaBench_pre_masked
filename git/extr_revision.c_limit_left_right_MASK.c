
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rev_info {scalar_t__ right_only; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct commit_list *VAR_2, struct rev_info *VAR_3)
{
 struct commit_list *VAR_4;

 for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next) {
  struct commit *VAR_5 = VAR_4->item;

  if (VAR_3->right_only) {
   if (VAR_5->object.flags & VAR_1)
    VAR_5->object.flags |= VAR_0;
  } else
   if (!(VAR_5->object.flags & VAR_1))
    VAR_5->object.flags |= VAR_0;
 }
}
