
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_outp {TYPE_2__* func; } ;
struct TYPE_3__ {int head; struct nvkm_outp* outp; } ;
struct nvkm_ior {TYPE_1__ arm; } ;
struct nvkm_head {int id; } ;
struct nv50_disp {int dummy; } ;
struct TYPE_4__ {int (* disable ) (struct nvkm_outp*,struct nvkm_ior*) ;} ;


 int FUNC_0 (struct nvkm_head*,char*) ;
 int FUNC_1 (struct nvkm_head*,struct nvkm_ior*,int) ;
 struct nvkm_ior* FUNC_2 (struct nvkm_head*) ;
 int FUNC_3 (struct nvkm_outp*,struct nvkm_ior*) ;

void
FUNC_4(struct nv50_disp *VAR_0, struct nvkm_head *VAR_1)
{
 struct nvkm_outp *VAR_2;
 struct nvkm_ior *VAR_3;


 FUNC_0(VAR_1, "supervisor 2.0");
 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3)
  return;


 FUNC_1(VAR_1, VAR_3, 2);




 if (VAR_3->arm.head == (1 << VAR_1->id)) {
  if ((VAR_2 = VAR_3->arm.outp) && VAR_2->func->disable)
   VAR_2->func->disable(VAR_2, VAR_3);
 }
}
