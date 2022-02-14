
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop {int vop_lock; int dev; int line_flag_completion; int is_enabled; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct vop* FUNC_5 (struct drm_crtc*) ;
 int FUNC_6 (struct vop*) ;
 int FUNC_7 (struct vop*) ;
 scalar_t__ FUNC_8 (struct vop*) ;
 unsigned long FUNC_9 (int *,int ) ;

int FUNC_10(struct drm_crtc *VAR_4, unsigned int VAR_5)
{
 struct vop *VAR_6 = FUNC_5(VAR_4);
 unsigned long VAR_7;
 int VAR_8 = 0;

 if (!VAR_4 || !VAR_6->is_enabled)
  return -VAR_2;

 FUNC_2(&VAR_6->vop_lock);
 if (VAR_5 <= 0) {
  VAR_8 = -VAR_1;
  goto out;
 }

 if (FUNC_8(VAR_6)) {
  VAR_8 = -VAR_0;
  goto out;
 }

 FUNC_4(&VAR_6->line_flag_completion);
 FUNC_7(VAR_6);

 VAR_7 = FUNC_9(&VAR_6->line_flag_completion,
         FUNC_1(VAR_5));
 FUNC_6(VAR_6);

 if (VAR_7 == 0) {
  FUNC_0(VAR_6->dev, "Timeout waiting for IRQ\n");
  VAR_8 = -VAR_3;
  goto out;
 }

out:
 FUNC_3(&VAR_6->vop_lock);
 return VAR_8;
}
