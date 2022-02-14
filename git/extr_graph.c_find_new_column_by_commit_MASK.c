
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct git_graph {int num_new_columns; struct column* new_columns; } ;
struct commit {int dummy; } ;
struct column {struct commit* commit; } ;



__attribute__((used)) static struct column *FUNC_0(struct git_graph *VAR_0,
      struct commit *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->num_new_columns; VAR_2++) {
  if (VAR_0->new_columns[VAR_2].commit == VAR_1)
   return &VAR_0->new_columns[VAR_2];
 }
 return ((void*)0);
}
