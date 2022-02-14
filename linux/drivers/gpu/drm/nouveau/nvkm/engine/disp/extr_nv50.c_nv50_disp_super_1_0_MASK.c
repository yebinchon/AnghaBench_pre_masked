
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_ior {int dummy; } ;
struct nvkm_head {int dummy; } ;
struct nv50_disp {int dummy; } ;


 int FUNC_0 (struct nvkm_head*,char*) ;
 int FUNC_1 (struct nvkm_head*,struct nvkm_ior*,int) ;
 struct nvkm_ior* FUNC_2 (struct nvkm_head*) ;

void
FUNC_3(struct nv50_disp *VAR_0, struct nvkm_head *VAR_1)
{
 struct nvkm_ior *VAR_2;


 FUNC_0(VAR_1, "supervisor 1.0");
 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2)
  return;


 FUNC_1(VAR_1, VAR_2, 1);
}
