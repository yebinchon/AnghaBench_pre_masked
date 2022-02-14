
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dumb_vga {scalar_t__ vdd; } ;
struct drm_bridge {int dummy; } ;


 struct dumb_vga* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct drm_bridge *VAR_0)
{
 struct dumb_vga *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->vdd)
  FUNC_1(VAR_1->vdd);
}
