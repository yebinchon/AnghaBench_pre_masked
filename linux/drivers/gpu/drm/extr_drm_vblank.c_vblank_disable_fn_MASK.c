
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct drm_vblank_crtc {unsigned int pipe; scalar_t__ enabled; int refcount; struct drm_device* dev; } ;
struct drm_device {int vbl_lock; } ;


 int FUNC_0 (char*,unsigned int) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct drm_device*,unsigned int) ;
 struct drm_vblank_crtc* FUNC_3 (int ,struct timer_list*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct drm_vblank_crtc* VAR_1 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_2)
{
 struct drm_vblank_crtc *VAR_3 = FUNC_3(VAR_3, VAR_2, VAR_0);
 struct drm_device *VAR_4 = VAR_3->dev;
 unsigned int VAR_5 = VAR_3->pipe;
 unsigned long VAR_6;

 FUNC_4(&VAR_4->vbl_lock, VAR_6);
 if (FUNC_1(&VAR_3->refcount) == 0 && VAR_3->enabled) {
  FUNC_0("disabling vblank on crtc %u\n", VAR_5);
  FUNC_2(VAR_4, VAR_5);
 }
 FUNC_5(&VAR_4->vbl_lock, VAR_6);
}
