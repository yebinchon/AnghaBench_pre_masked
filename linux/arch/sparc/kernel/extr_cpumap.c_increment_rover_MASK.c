
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_tree {struct cpuinfo_node* nodes; } ;
struct cpuinfo_node {int level; scalar_t__ rover; scalar_t__ child_end; scalar_t__ child_start; size_t parent_index; } ;


 int const VAR_0 ;

__attribute__((used)) static void FUNC_0(struct cpuinfo_tree *VAR_1, int VAR_2,
                            int VAR_3, const int *VAR_4)
{
 struct cpuinfo_node *VAR_5 = &VAR_1->nodes[VAR_2];
 int VAR_6, VAR_7;

 VAR_6 = VAR_1->nodes[VAR_3].level;
 for (VAR_7 = VAR_5->level; VAR_7 >= VAR_6; VAR_7--) {
  VAR_5->rover++;
  if (VAR_5->rover <= VAR_5->child_end)
   return;

  VAR_5->rover = VAR_5->child_start;

  if ((VAR_7 == VAR_6) ||
      !(VAR_4[VAR_7] & VAR_0))
   return;

  VAR_5 = &VAR_1->nodes[VAR_5->parent_index];
 }
}
