
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltdc_device {int irq_status; int error_status; int err_lock; } ;
struct drm_device {struct ltdc_device* dev_private; } ;
struct drm_crtc {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct drm_crtc* FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct drm_device *VAR_6 = VAR_5;
 struct ltdc_device *VAR_7 = VAR_6->dev_private;
 struct drm_crtc *VAR_8 = FUNC_0(VAR_6, 0);


 if (VAR_7->irq_status & VAR_2)
  FUNC_1(VAR_8);


 FUNC_2(&VAR_7->err_lock);
 if (VAR_7->irq_status & VAR_1)
  VAR_7->error_status |= VAR_1;
 if (VAR_7->irq_status & VAR_3)
  VAR_7->error_status |= VAR_3;
 FUNC_3(&VAR_7->err_lock);

 return VAR_0;
}
