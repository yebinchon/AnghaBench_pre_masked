
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tilcdc_crtc {int enabled; int enable_lock; int irq_lock; int last_vblank; scalar_t__ shutdown; } ;
struct drm_device {int dev; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct drm_crtc*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct drm_device*,int ,int ) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_crtc*) ;
 int FUNC_12 (struct drm_device*,int ,int ) ;
 int FUNC_13 (struct drm_device*,int ,int ,int ) ;
 struct tilcdc_crtc* FUNC_14 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_15(struct drm_crtc *VAR_6)
{
 struct drm_device *VAR_7 = VAR_6->dev;
 struct tilcdc_crtc *VAR_8 = FUNC_14(VAR_6);
 unsigned long VAR_9;

 FUNC_3(&VAR_8->enable_lock);
 if (VAR_8->enabled || VAR_8->shutdown) {
  FUNC_4(&VAR_8->enable_lock);
  return;
 }

 FUNC_5(VAR_7->dev);

 FUNC_6(VAR_6);

 FUNC_11(VAR_6);

 FUNC_10(VAR_7);

 FUNC_9(VAR_7, VAR_1, VAR_2);
 FUNC_13(VAR_7, VAR_4,
     FUNC_0(VAR_0),
     VAR_3);







 FUNC_7(&VAR_8->irq_lock, VAR_9);
 VAR_8->last_vblank = FUNC_2();
 FUNC_12(VAR_7, VAR_4, VAR_5);
 FUNC_8(&VAR_8->irq_lock, VAR_9);

 FUNC_1(VAR_6);

 VAR_8->enabled = 1;
 FUNC_4(&VAR_8->enable_lock);
}
