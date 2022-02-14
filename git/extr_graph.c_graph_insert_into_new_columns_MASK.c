
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct git_graph {int num_new_columns; int* mapping; TYPE_1__* new_columns; } ;
struct commit {int dummy; } ;
struct TYPE_2__ {int color; struct commit* commit; } ;


 int FUNC_0 (struct git_graph*,struct commit*) ;

__attribute__((used)) static void FUNC_1(struct git_graph *VAR_0,
       struct commit *VAR_1,
       int *VAR_2)
{
 int VAR_3;





 for (VAR_3 = 0; VAR_3 < VAR_0->num_new_columns; VAR_3++) {
  if (VAR_0->new_columns[VAR_3].commit == VAR_1) {
   VAR_0->mapping[*VAR_2] = VAR_3;
   *VAR_2 += 2;
   return;
  }
 }




 VAR_0->new_columns[VAR_0->num_new_columns].commit = VAR_1;
 VAR_0->new_columns[VAR_0->num_new_columns].color = FUNC_0(VAR_0, VAR_1);
 VAR_0->mapping[*VAR_2] = VAR_0->num_new_columns;
 *VAR_2 += 2;
 VAR_0->num_new_columns++;
}
