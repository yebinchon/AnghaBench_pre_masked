
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct zx_vou_hw {scalar_t__ timing; } ;
struct zx_crtc {TYPE_1__* bits; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_2__ {int int_frame_mask; } ;


 scalar_t__ VAR_0 ;
 struct zx_vou_hw* FUNC_0 (struct drm_crtc*) ;
 struct zx_crtc* FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct drm_crtc *VAR_1)
{
 struct zx_crtc *VAR_2 = FUNC_1(VAR_1);
 struct zx_vou_hw *VAR_3 = FUNC_0(VAR_1);
 u32 VAR_4 = VAR_2->bits->int_frame_mask;

 FUNC_2(VAR_3->timing + VAR_0, VAR_4,
         VAR_4);

 return 0;
}
