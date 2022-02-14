
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct commit_stack {int dummy; } ;
struct commit_list {int item; struct commit_list* next; } ;
struct TYPE_2__ {int flags; } ;
struct commit {struct commit_list* parents; TYPE_1__ object; } ;


 int VAR_0 ;
 int FUNC_0 (struct commit_stack*,int ) ;

__attribute__((used)) static void FUNC_1(struct commit *VAR_1,
       struct commit_stack *VAR_2)
{
 struct commit_list *VAR_3;

 if (VAR_1->object.flags & VAR_0)
  return;
 VAR_1->object.flags |= VAR_0;
 for (VAR_3 = VAR_1->parents; VAR_3; VAR_3 = VAR_3->next)
  FUNC_0(VAR_2, VAR_3->item);
}
