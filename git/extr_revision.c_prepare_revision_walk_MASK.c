
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ name; } ;
struct TYPE_6__ {char* name; } ;
struct TYPE_8__ {int * objects; scalar_t__ alloc; scalar_t__ nr; } ;
struct rev_info {scalar_t__ no_walk; TYPE_3__ children; scalar_t__ simplify_merges; scalar_t__ line_level_traverse; scalar_t__ topo_order; int sort_order; struct commit_list* commits; scalar_t__ limited; scalar_t__ exclude_promisor_objects; TYPE_2__ treesame; TYPE_4__ pending; } ;
struct object_array_entry {int dummy; } ;
struct object_array {int nr; struct object_array_entry* objects; } ;
struct commit_list {int dummy; } ;
struct TYPE_5__ {int flags; } ;
struct commit {TYPE_1__ object; } ;
typedef int old_pending ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct commit_list** FUNC_0 (struct commit*,struct commit_list**) ;
 int FUNC_1 (struct commit_list**) ;
 int FUNC_2 (int ,struct rev_info*,int ) ;
 struct commit* FUNC_3 (struct rev_info*,struct object_array_entry*) ;
 int FUNC_4 (struct rev_info*) ;
 scalar_t__ FUNC_5 (struct rev_info*) ;
 scalar_t__ FUNC_6 (struct rev_info*) ;
 int FUNC_7 (struct rev_info*) ;
 int VAR_3 ;
 int FUNC_8 (struct object_array*,TYPE_4__*,int) ;
 int FUNC_9 (struct object_array*) ;
 int FUNC_10 (struct rev_info*) ;
 int FUNC_11 (struct rev_info*) ;
 int FUNC_12 (struct commit_list**,int ) ;

int FUNC_13(struct rev_info *VAR_4)
{
 int VAR_5;
 struct object_array VAR_6;
 struct commit_list **VAR_7 = &VAR_4->commits;

 FUNC_8(&VAR_6, &VAR_4->pending, sizeof(VAR_6));
 VAR_4->pending.nr = 0;
 VAR_4->pending.alloc = 0;
 VAR_4->pending.objects = ((void*)0);
 for (VAR_5 = 0; VAR_5 < VAR_6.nr; VAR_5++) {
  struct object_array_entry *VAR_8 = VAR_6.objects + VAR_5;
  struct commit *VAR_9 = FUNC_3(VAR_4, VAR_8);
  if (VAR_9) {
   if (!(VAR_9->object.flags & VAR_2)) {
    VAR_9->object.flags |= VAR_2;
    VAR_7 = FUNC_0(VAR_9, VAR_7);
   }
  }
 }
 FUNC_9(&VAR_6);


 if (VAR_4->simplify_merges ||
     (VAR_4->limited && FUNC_6(VAR_4)))
  VAR_4->treesame.name = "treesame";

 if (VAR_4->exclude_promisor_objects) {
  FUNC_2(VAR_3, VAR_4,
           VAR_0);
 }

 if (VAR_4->no_walk != VAR_1)
  FUNC_1(&VAR_4->commits);
 if (VAR_4->no_walk)
  return 0;
 if (VAR_4->limited) {
  if (FUNC_5(VAR_4) < 0)
   return -1;
  if (VAR_4->topo_order)
   FUNC_12(&VAR_4->commits, VAR_4->sort_order);
 } else if (VAR_4->topo_order)
  FUNC_4(VAR_4);
 if (VAR_4->line_level_traverse)
  FUNC_7(VAR_4);
 if (VAR_4->simplify_merges)
  FUNC_11(VAR_4);
 if (VAR_4->children.name)
  FUNC_10(VAR_4);
 return 0;
}
