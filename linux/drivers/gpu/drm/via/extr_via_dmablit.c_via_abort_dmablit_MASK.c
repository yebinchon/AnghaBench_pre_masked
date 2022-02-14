
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {scalar_t__ dev_private; } ;
typedef int drm_via_private_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_1(struct drm_device *VAR_2, int VAR_3)
{
 drm_via_private_t *VAR_4 = (drm_via_private_t *)VAR_2->dev_private;

 FUNC_0(VAR_4, VAR_1 + VAR_3*0x04, VAR_0);
}
