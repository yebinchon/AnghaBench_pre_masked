
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nodes_len; int* org_indices; TYPE_1__* nodes; } ;
typedef TYPE_2__ re_dfa_t ;
struct TYPE_4__ {unsigned int constraint; scalar_t__ duplicated; } ;



__attribute__((used)) static int
FUNC_0 (const re_dfa_t *VAR_0, int VAR_1,
   unsigned int VAR_2)
{
  int VAR_3;
  for (VAR_3 = VAR_0->nodes_len - 1; VAR_0->nodes[VAR_3].duplicated && VAR_3 > 0; --VAR_3)
    {
      if (VAR_1 == VAR_0->org_indices[VAR_3]
   && VAR_2 == VAR_0->nodes[VAR_3].constraint)
 return VAR_3;
    }
  return -1;
}
