
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rcar_du_device {int dev; } ;
struct drm_crtc {int dummy; } ;
struct rcar_du_crtc {int index; int vblank_count; int vblank_wait; int vblank_lock; int group; struct drm_crtc crtc; struct rcar_du_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct rcar_du_crtc*,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int,int ) ;

__attribute__((used)) static void FUNC_9(struct rcar_du_crtc *VAR_4)
{
 struct rcar_du_device *VAR_5 = VAR_4->dev;
 struct drm_crtc *VAR_6 = &VAR_4->crtc;
 u32 VAR_7;


 FUNC_1(VAR_6);
 FUNC_6(&VAR_4->vblank_lock);
 FUNC_5(VAR_4->group, VAR_4->index % 2 ? VAR_1 : VAR_0, 0);
 VAR_7 = FUNC_4(VAR_4, VAR_2);
 VAR_4->vblank_count = VAR_7 & VAR_3 ? 2 : 1;
 FUNC_7(&VAR_4->vblank_lock);

 if (!FUNC_8(VAR_4->vblank_wait, VAR_4->vblank_count == 0,
    FUNC_3(100)))
  FUNC_0(VAR_5->dev, "vertical blanking timeout\n");

 FUNC_2(VAR_6);
}
