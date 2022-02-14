
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; struct commit_list* parents; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct commit *VAR_2)
{
 struct commit_list *VAR_3;
 int VAR_4 = 0;

 for (VAR_3 = VAR_2->parents; VAR_3; VAR_3 = VAR_3->next) {
  struct commit *VAR_5 = VAR_3->item;
  if (!VAR_5->parents && (VAR_5->object.flags & VAR_1)) {
   VAR_5->object.flags |= VAR_0;
   VAR_4++;
  }
 }

 return VAR_4;
}
