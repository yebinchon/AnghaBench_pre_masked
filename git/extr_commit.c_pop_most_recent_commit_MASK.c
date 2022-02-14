
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct commit_list {struct commit_list* next; struct commit* item; } ;
struct TYPE_2__ {unsigned int flags; } ;
struct commit {TYPE_1__ object; struct commit_list* parents; } ;


 int FUNC_0 (struct commit*,struct commit_list**) ;
 int FUNC_1 (struct commit*) ;
 struct commit* FUNC_2 (struct commit_list**) ;

struct commit *FUNC_3(struct commit_list **VAR_0,
          unsigned int VAR_1)
{
 struct commit *VAR_2 = FUNC_2(VAR_0);
 struct commit_list *VAR_3 = VAR_2->parents;

 while (VAR_3) {
  struct commit *VAR_4 = VAR_3->item;
  if (!FUNC_1(VAR_4) && !(VAR_4->object.flags & VAR_1)) {
   VAR_4->object.flags |= VAR_1;
   FUNC_0(VAR_4, VAR_0);
  }
  VAR_3 = VAR_3->next;
 }
 return VAR_2;
}
