
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv04_display {scalar_t__* image; } ;
struct TYPE_2__ {scalar_t__ nvbo; } ;
struct nouveau_crtc {size_t index; TYPE_1__ cursor; } ;
struct drm_crtc {int dev; } ;


 int FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct nouveau_crtc*) ;
 int FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 struct nouveau_crtc* FUNC_5 (struct drm_crtc*) ;
 struct nv04_display* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct drm_crtc *VAR_0)
{
 struct nv04_display *VAR_1 = FUNC_6(VAR_0->dev);
 struct nouveau_crtc *VAR_2 = FUNC_5(VAR_0);

 if (!VAR_2)
  return;

 FUNC_0(VAR_0);

 if (VAR_1->image[VAR_2->index])
  FUNC_4(VAR_1->image[VAR_2->index]);
 FUNC_2(((void*)0), &VAR_1->image[VAR_2->index]);

 FUNC_3(VAR_2->cursor.nvbo);
 FUNC_4(VAR_2->cursor.nvbo);
 FUNC_2(((void*)0), &VAR_2->cursor.nvbo);
 FUNC_1(VAR_2);
}
