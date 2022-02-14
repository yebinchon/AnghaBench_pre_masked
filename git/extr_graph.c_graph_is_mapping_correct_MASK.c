
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct git_graph {int mapping_size; int* mapping; } ;



__attribute__((used)) static int FUNC_0(struct git_graph *VAR_0)
{
 int VAR_1;







 for (VAR_1 = 0; VAR_1 < VAR_0->mapping_size; VAR_1++) {
  int VAR_2 = VAR_0->mapping[VAR_1];
  if (VAR_2 < 0)
   continue;
  if (VAR_2 == (VAR_1 / 2))
   continue;
  return 0;
 }

 return 1;
}
