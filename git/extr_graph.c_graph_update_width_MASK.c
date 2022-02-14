
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct git_graph {int num_columns; int num_parents; int width; } ;



__attribute__((used)) static void FUNC_0(struct git_graph *VAR_0,
          int VAR_1)
{
 int VAR_2 = VAR_0->num_columns + VAR_0->num_parents;





 if (VAR_0->num_parents < 1)
  VAR_2++;






 if (VAR_1)
  VAR_2--;




 VAR_0->width = VAR_2 * 2;
}
