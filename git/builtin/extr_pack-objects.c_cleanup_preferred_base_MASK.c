
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct pbase_tree* tree_data; } ;
struct pbase_tree {TYPE_1__ pcache; struct pbase_tree* next; } ;
struct TYPE_7__ {struct pbase_tree* tree_data; } ;


 unsigned int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct pbase_tree*) ;
 struct pbase_tree* VAR_3 ;
 TYPE_2__** VAR_4 ;

__attribute__((used)) static void FUNC_3(void)
{
 struct pbase_tree *VAR_5;
 unsigned VAR_6;

 VAR_5 = VAR_3;
 VAR_3 = ((void*)0);
 while (VAR_5) {
  struct pbase_tree *VAR_7 = VAR_5;
  VAR_5 = VAR_7->next;
  FUNC_2(VAR_7->pcache.tree_data);
  FUNC_2(VAR_7);
 }

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4); VAR_6++) {
  if (!VAR_4[VAR_6])
   continue;
  FUNC_2(VAR_4[VAR_6]->tree_data);
  FUNC_1(VAR_4[VAR_6]);
 }

 FUNC_1(VAR_0);
 VAR_2 = VAR_1 = 0;
}
