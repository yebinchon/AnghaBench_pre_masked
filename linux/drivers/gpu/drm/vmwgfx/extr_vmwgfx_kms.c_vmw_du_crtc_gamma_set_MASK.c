
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u16 ;
struct vmw_private {int dummy; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_crtc {int dev; } ;


 int FUNC_0 (char*,int,int,int,int) ;
 scalar_t__ VAR_0 ;
 struct vmw_private* FUNC_1 (int ) ;
 int FUNC_2 (struct vmw_private*,scalar_t__,int) ;

int FUNC_3(struct drm_crtc *VAR_1,
     u16 *VAR_2, u16 *VAR_3, u16 *VAR_4,
     uint32_t VAR_5,
     struct drm_modeset_acquire_ctx *VAR_6)
{
 struct vmw_private *VAR_7 = FUNC_1(VAR_1->dev);
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  FUNC_0("%d r/g/b = 0x%04x / 0x%04x / 0x%04x\n", VAR_8,
     VAR_2[VAR_8], VAR_3[VAR_8], VAR_4[VAR_8]);
  FUNC_2(VAR_7, VAR_0 + VAR_8 * 3 + 0, VAR_2[VAR_8] >> 8);
  FUNC_2(VAR_7, VAR_0 + VAR_8 * 3 + 1, VAR_3[VAR_8] >> 8);
  FUNC_2(VAR_7, VAR_0 + VAR_8 * 3 + 2, VAR_4[VAR_8] >> 8);
 }

 return 0;
}
