
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_psb_private {int mode_dev; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*,int *,int ) ;
 int FUNC_3 (struct drm_device*,int *) ;
 int FUNC_4 (struct drm_device*,int *,int ) ;
 int FUNC_5 (struct drm_device*,int *) ;
 int FUNC_6 (struct drm_device*) ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_6)
{
 struct drm_psb_private *VAR_7 = VAR_6->dev_private;

 FUNC_6(VAR_6);

 FUNC_1(VAR_6);

 FUNC_3(VAR_6, &VAR_7->mode_dev);
 FUNC_5(VAR_6, &VAR_7->mode_dev);


 if (FUNC_0(VAR_3) & VAR_5) {
  FUNC_2(VAR_6, &VAR_7->mode_dev, VAR_3);
  if (FUNC_0(VAR_0) & VAR_2)
   FUNC_4(VAR_6, &VAR_7->mode_dev, VAR_0);
 }

 if (FUNC_0(VAR_4) & VAR_5) {
  FUNC_2(VAR_6, &VAR_7->mode_dev, VAR_4);
  if (FUNC_0(VAR_1) & VAR_2)
   FUNC_4(VAR_6, &VAR_7->mode_dev, VAR_1);
 }
 return 0;
}
