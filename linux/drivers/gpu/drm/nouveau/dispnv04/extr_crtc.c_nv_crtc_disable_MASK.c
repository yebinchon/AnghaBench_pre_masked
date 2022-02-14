
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv04_display {scalar_t__* image; } ;
struct nouveau_crtc {size_t index; } ;
struct drm_crtc {int dev; } ;


 int FUNC_0 (int *,scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;
 struct nouveau_crtc* FUNC_2 (struct drm_crtc*) ;
 struct nv04_display* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct drm_crtc *VAR_0)
{
 struct nv04_display *VAR_1 = FUNC_3(VAR_0->dev);
 struct nouveau_crtc *VAR_2 = FUNC_2(VAR_0);
 if (VAR_1->image[VAR_2->index])
  FUNC_1(VAR_1->image[VAR_2->index]);
 FUNC_0(((void*)0), &VAR_1->image[VAR_2->index]);
}
