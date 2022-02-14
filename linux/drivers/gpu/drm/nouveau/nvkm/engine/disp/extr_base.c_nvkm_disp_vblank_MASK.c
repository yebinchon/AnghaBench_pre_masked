
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_disp {int vblank; } ;
struct nvif_notify_head_rep_v0 {int dummy; } ;
typedef int rep ;


 int FUNC_0 (int *,int,int,struct nvif_notify_head_rep_v0*,int) ;

void
FUNC_1(struct nvkm_disp *VAR_0, int VAR_1)
{
 struct nvif_notify_head_rep_v0 VAR_2 = {};
 FUNC_0(&VAR_0->vblank, 1, VAR_1, &VAR_2, sizeof(VAR_2));
}
