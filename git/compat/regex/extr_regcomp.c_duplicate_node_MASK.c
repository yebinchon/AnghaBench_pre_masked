
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* org_indices; TYPE_3__* nodes; } ;
typedef TYPE_1__ re_dfa_t ;
struct TYPE_6__ {unsigned int constraint; int duplicated; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__) ;

__attribute__((used)) static int
FUNC_2 (re_dfa_t *VAR_0, int VAR_1, unsigned int VAR_2)
{
  int VAR_3 = FUNC_1 (VAR_0, VAR_0->nodes[VAR_1]);
  if (FUNC_0 (VAR_3 != -1, 1))
    {
      VAR_0->nodes[VAR_3].constraint = VAR_2;
      VAR_0->nodes[VAR_3].constraint |= VAR_0->nodes[VAR_1].constraint;
      VAR_0->nodes[VAR_3].duplicated = 1;


      VAR_0->org_indices[VAR_3] = VAR_1;
    }
  return VAR_3;
}
