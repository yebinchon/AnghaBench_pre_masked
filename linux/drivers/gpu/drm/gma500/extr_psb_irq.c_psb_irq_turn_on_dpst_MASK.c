
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_psb_private {int dummy; } ;
struct drm_device {scalar_t__ dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct drm_device*,int) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_psb_private*,int ,int ) ;

void FUNC_5(struct drm_device *VAR_7)
{
 struct drm_psb_private *VAR_8 =
  (struct drm_psb_private *) VAR_7->dev_private;
 u32 VAR_9;
 u32 VAR_10;

 if (FUNC_2(VAR_7, 0)) {
  FUNC_1(1 << 31, VAR_2);
  VAR_9 = FUNC_0(VAR_2);
  FUNC_1(1 << 31, VAR_0);
  VAR_9 = FUNC_0(VAR_0);

  FUNC_1(0x80010100, VAR_4);
  VAR_10 = FUNC_0(VAR_4);
  FUNC_1(VAR_10 | VAR_5
      | VAR_6,
          VAR_4);
  VAR_10 = FUNC_0(VAR_4);

  FUNC_4(VAR_8, 0, VAR_3);

  VAR_9 = FUNC_0(VAR_0);
  FUNC_1(VAR_9 | VAR_1,
       VAR_0);
  VAR_10 = FUNC_0(VAR_4);
  FUNC_1(VAR_10 | 0x80010100 | VAR_5,
       VAR_4);

  FUNC_3(VAR_7);
 }
}
