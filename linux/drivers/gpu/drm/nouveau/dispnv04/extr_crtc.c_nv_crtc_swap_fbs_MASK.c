
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv04_display {scalar_t__* image; } ;
struct nouveau_framebuffer {int nvbo; } ;
struct nouveau_crtc {size_t index; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_crtc {TYPE_1__* primary; int dev; } ;
struct TYPE_2__ {int fb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;
 struct nouveau_crtc* FUNC_3 (struct drm_crtc*) ;
 struct nouveau_framebuffer* FUNC_4 (int ) ;
 struct nv04_display* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct drm_crtc *VAR_1, struct drm_framebuffer *VAR_2)
{
 struct nv04_display *VAR_3 = FUNC_5(VAR_1->dev);
 struct nouveau_framebuffer *VAR_4 = FUNC_4(VAR_1->primary->fb);
 struct nouveau_crtc *VAR_5 = FUNC_3(VAR_1);
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4->nvbo, VAR_0, 0);
 if (VAR_6 == 0) {
  if (VAR_3->image[VAR_5->index])
   FUNC_2(VAR_3->image[VAR_5->index]);
  FUNC_1(VAR_4->nvbo, &VAR_3->image[VAR_5->index]);
 }

 return VAR_6;
}
