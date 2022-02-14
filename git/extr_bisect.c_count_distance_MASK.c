
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct commit_list {struct commit_list* next; struct commit* item; } ;
struct TYPE_2__ {int flags; } ;
struct commit {struct commit_list* parents; TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct commit_list *VAR_3)
{
 int VAR_4 = 0;

 while (VAR_3) {
  struct commit *VAR_5 = VAR_3->item;
  struct commit_list *VAR_6;

  if (VAR_5->object.flags & (VAR_2 | VAR_0))
   break;
  if (!(VAR_5->object.flags & VAR_1))
   VAR_4++;
  VAR_5->object.flags |= VAR_0;
  VAR_6 = VAR_5->parents;
  VAR_3 = VAR_6;
  if (VAR_6) {
   VAR_6 = VAR_6->next;
   while (VAR_6) {
    VAR_4 += FUNC_0(VAR_6);
    VAR_6 = VAR_6->next;
   }
  }
 }

 return VAR_4;
}
