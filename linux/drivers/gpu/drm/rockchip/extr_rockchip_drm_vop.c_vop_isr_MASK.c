
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_crtc {int dummy; } ;
struct vop {int dev; int line_flag_completion; int dsp_hold_completion; int irq_lock; struct drm_crtc crtc; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct vop*,int ,int ) ;
 int FUNC_3 (struct vop*,int ,int,int) ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drm_crtc*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_7 ;
 int FUNC_10 (struct vop*) ;
 scalar_t__ FUNC_11 (struct vop*) ;
 int FUNC_12 (struct vop*) ;

__attribute__((used)) static irqreturn_t FUNC_13(int VAR_8, void *VAR_9)
{
 struct vop *VAR_10 = VAR_9;
 struct drm_crtc *VAR_11 = &VAR_10->crtc;
 uint32_t VAR_12;
 int VAR_13 = VAR_4;





 if (!FUNC_6(VAR_10->dev))
  return VAR_4;

 if (FUNC_11(VAR_10)) {
  FUNC_1(VAR_10->dev, "couldn't enable clocks\n");
  goto out;
 }





 FUNC_8(&VAR_10->irq_lock);

 VAR_12 = FUNC_2(VAR_10, VAR_7, VAR_2);

 if (VAR_12)
  FUNC_3(VAR_10, VAR_6, VAR_12, 1);

 FUNC_9(&VAR_10->irq_lock);


 if (!VAR_12)
  goto out_disable;

 if (VAR_12 & VAR_0) {
  FUNC_4(&VAR_10->dsp_hold_completion);
  VAR_12 &= ~VAR_0;
  VAR_13 = VAR_3;
 }

 if (VAR_12 & VAR_5) {
  FUNC_4(&VAR_10->line_flag_completion);
  VAR_12 &= ~VAR_5;
  VAR_13 = VAR_3;
 }

 if (VAR_12 & VAR_1) {
  FUNC_5(VAR_11);
  FUNC_12(VAR_10);
  VAR_12 &= ~VAR_1;
  VAR_13 = VAR_3;
 }


 if (VAR_12)
  FUNC_0(VAR_10->dev, "Unknown VOP IRQs: %#02x\n",
         VAR_12);

out_disable:
 FUNC_10(VAR_10);
out:
 FUNC_7(VAR_10->dev);
 return VAR_13;
}
