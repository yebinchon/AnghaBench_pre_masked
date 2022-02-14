
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_psb_private {scalar_t__ apm_base; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_5)
{
 struct drm_psb_private *VAR_6 = VAR_5->dev_private;
 u32 VAR_7, VAR_8, VAR_9;
 int VAR_10 = 5;

 VAR_7 = FUNC_0(VAR_6->apm_base + VAR_0);
 VAR_7 &= ~VAR_3;
 VAR_7 |= VAR_4;
 VAR_8 = VAR_3;

 FUNC_1(VAR_7, VAR_6->apm_base + VAR_0);

 while (VAR_10--) {
  VAR_9 = FUNC_0(VAR_6->apm_base + VAR_1);
  if ((VAR_9 & VAR_8) == VAR_2)
   return 0;
  FUNC_2(10);
 }
 return 0;
}
