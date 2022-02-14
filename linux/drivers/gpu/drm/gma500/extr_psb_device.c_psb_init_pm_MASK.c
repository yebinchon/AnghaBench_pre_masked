
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_psb_private {int dummy; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_1)
{
 struct drm_psb_private *VAR_2 = VAR_1->dev_private;

 u32 VAR_3 = FUNC_0(VAR_0);
 VAR_3 &= ~3;
 VAR_3 |= 1;
 FUNC_1(VAR_3, VAR_0);
 FUNC_0(VAR_0);
}
