
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nv50_disp_core_channel_dma_v0 {int dummy; } ;
struct nv50_disp {TYPE_4__* sync; TYPE_2__* disp; } ;
struct nv50_core_func {int dummy; } ;
struct nv50_core {int chan; struct nv50_core_func const* func; } ;
struct TYPE_5__ {int device; } ;
struct nouveau_drm {TYPE_1__ client; int dev; } ;
typedef int s32 ;
typedef int args ;
struct TYPE_7__ {int offset; } ;
struct TYPE_8__ {TYPE_3__ bo; } ;
struct TYPE_6__ {int object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nouveau_drm*,char*,int ,int) ;
 struct nv50_core* FUNC_1 (int,int ) ;
 struct nv50_disp* FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int *,int ,struct nv50_disp_core_channel_dma_v0*,int,int ,int *) ;

int
FUNC_4(const struct nv50_core_func *VAR_2, struct nouveau_drm *VAR_3,
       s32 VAR_4, struct nv50_core **VAR_5)
{
 struct nv50_disp_core_channel_dma_v0 VAR_6 = {};
 struct nv50_disp *VAR_7 = FUNC_2(VAR_3->dev);
 struct nv50_core *VAR_8;
 int VAR_9;

 if (!(VAR_8 = *VAR_5 = FUNC_1(sizeof(*VAR_8), VAR_1)))
  return -VAR_0;
 VAR_8->func = VAR_2;

 VAR_9 = FUNC_3(&VAR_3->client.device, &VAR_7->disp->object,
          &VAR_4, 0, &VAR_6, sizeof(VAR_6),
          VAR_7->sync->bo.offset, &VAR_8->chan);
 if (VAR_9) {
  FUNC_0(VAR_3, "core%04x allocation failed: %d\n", VAR_4, VAR_9);
  return VAR_9;
 }

 return 0;
}
