
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int oid; } ;
struct tree {TYPE_1__ object; } ;
struct TYPE_8__ {int nr; TYPE_3__* rev; } ;
struct rev_info {int repo; TYPE_4__ cmdline; scalar_t__ edge_hint_aggressive; struct commit_list* commits; } ;
struct oidset {int dummy; } ;
struct object {scalar_t__ type; int flags; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_6__ {int flags; } ;
struct commit {TYPE_2__ object; } ;
typedef int (* show_edge_fn ) (struct commit*) ;
struct TYPE_7__ {struct object* item; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct commit*,struct rev_info*,int (*) (struct commit*),struct oidset*) ;
 struct tree* FUNC_1 (struct commit*) ;
 int FUNC_2 (struct commit*,struct rev_info*,int (*) (struct commit*)) ;
 int FUNC_3 (int ,struct tree*) ;
 int FUNC_4 (int ,struct oidset*) ;
 int FUNC_5 (struct oidset*) ;
 int FUNC_6 (struct oidset*,int) ;
 int FUNC_7 (struct oidset*,int *) ;

void FUNC_8(struct rev_info *VAR_3,
         show_edge_fn VAR_4,
         int VAR_5)
{
 struct commit_list *VAR_6;
 int VAR_7;

 if (VAR_5) {
  struct oidset VAR_8;
  FUNC_6(&VAR_8, 16);

  for (VAR_6 = VAR_3->commits; VAR_6; VAR_6 = VAR_6->next) {
   struct commit *VAR_9 = VAR_6->item;
   struct tree *VAR_10 = FUNC_1(VAR_9);

   if (VAR_9->object.flags & VAR_2)
    VAR_10->object.flags |= VAR_2;

   FUNC_7(&VAR_8, &VAR_10->object.oid);
   FUNC_0(VAR_9, VAR_3, VAR_4, &VAR_8);
  }

  FUNC_4(VAR_3->repo, &VAR_8);
  FUNC_5(&VAR_8);
 } else {
  for (VAR_6 = VAR_3->commits; VAR_6; VAR_6 = VAR_6->next) {
   struct commit *VAR_11 = VAR_6->item;
   if (VAR_11->object.flags & VAR_2) {
    FUNC_3(VAR_3->repo,
       FUNC_1(VAR_11));
    if (VAR_3->edge_hint_aggressive && !(VAR_11->object.flags & VAR_1)) {
     VAR_11->object.flags |= VAR_1;
     VAR_4(VAR_11);
    }
    continue;
   }
   FUNC_2(VAR_11, VAR_3, VAR_4);
  }
 }

 if (VAR_3->edge_hint_aggressive) {
  for (VAR_7 = 0; VAR_7 < VAR_3->cmdline.nr; VAR_7++) {
   struct object *VAR_12 = VAR_3->cmdline.rev[VAR_7].item;
   struct commit *VAR_13 = (struct commit *)VAR_12;
   if (VAR_12->type != VAR_0 || !(VAR_12->flags & VAR_2))
    continue;
   FUNC_3(VAR_3->repo,
      FUNC_1(VAR_13));
   if (!(VAR_12->flags & VAR_1)) {
    VAR_12->flags |= VAR_1;
    VAR_4(VAR_13);
   }
  }
 }
}
