
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_ior {TYPE_2__* func; } ;
struct TYPE_3__ {int hz; } ;
struct nvkm_head {TYPE_1__ asy; } ;
struct nv50_disp {int dummy; } ;
struct TYPE_4__ {int (* war_3 ) (struct nvkm_ior*) ;} ;


 int FUNC_0 (struct nvkm_head*,char*) ;
 int FUNC_1 (struct nvkm_head*,struct nvkm_ior*,int,int) ;
 struct nvkm_ior* FUNC_2 (struct nvkm_head*) ;
 int FUNC_3 (struct nvkm_ior*) ;

void
FUNC_4(struct nv50_disp *VAR_0, struct nvkm_head *VAR_1)
{
 struct nvkm_ior *VAR_2;


 FUNC_0(VAR_1, "supervisor 3.0");
 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2)
  return;


 FUNC_1(VAR_1, VAR_2, 1, VAR_1->asy.hz / 1000);


 if (VAR_2->func->war_3)
  VAR_2->func->war_3(VAR_2);
}
