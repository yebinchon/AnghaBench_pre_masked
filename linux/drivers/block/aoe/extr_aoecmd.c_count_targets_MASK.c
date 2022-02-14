
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aoedev {int ntargets; TYPE_1__** targets; } ;
struct TYPE_2__ {scalar_t__ taint; } ;



__attribute__((used)) static int
FUNC_0(struct aoedev *VAR_0, int *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = VAR_3 = 0; VAR_2 < VAR_0->ntargets && VAR_0->targets[VAR_2]; ++VAR_2)
  if (VAR_0->targets[VAR_2]->taint == 0)
   VAR_3++;

 if (VAR_1)
  *VAR_1 = VAR_3;
 return VAR_2;
}
