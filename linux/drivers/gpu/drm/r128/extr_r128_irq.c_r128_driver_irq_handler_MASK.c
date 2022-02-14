
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {scalar_t__ dev_private; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int vbl_received; } ;
typedef TYPE_1__ drm_r128_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_device*,int ) ;

irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 struct drm_device *VAR_7 = (struct drm_device *) VAR_6;
 drm_r128_private_t *VAR_8 = (drm_r128_private_t *) VAR_7->dev_private;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_4);


 if (VAR_9 & VAR_2) {
  FUNC_1(VAR_4, VAR_3);
  FUNC_2(&VAR_8->vbl_received);
  FUNC_3(VAR_7, 0);
  return VAR_0;
 }
 return VAR_1;
}
