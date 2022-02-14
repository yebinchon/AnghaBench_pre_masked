
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_display_mode {int crtc_hdisplay; int crtc_htotal; int clock; } ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static unsigned int FUNC_1(struct drm_display_mode *VAR_0)
{
 u32 VAR_1, VAR_2;

 VAR_1 = (VAR_0->crtc_hdisplay - 1) | ((VAR_0->crtc_htotal - 1) << 16);





 VAR_2 = (VAR_0->crtc_htotal - 1) * 200 * 1000 / VAR_0->clock;

 FUNC_0("new crtc htotal 0x%4x\n", VAR_2);
 return (VAR_0->crtc_hdisplay - 1) | (VAR_2 << 16);
}
