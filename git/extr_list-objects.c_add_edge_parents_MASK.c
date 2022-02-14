
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int oid; } ;
struct tree {TYPE_1__ object; } ;
struct rev_info {scalar_t__ edge_hint; } ;
struct oidset {int dummy; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_4__ {int flags; } ;
struct commit {TYPE_2__ object; struct commit_list* parents; } ;
typedef int (* show_edge_fn ) (struct commit*) ;


 int VAR_0 ;
 int VAR_1 ;
 struct tree* FUNC_0 (struct commit*) ;
 int FUNC_1 (struct oidset*,int *) ;

__attribute__((used)) static void FUNC_2(struct commit *VAR_2,
        struct rev_info *VAR_3,
        show_edge_fn VAR_4,
        struct oidset *VAR_5)
{
 struct commit_list *VAR_6;

 for (VAR_6 = VAR_2->parents; VAR_6; VAR_6 = VAR_6->next) {
  struct commit *VAR_7 = VAR_6->item;
  struct tree *VAR_8 = FUNC_0(VAR_7);

  if (!VAR_8)
   continue;

  FUNC_1(VAR_5, &VAR_8->object.oid);

  if (!(VAR_7->object.flags & VAR_1))
   continue;
  VAR_8->object.flags |= VAR_1;

  if (VAR_3->edge_hint && !(VAR_7->object.flags & VAR_0)) {
   VAR_7->object.flags |= VAR_0;
   VAR_4(VAR_7);
  }
 }
}
