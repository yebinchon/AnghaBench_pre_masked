
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dumb_vga {scalar_t__ vdd; } ;
struct drm_bridge {int dummy; } ;


 int FUNC_0 (char*,int) ;
 struct dumb_vga* FUNC_1 (struct drm_bridge*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct drm_bridge *VAR_0)
{
 struct dumb_vga *VAR_1 = FUNC_1(VAR_0);
 int VAR_2 = 0;

 if (VAR_1->vdd)
  VAR_2 = FUNC_2(VAR_1->vdd);

 if (VAR_2)
  FUNC_0("Failed to enable vdd regulator: %d\n", VAR_2);
}
