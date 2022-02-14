
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vbox_private {int dummy; } ;
struct drm_device {scalar_t__ dev_private; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (struct vbox_private*) ;
 int FUNC_2 (struct vbox_private*) ;

irqreturn_t FUNC_3(int VAR_6, void *VAR_7)
{
 struct drm_device *VAR_8 = (struct drm_device *)VAR_7;
 struct vbox_private *VAR_9 = (struct vbox_private *)VAR_8->dev_private;
 u32 VAR_10 = FUNC_1(VAR_9);

 if (!(VAR_10 & VAR_2))
  return VAR_5;







 if (VAR_10 &
     (VAR_1 | VAR_0) &&
     !(VAR_10 & VAR_3))
  FUNC_2(VAR_9);

 FUNC_0();

 return VAR_4;
}
