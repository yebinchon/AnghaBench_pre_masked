
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {TYPE_3__* ior; } ;
struct nvkm_dp {int aux; TYPE_4__ outp; } ;
struct lt_state {struct nvkm_dp* dp; } ;
struct TYPE_7__ {TYPE_2__* func; } ;
struct TYPE_5__ {int (* pattern ) (TYPE_3__*,int ) ;} ;
struct TYPE_6__ {TYPE_1__ dp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,char*,int ) ;
 int FUNC_1 (int ,int ,int *,int) ;
 int FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_4(struct lt_state *VAR_2, u8 VAR_3)
{
 struct nvkm_dp *VAR_4 = VAR_2->dp;
 u8 VAR_5;

 FUNC_0(&VAR_4->outp, "training pattern %d", VAR_3);
 VAR_4->outp.ior->func->dp.pattern(VAR_4->outp.ior, VAR_3);

 FUNC_1(VAR_4->aux, VAR_0, &VAR_5, 1);
 VAR_5 &= ~VAR_1;
 VAR_5 |= VAR_3;
 FUNC_2(VAR_4->aux, VAR_0, &VAR_5, 1);
}
