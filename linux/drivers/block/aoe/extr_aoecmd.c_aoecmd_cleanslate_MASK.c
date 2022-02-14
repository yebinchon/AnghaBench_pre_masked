
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aoetgt {int dummy; } ;
struct aoedev {int ntargets; struct aoetgt** targets; scalar_t__ maxbcnt; int rttdev; int rttavg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aoetgt*) ;

void
FUNC_1(struct aoedev *VAR_2)
{
 struct aoetgt **VAR_3, **VAR_4;

 VAR_2->rttavg = VAR_0;
 VAR_2->rttdev = VAR_1;
 VAR_2->maxbcnt = 0;

 VAR_3 = VAR_2->targets;
 VAR_4 = VAR_3 + VAR_2->ntargets;
 for (; VAR_3 < VAR_4 && *VAR_3; VAR_3++)
  FUNC_0(*VAR_3);
}
