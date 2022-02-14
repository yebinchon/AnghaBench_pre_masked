
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_vou_hw {scalar_t__ timing; } ;
struct zx_crtc_bits {int tc_enable; } ;
struct zx_crtc {scalar_t__ chnreg; int pixclk; struct zx_vou_hw* vou; struct zx_crtc_bits* bits; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_crtc*) ;
 struct zx_crtc* FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_3,
       struct drm_crtc_state *VAR_4)
{
 struct zx_crtc *VAR_5 = FUNC_2(VAR_3);
 const struct zx_crtc_bits *VAR_6 = VAR_5->bits;
 struct zx_vou_hw *VAR_7 = VAR_5->vou;

 FUNC_0(VAR_5->pixclk);

 FUNC_1(VAR_3);


 FUNC_3(VAR_5->chnreg + VAR_0, VAR_1, 0);


 FUNC_3(VAR_7->timing + VAR_2, VAR_6->tc_enable, 0);
}
