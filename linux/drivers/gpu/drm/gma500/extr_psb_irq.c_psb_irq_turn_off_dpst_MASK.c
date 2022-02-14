
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_psb_private {int dummy; } ;
struct drm_device {scalar_t__ dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct drm_device*,int) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_psb_private*,int ,int ) ;

void FUNC_5(struct drm_device *VAR_4)
{
 struct drm_psb_private *VAR_5 =
     (struct drm_psb_private *) VAR_4->dev_private;
 u32 VAR_6;
 u32 VAR_7;

 if (FUNC_2(VAR_4, 0)) {
  FUNC_1(0x00000000, VAR_0);
  VAR_6 = FUNC_0(VAR_0);

  FUNC_4(VAR_5, 0, VAR_1);

  VAR_7 = FUNC_0(VAR_2);
  FUNC_1(VAR_7 & ~VAR_3,
       VAR_2);
  VAR_7 = FUNC_0(VAR_2);

  FUNC_3(VAR_4);
 }
}
