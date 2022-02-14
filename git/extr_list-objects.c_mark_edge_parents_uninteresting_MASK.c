
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rev_info {scalar_t__ edge_hint; int repo; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; struct commit_list* parents; } ;
typedef int (* show_edge_fn ) (struct commit*) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct commit*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct commit *VAR_2,
         struct rev_info *VAR_3,
         show_edge_fn VAR_4)
{
 struct commit_list *VAR_5;

 for (VAR_5 = VAR_2->parents; VAR_5; VAR_5 = VAR_5->next) {
  struct commit *VAR_6 = VAR_5->item;
  if (!(VAR_6->object.flags & VAR_1))
   continue;
  FUNC_1(VAR_3->repo, FUNC_0(VAR_6));
  if (VAR_3->edge_hint && !(VAR_6->object.flags & VAR_0)) {
   VAR_6->object.flags |= VAR_0;
   VAR_4(VAR_6);
  }
 }
}
