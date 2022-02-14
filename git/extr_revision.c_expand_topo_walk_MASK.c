
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct topo_walk_info {scalar_t__ min_generation; int topo_queue; int indegree; } ;
struct rev_info {scalar_t__ first_parent_only; int ignore_missing_links; struct topo_walk_info* topo_walk_info; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_2__ {int flags; int oid; } ;
struct commit {scalar_t__ generation; TYPE_1__ object; struct commit_list* parents; } ;


 int VAR_0 ;
 int FUNC_0 (struct rev_info*,scalar_t__) ;
 int FUNC_1 (char*,int ) ;
 int* FUNC_2 (int *,struct commit*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct commit*,int) ;
 int FUNC_5 (int *,struct commit*) ;
 scalar_t__ FUNC_6 (struct rev_info*,struct commit*,int *,int *) ;

__attribute__((used)) static void FUNC_7(struct rev_info *VAR_1, struct commit *VAR_2)
{
 struct commit_list *VAR_3;
 struct topo_walk_info *VAR_4 = VAR_1->topo_walk_info;
 if (FUNC_6(VAR_1, VAR_2, ((void*)0), ((void*)0)) < 0) {
  if (!VAR_1->ignore_missing_links)
   FUNC_1("Failed to traverse parents of commit %s",
       FUNC_3(&VAR_2->object.oid));
 }

 for (VAR_3 = VAR_2->parents; VAR_3; VAR_3 = VAR_3->next) {
  struct commit *VAR_5 = VAR_3->item;
  int *VAR_6;

  if (VAR_5->object.flags & VAR_0)
   continue;

  if (FUNC_4(VAR_5, 1) < 0)
   continue;

  if (VAR_5->generation < VAR_4->min_generation) {
   VAR_4->min_generation = VAR_5->generation;
   FUNC_0(VAR_1, VAR_4->min_generation);
  }

  VAR_6 = FUNC_2(&VAR_4->indegree, VAR_5);

  (*VAR_6)--;
  if (*VAR_6 == 1)
   FUNC_5(&VAR_4->topo_queue, VAR_5);

  if (VAR_1->first_parent_only)
   return;
 }
}
