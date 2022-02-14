
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct topo_node {scalar_t__ type; int cpu_count; scalar_t__ subtype; int cpuset; } ;
struct cpu_group {int cg_count; scalar_t__ cg_level; int cg_children; struct cpu_group* cg_child; struct cpu_group* cg_parent; int cg_flags; int cg_mask; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct cpu_group* FUNC_3 (int) ;
 struct topo_node* FUNC_4 (struct topo_node*,struct topo_node*) ;
 struct topo_node* FUNC_5 (struct topo_node*,struct topo_node*) ;

__attribute__((used)) static void
FUNC_6(struct topo_node *VAR_6, struct cpu_group *VAR_7)
{
 struct topo_node *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 FUNC_2(VAR_6->type == VAR_5 || VAR_6->type == VAR_2 ||
     VAR_6->type == VAR_4,
     ("x86topo_add_sched_group: bad type: %u", VAR_6->type));
 FUNC_1(&VAR_6->cpuset, &VAR_7->cg_mask);
 VAR_7->cg_count = VAR_6->cpu_count;
 if (VAR_6->type == VAR_5)
  VAR_7->cg_level = VAR_1;
 else
  VAR_7->cg_level = VAR_6->subtype;






 VAR_10 = 0;
 VAR_8 = VAR_6;
 while (VAR_8 != ((void*)0)) {
  if (VAR_8->type != VAR_3) {
   VAR_8 = FUNC_4(VAR_6, VAR_8);
   continue;
  }

  VAR_10++;
  VAR_8 = FUNC_5(VAR_6, VAR_8);
 }

 if (VAR_7->cg_level != VAR_1 &&
     VAR_6->cpu_count > 1 && VAR_10 < 2)
  VAR_7->cg_flags = VAR_0;
 VAR_9 = 0;
 VAR_8 = VAR_6;
 while (VAR_8 != ((void*)0)) {
  if ((VAR_8->type != VAR_4 &&
      VAR_8->type != VAR_2) ||
      (VAR_6->type != VAR_5 &&
      FUNC_0(&VAR_8->cpuset, &VAR_6->cpuset) == 0)) {
   VAR_8 = FUNC_4(VAR_6, VAR_8);
   continue;
  }
  VAR_9++;
  VAR_8 = FUNC_5(VAR_6, VAR_8);
 }

 VAR_7->cg_child = FUNC_3(VAR_9);
 VAR_7->cg_children = VAR_9;





 VAR_8 = VAR_6;
 VAR_11 = 0;
 while (VAR_8 != ((void*)0)) {
  if ((VAR_8->type != VAR_4 &&
      VAR_8->type != VAR_2) ||
      (VAR_6->type != VAR_5 &&
      FUNC_0(&VAR_8->cpuset, &VAR_6->cpuset) == 0)) {
   VAR_8 = FUNC_4(VAR_6, VAR_8);
   continue;
  }
  VAR_7->cg_child[VAR_11].cg_parent = VAR_7;
  FUNC_6(VAR_8, &VAR_7->cg_child[VAR_11]);
  VAR_11++;
  VAR_8 = FUNC_5(VAR_6, VAR_8);
 }
}
