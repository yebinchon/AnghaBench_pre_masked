
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct topo_walk_info {int explore_queue; int author_date; } ;
struct rev_info {scalar_t__ sort_order; int max_age; struct topo_walk_info* topo_walk_info; } ;
struct commit_list {int item; struct commit_list* next; } ;
struct TYPE_2__ {int flags; } ;
struct commit {int date; struct commit_list* parents; TYPE_1__ object; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct commit*) ;
 scalar_t__ FUNC_1 (struct commit*,int) ;
 struct commit* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct rev_info*,struct commit*,int *,int *) ;
 int FUNC_4 (int *,struct commit*) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct rev_info *VAR_3)
{
 struct topo_walk_info *VAR_4 = VAR_3->topo_walk_info;
 struct commit_list *VAR_5;
 struct commit *VAR_6 = FUNC_2(&VAR_4->explore_queue);

 if (!VAR_6)
  return;

 if (FUNC_1(VAR_6, 1) < 0)
  return;

 if (VAR_3->sort_order == VAR_0)
  FUNC_4(&VAR_4->author_date, VAR_6);

 if (VAR_3->max_age != -1 && (VAR_6->date < VAR_3->max_age))
  VAR_6->object.flags |= VAR_2;

 if (FUNC_3(VAR_3, VAR_6, ((void*)0), ((void*)0)) < 0)
  return;

 if (VAR_6->object.flags & VAR_2)
  FUNC_0(VAR_6);

 for (VAR_5 = VAR_6->parents; VAR_5; VAR_5 = VAR_5->next)
  FUNC_5(&VAR_4->explore_queue, VAR_5->item, VAR_1);
}
