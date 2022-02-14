
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {scalar_t__ dev_private; } ;
typedef int drm_via_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1(struct drm_device *VAR_3, int VAR_4)
{
 drm_via_private_t *VAR_5 = (drm_via_private_t *)VAR_3->dev_private;

 FUNC_0(VAR_5, VAR_2 + VAR_4*0x04, VAR_1 | VAR_0);
}
