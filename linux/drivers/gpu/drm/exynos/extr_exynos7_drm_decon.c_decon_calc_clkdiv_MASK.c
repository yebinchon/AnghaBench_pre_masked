
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_display_mode {unsigned long htotal; unsigned long vtotal; unsigned long vrefresh; } ;
struct decon_context {int vclk; } ;


 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct decon_context *VAR_0,
  const struct drm_display_mode *VAR_1)
{
 unsigned long VAR_2 = VAR_1->htotal * VAR_1->vtotal * VAR_1->vrefresh;
 u32 VAR_3;


 VAR_3 = FUNC_0(FUNC_1(VAR_0->vclk), VAR_2);

 return (VAR_3 < 0x100) ? VAR_3 : 0xff;
}
