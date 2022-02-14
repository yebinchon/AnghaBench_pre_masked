
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvkm_outp {int dummy; } ;
struct TYPE_8__ {TYPE_3__* ior; } ;
struct TYPE_5__ {int done; } ;
struct nvkm_dp {TYPE_4__ outp; TYPE_1__ lt; } ;
struct TYPE_6__ {scalar_t__ nr; } ;
struct TYPE_7__ {TYPE_2__ dp; } ;


 int FUNC_0 (int *,int ) ;
 struct nvkm_dp* FUNC_1 (struct nvkm_outp*) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_outp *VAR_0)
{
 struct nvkm_dp *VAR_1 = FUNC_1(VAR_0);


 FUNC_0(&VAR_1->lt.done, 0);
 VAR_1->outp.ior->dp.nr = 0;
}
