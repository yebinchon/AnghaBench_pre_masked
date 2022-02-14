
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvif_mmu {int dummy; } ;
struct nv50_wndw_func {scalar_t__ blend_set; scalar_t__ ilut; } ;
struct TYPE_12__ {int func; } ;
struct TYPE_11__ {int list; int * parent; } ;
struct TYPE_9__ {int user; } ;
struct TYPE_10__ {TYPE_3__ base; } ;
struct TYPE_8__ {int type; scalar_t__ data; } ;
struct nv50_wndw {int id; int plane; struct nv50_wndw_func const* func; TYPE_6__ notify; int ilut; TYPE_5__ ctxdma; TYPE_4__ wndw; TYPE_2__ interlock; } ;
struct nv50_disp {int dummy; } ;
struct TYPE_7__ {struct nvif_mmu mmu; } ;
struct nouveau_drm {TYPE_1__ client; } ;
struct drm_device {int dummy; } ;
typedef enum nv50_disp_interlock_type { ____Placeholder_nv50_disp_interlock_type } nv50_disp_interlock_type ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct drm_device*,int *,scalar_t__,int *,scalar_t__ const*,int,int *,int,char*,char const*,int) ;
 int FUNC_8 (struct nv50_wndw*) ;
 struct nv50_wndw* FUNC_9 (int,int ) ;
 struct nouveau_drm* FUNC_10 (struct drm_device*) ;
 struct nv50_disp* FUNC_11 (struct drm_device*) ;
 int FUNC_12 (struct nv50_disp*,struct nvif_mmu*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_13 (int *) ;

int
FUNC_14(const struct nv50_wndw_func *VAR_8, struct drm_device *VAR_9,
        enum drm_plane_type VAR_10, const char *VAR_11, int VAR_12,
        const u32 *VAR_13, u32 VAR_14,
        enum nv50_disp_interlock_type VAR_15, u32 VAR_16,
        struct nv50_wndw **VAR_17)
{
 struct nouveau_drm *VAR_18 = FUNC_10(VAR_9);
 struct nvif_mmu *VAR_19 = &VAR_18->client.mmu;
 struct nv50_disp *VAR_20 = FUNC_11(VAR_9);
 struct nv50_wndw *VAR_21;
 int VAR_22;
 int VAR_23;

 if (!(VAR_21 = *VAR_17 = FUNC_9(sizeof(*VAR_21), VAR_4)))
  return -VAR_3;
 VAR_21->func = VAR_8;
 VAR_21->id = VAR_12;
 VAR_21->interlock.type = VAR_15;
 VAR_21->interlock.data = VAR_16;

 VAR_21->ctxdma.parent = &VAR_21->wndw.base.user;
 FUNC_1(&VAR_21->ctxdma.list);

 for (VAR_22 = 0; VAR_13[VAR_22]; VAR_22++);

 VAR_23 = FUNC_7(VAR_9, &VAR_21->plane, VAR_14, &VAR_5,
           VAR_13, VAR_22, ((void*)0),
           VAR_10, "%s-%d", VAR_11, VAR_12);
 if (VAR_23) {
  FUNC_8(*VAR_17);
  *VAR_17 = ((void*)0);
  return VAR_23;
 }

 FUNC_6(&VAR_21->plane, &VAR_6);

 if (VAR_21->func->ilut) {
  VAR_23 = FUNC_12(VAR_20, VAR_19, &VAR_21->ilut);
  if (VAR_23)
   return VAR_23;
 }

 VAR_21->notify.func = VAR_7;

 if (VAR_21->func->blend_set) {
  VAR_23 = FUNC_5(&VAR_21->plane,
    FUNC_13(&VAR_21->plane), 0, 254);
  if (VAR_23)
   return VAR_23;

  VAR_23 = FUNC_2(&VAR_21->plane);
  if (VAR_23)
   return VAR_23;

  VAR_23 = FUNC_3(&VAR_21->plane,
    FUNC_0(VAR_1) |
    FUNC_0(VAR_2) |
    FUNC_0(VAR_0));
  if (VAR_23)
   return VAR_23;
 } else {
  VAR_23 = FUNC_4(&VAR_21->plane,
    FUNC_13(&VAR_21->plane));
  if (VAR_23)
   return VAR_23;
 }

 return 0;
}
