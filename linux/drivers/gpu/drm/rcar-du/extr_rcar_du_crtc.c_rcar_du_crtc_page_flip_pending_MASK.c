
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_device* dev; } ;
struct rcar_du_crtc {int * event; TYPE_1__ crtc; } ;
struct drm_device {int event_lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_2(struct rcar_du_crtc *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->crtc.dev;
 unsigned long VAR_2;
 bool VAR_3;

 FUNC_0(&VAR_1->event_lock, VAR_2);
 VAR_3 = VAR_0->event != ((void*)0);
 FUNC_1(&VAR_1->event_lock, VAR_2);

 return VAR_3;
}
