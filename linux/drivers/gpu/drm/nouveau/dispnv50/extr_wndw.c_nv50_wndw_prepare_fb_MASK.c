
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int handle; } ;
struct nv50_wndw_ctxdma {TYPE_2__ object; } ;
struct TYPE_15__ {int crtc; int state; int fence; int fb; } ;
struct TYPE_13__ {int * offset; int * handle; } ;
struct nv50_wndw_atom {TYPE_6__ state; TYPE_4__ image; } ;
struct TYPE_10__ {scalar_t__ parent; } ;
struct nv50_wndw {TYPE_7__* func; TYPE_1__ ctxdma; } ;
struct nv50_head_atom {TYPE_2__ object; } ;
struct nouveau_framebuffer {TYPE_8__* nvbo; } ;
struct nouveau_drm {int dummy; } ;
struct drm_plane_state {int fb; } ;
struct drm_plane {int name; int dev; } ;
struct TYPE_12__ {int resv; } ;
struct TYPE_14__ {int offset; TYPE_3__ base; } ;
struct TYPE_17__ {TYPE_5__ bo; } ;
struct TYPE_16__ {int (* prepare ) (struct nv50_wndw*,struct nv50_wndw_ctxdma*,struct nv50_wndw_atom*) ;} ;


 scalar_t__ FUNC_0 (struct nv50_wndw_ctxdma*) ;
 int FUNC_1 (struct nouveau_drm*,char*,int ,int ) ;
 int FUNC_2 (struct nv50_wndw_ctxdma*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_8__*,int ,int) ;
 int FUNC_5 (TYPE_8__*) ;
 struct nouveau_drm* FUNC_6 (int ) ;
 struct nouveau_framebuffer* FUNC_7 (int ) ;
 struct nv50_wndw_ctxdma* FUNC_8 (int ,int ) ;
 struct nv50_wndw* FUNC_9 (struct drm_plane*) ;
 struct nv50_wndw_atom* FUNC_10 (struct drm_plane_state*) ;
 struct nv50_wndw_ctxdma* FUNC_11 (struct nv50_wndw*,struct nouveau_framebuffer*) ;
 int FUNC_12 (struct nv50_wndw*,struct nv50_wndw_ctxdma*,struct nv50_wndw_atom*) ;

__attribute__((used)) static int
FUNC_13(struct drm_plane *VAR_1, struct drm_plane_state *VAR_2)
{
 struct nouveau_framebuffer *VAR_3 = FUNC_7(VAR_2->fb);
 struct nouveau_drm *VAR_4 = FUNC_6(VAR_1->dev);
 struct nv50_wndw *VAR_5 = FUNC_9(VAR_1);
 struct nv50_wndw_atom *VAR_6 = FUNC_10(VAR_2);
 struct nv50_head_atom *VAR_7;
 struct nv50_wndw_ctxdma *VAR_8;
 int VAR_9;

 FUNC_1(VAR_4, "%s prepare: %p\n", VAR_1->name, VAR_2->fb);
 if (!VAR_6->state.fb)
  return 0;

 VAR_9 = FUNC_4(VAR_3->nvbo, VAR_0, 1);
 if (VAR_9)
  return VAR_9;

 if (VAR_5->ctxdma.parent) {
  VAR_8 = FUNC_11(VAR_5, VAR_3);
  if (FUNC_0(VAR_8)) {
   FUNC_5(VAR_3->nvbo);
   return FUNC_2(VAR_8);
  }

  VAR_6->image.handle[0] = VAR_8->object.handle;
 }

 VAR_6->state.fence = FUNC_3(VAR_3->nvbo->bo.base.resv);
 VAR_6->image.offset[0] = VAR_3->nvbo->bo.offset;

 if (VAR_5->func->prepare) {
  VAR_7 = FUNC_8(VAR_6->state.state, VAR_6->state.crtc);
  if (FUNC_0(VAR_7))
   return FUNC_2(VAR_7);

  VAR_5->func->prepare(VAR_5, VAR_7, VAR_6);
 }

 return 0;
}
