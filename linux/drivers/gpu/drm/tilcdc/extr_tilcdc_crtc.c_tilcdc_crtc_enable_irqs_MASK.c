
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tilcdc_drm_private {int rev; } ;
struct drm_device {struct tilcdc_drm_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct drm_device*,int) ;
 int FUNC_1 (struct drm_device*,int ,int) ;
 int FUNC_2 (struct drm_device*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_11)
{
 struct tilcdc_drm_private *VAR_12 = VAR_11->dev_private;

 FUNC_0(VAR_11, 0xffffffff);

 if (VAR_12->rev == 1) {
  FUNC_1(VAR_11, VAR_3,
   VAR_7 | VAR_6 |
   VAR_8);
  FUNC_1(VAR_11, VAR_0,
   VAR_5);
 } else {
  FUNC_2(VAR_11, VAR_2,
   VAR_10 |
   VAR_9 |
   VAR_1 | VAR_4);
 }
}
