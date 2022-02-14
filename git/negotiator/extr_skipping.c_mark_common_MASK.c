
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct data {int non_common_revs; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_2__ {int flags; int parsed; } ;
struct commit {TYPE_1__ object; struct commit_list* parents; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct data *VAR_3, struct commit *VAR_4)
{
 struct commit_list *VAR_5;

 if (VAR_4->object.flags & VAR_0)
  return;
 VAR_4->object.flags |= VAR_0;
 if (!(VAR_4->object.flags & VAR_1))
  VAR_3->non_common_revs--;

 if (!VAR_4->object.parsed)
  return;
 for (VAR_5 = VAR_4->parents; VAR_5; VAR_5 = VAR_5->next) {
  if (VAR_5->item->object.flags & VAR_2)
   FUNC_0(VAR_3, VAR_5->item);
 }
}
