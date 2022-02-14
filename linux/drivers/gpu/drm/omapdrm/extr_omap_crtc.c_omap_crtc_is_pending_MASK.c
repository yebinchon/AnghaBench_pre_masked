
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_crtc {int pending; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct TYPE_2__ {int event_lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct omap_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static bool FUNC_3(struct drm_crtc *VAR_0)
{
 struct omap_crtc *VAR_1 = FUNC_2(VAR_0);
 unsigned long VAR_2;
 bool VAR_3;

 FUNC_0(&VAR_0->dev->event_lock, VAR_2);
 VAR_3 = VAR_1->pending;
 FUNC_1(&VAR_0->dev->event_lock, VAR_2);

 return VAR_3;
}
