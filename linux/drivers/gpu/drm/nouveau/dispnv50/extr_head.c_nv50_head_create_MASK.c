
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct nv50_wndw {int plane; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_10__ {int index; struct drm_crtc base; } ;
struct nv50_head {int olut; TYPE_6__* func; TYPE_3__ base; } ;
struct nv50_disp {TYPE_5__* disp; TYPE_2__* core; } ;
struct TYPE_14__ {int mmu; } ;
struct nouveau_drm {TYPE_7__ client; } ;
struct drm_device {int dummy; } ;
struct TYPE_13__ {scalar_t__ olut_set; } ;
struct TYPE_11__ {scalar_t__ oclass; } ;
struct TYPE_12__ {TYPE_4__ object; } ;
struct TYPE_9__ {TYPE_1__* func; } ;
struct TYPE_8__ {TYPE_6__* head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct drm_crtc*,int,int,int) ;
 int FUNC_1 (struct drm_crtc*,int *) ;
 int FUNC_2 (struct drm_device*,struct drm_crtc*,int *,int *,int *,char*,int) ;
 int FUNC_3 (struct drm_crtc*,int) ;
 int FUNC_4 (struct nv50_head*) ;
 struct nv50_head* FUNC_5 (int,int ) ;
 struct nouveau_drm* FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct nouveau_drm*,int,struct nv50_wndw**) ;
 int FUNC_8 (struct nouveau_drm*,int,struct nv50_wndw**) ;
 struct nv50_disp* FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_crtc*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (struct nv50_disp*,int *,int *) ;
 int FUNC_12 (struct nouveau_drm*,int,struct nv50_wndw**) ;
 int FUNC_13 (struct nouveau_drm*,int ,int,struct nv50_wndw**) ;

int
FUNC_14(struct drm_device *VAR_8, int VAR_9)
{
 struct nouveau_drm *VAR_10 = FUNC_6(VAR_8);
 struct nv50_disp *VAR_11 = FUNC_9(VAR_8);
 struct nv50_head *VAR_12;
 struct nv50_wndw *VAR_13, *VAR_14, *VAR_15;
 struct drm_crtc *VAR_16;
 int VAR_17;

 VAR_12 = FUNC_5(sizeof(*VAR_12), VAR_4);
 if (!VAR_12)
  return -VAR_2;

 VAR_12->func = VAR_11->core->func->head;
 VAR_12->base.index = VAR_9;

 if (VAR_11->disp->object.oclass < VAR_5) {
  VAR_17 = FUNC_7(VAR_10, VAR_12->base.index, &VAR_13);
  VAR_17 = FUNC_12(VAR_10, VAR_12->base.index, &VAR_14);
 } else {
  VAR_17 = FUNC_13(VAR_10, VAR_1,
        VAR_12->base.index * 2 + 0, &VAR_13);
  VAR_17 = FUNC_13(VAR_10, VAR_0,
        VAR_12->base.index * 2 + 1, &VAR_14);
 }
 if (VAR_17 == 0)
  VAR_17 = FUNC_8(VAR_10, VAR_12->base.index, &VAR_15);
 if (VAR_17) {
  FUNC_4(VAR_12);
  return VAR_17;
 }

 VAR_16 = &VAR_12->base.base;
 FUNC_2(VAR_8, VAR_16, &VAR_13->plane, &VAR_15->plane,
      &VAR_6, "head-%d", VAR_12->base.index);
 FUNC_1(VAR_16, &VAR_7);
 FUNC_3(VAR_16, 256);
 if (VAR_11->disp->object.oclass >= VAR_3)
  FUNC_0(VAR_16, 256, 1, 256);
 else
  FUNC_0(VAR_16, 0, 0, 256);

 if (VAR_12->func->olut_set) {
  VAR_17 = FUNC_11(VAR_11, &VAR_10->client.mmu, &VAR_12->olut);
  if (VAR_17)
   goto out;
 }

out:
 if (VAR_17)
  FUNC_10(VAR_16);
 return VAR_17;
}
