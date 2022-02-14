
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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct drm_device*,int ,int) ;
 int FUNC_1 (struct drm_device*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_13)
{
 struct tilcdc_drm_private *VAR_14 = VAR_13->dev_private;


 if (VAR_14->rev == 1) {
  FUNC_0(VAR_13, VAR_3,
   VAR_8 | VAR_6 |
   VAR_9 | VAR_7);
  FUNC_0(VAR_13, VAR_0,
   VAR_5);
 } else {
  FUNC_1(VAR_13, VAR_2,
   VAR_12 | VAR_11 |
   VAR_10 |
   VAR_1 | VAR_4);
 }
}
