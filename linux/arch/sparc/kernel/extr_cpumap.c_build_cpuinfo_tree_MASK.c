
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmp_level ;
struct cpuinfo_tree {int total_nodes; struct cpuinfo_node* nodes; TYPE_1__* level; } ;
struct cpuinfo_node {int id; int level; int num_cpus; int parent_index; int child_start; int child_end; int rover; } ;
struct cpuinfo_level {int dummy; } ;
struct TYPE_2__ {int start_index; int end_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cpuinfo_level*) ;
 int FUNC_4 (struct cpuinfo_tree*) ;
 struct cpuinfo_tree* FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__**,struct cpuinfo_level*,int) ;
 int VAR_5 ;
 int FUNC_7 () ;
 int FUNC_8 (struct cpuinfo_tree*,int ,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static struct cpuinfo_tree *FUNC_10(void)
{
 struct cpuinfo_tree *VAR_6;
 struct cpuinfo_node *VAR_7;
 struct cpuinfo_level VAR_8[VAR_0];
 int VAR_9[VAR_0];
 int VAR_10[VAR_0];
 int VAR_11[VAR_0];
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_12 = FUNC_3(VAR_8);

 VAR_6 = FUNC_5(FUNC_8(VAR_6, VAR_5, VAR_12), VAR_3);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->total_nodes = VAR_12;
 FUNC_6(&VAR_6->level, VAR_8, sizeof(VAR_8));

 VAR_15 = VAR_14 = FUNC_2(VAR_4);


 for (VAR_17 = VAR_1; VAR_17 >= VAR_2; VAR_17--) {
  VAR_12 = VAR_6->level[VAR_17].start_index;

  VAR_10[VAR_17] = VAR_12;
  VAR_7 = &VAR_6->nodes[VAR_12];

  VAR_13 = FUNC_1(VAR_14, VAR_17);
  if (FUNC_9(VAR_13 < 0)) {
   FUNC_4(VAR_6);
   return ((void*)0);
  }
  VAR_7->id = VAR_13;
  VAR_7->level = VAR_17;
  VAR_7->num_cpus = 1;

  VAR_7->parent_index = (VAR_17 > VAR_2)
      ? VAR_6->level[VAR_17 - 1].start_index : -1;

  VAR_7->child_start = VAR_7->child_end = VAR_7->rover =
      (VAR_17 == VAR_1)
      ? VAR_14 : VAR_6->level[VAR_17 + 1].start_index;

  VAR_11[VAR_17] = VAR_7->id;
  VAR_9[VAR_17] = 1;
 }

 for (VAR_16 = (FUNC_7() - 1); VAR_16 >= 0; VAR_16--) {
  if (FUNC_0(VAR_16))
   break;
 }

 while (++VAR_14 <= VAR_16) {
  if (!FUNC_0(VAR_14))
   continue;

  for (VAR_17 = VAR_1; VAR_17 >= VAR_2;
       VAR_17--) {
   VAR_13 = FUNC_1(VAR_14, VAR_17);
   if (FUNC_9(VAR_13 < 0)) {
    FUNC_4(VAR_6);
    return ((void*)0);
   }

   if ((VAR_13 != VAR_11[VAR_17]) || (VAR_14 == VAR_16)) {
    VAR_11[VAR_17] = VAR_13;
    VAR_7 = &VAR_6->nodes[VAR_10[VAR_17]];
    VAR_7->num_cpus = VAR_9[VAR_17];
    VAR_9[VAR_17] = 1;

    if (VAR_14 == VAR_16)
     VAR_7->num_cpus++;


    if (VAR_17 == VAR_2)
     VAR_7->parent_index = -1;
    else
     VAR_7->parent_index =
         VAR_10[VAR_17 - 1];

    if (VAR_17 == VAR_1) {
     VAR_7->child_end =
         (VAR_14 == VAR_16) ? VAR_14 : VAR_15;
    } else {
     VAR_7->child_end =
         VAR_10[VAR_17 + 1] - 1;
    }


    VAR_12 = ++VAR_10[VAR_17];
    if (VAR_12 <= VAR_6->level[VAR_17].end_index) {
     VAR_7 = &VAR_6->nodes[VAR_12];
     VAR_7->id = VAR_13;
     VAR_7->level = VAR_17;


     VAR_7->child_start = VAR_7->child_end =
     VAR_7->rover =
         (VAR_17 == VAR_1)
         ? VAR_14 : VAR_10[VAR_17 + 1];
    }
   } else
    VAR_9[VAR_17]++;
  }
  VAR_15 = VAR_14;
 }

 return VAR_6;
}
