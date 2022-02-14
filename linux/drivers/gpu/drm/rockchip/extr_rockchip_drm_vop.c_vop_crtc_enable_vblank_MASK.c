
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop {int irq_lock; int is_enabled; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vop*,int ,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct vop* FUNC_4 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_5(struct drm_crtc *VAR_4)
{
 struct vop *VAR_5 = FUNC_4(VAR_4);
 unsigned long VAR_6;

 if (FUNC_1(!VAR_5->is_enabled))
  return -VAR_0;

 FUNC_2(&VAR_5->irq_lock, VAR_6);

 FUNC_0(VAR_5, VAR_2, VAR_1, 1);
 FUNC_0(VAR_5, VAR_3, VAR_1, 1);

 FUNC_3(&VAR_5->irq_lock, VAR_6);

 return 0;
}
