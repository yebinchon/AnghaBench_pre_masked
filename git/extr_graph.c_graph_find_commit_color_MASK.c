
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct git_graph {int num_columns; TYPE_1__* columns; } ;
struct commit {int dummy; } ;
struct TYPE_2__ {unsigned short color; struct commit const* commit; } ;


 unsigned short FUNC_0 (struct git_graph const*) ;

__attribute__((used)) static unsigned short FUNC_1(const struct git_graph *VAR_0,
           const struct commit *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->num_columns; VAR_2++) {
  if (VAR_0->columns[VAR_2].commit == VAR_1)
   return VAR_0->columns[VAR_2].color;
 }
 return FUNC_0(VAR_0);
}
