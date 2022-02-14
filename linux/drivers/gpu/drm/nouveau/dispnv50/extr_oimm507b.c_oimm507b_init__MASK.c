
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int user; } ;
struct TYPE_6__ {TYPE_2__ base; } ;
struct nv50_wndw {struct nv50_wimm_func const* immd; TYPE_3__ wimm; int id; } ;
struct nv50_wimm_func {int dummy; } ;
struct nv50_disp_overlay_v0 {int head; } ;
struct nv50_disp {TYPE_1__* disp; } ;
struct nouveau_drm {int dev; } ;
typedef int s32 ;
typedef int args ;
struct TYPE_4__ {int object; } ;


 int FUNC_0 (struct nouveau_drm*,char*,int ,int) ;
 struct nv50_disp* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,struct nv50_disp_overlay_v0*,int,int *) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static int
FUNC_4(const struct nv50_wimm_func *VAR_0, struct nouveau_drm *VAR_1,
        s32 VAR_2, struct nv50_wndw *VAR_3)
{
 struct nv50_disp_overlay_v0 VAR_4 = {
  .head = VAR_3->id,
 };
 struct nv50_disp *VAR_5 = FUNC_1(VAR_1->dev);
 int VAR_6;

 VAR_6 = FUNC_2(&VAR_5->disp->object, 0, VAR_2, &VAR_4,
          sizeof(VAR_4), &VAR_3->wimm.base.user);
 if (VAR_6) {
  FUNC_0(VAR_1, "oimm%04x allocation failed: %d\n", VAR_2, VAR_6);
  return VAR_6;
 }

 FUNC_3(&VAR_3->wimm.base.user, ((void*)0), 0);
 VAR_3->immd = VAR_0;
 return 0;
}
