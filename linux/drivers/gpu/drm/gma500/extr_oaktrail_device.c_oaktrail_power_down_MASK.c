
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_psb_private {scalar_t__ ospm_base; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_3)
{
 struct drm_psb_private *VAR_4 = VAR_3->dev_private;
 u32 VAR_5 ;
 u32 VAR_6;

 VAR_5 = VAR_2;
 FUNC_1(VAR_5, VAR_4->ospm_base + VAR_0);

 while (1) {
  VAR_6 = FUNC_0(VAR_4->ospm_base + VAR_1);
  if ((VAR_6 & VAR_5) == VAR_5)
   break;
  else
   FUNC_2(10);
 }
 return 0;
}
