
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
struct color_conversion {int ry; int gy; int by; int ay; int ru; int gu; int bu; int au; int rv; int gv; int bv; int av; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(struct drm_i915_private *VAR_6,
     const struct color_conversion *VAR_7)
{
 if (!VAR_7)
  return;

 FUNC_0(VAR_4, (VAR_7->ry << 16) |
     VAR_7->gy);
 FUNC_0(VAR_5, (VAR_7->by << 16) |
     VAR_7->ay);
 FUNC_0(VAR_0, (VAR_7->ru << 16) |
     VAR_7->gu);
 FUNC_0(VAR_1, (VAR_7->bu << 16) |
     VAR_7->au);
 FUNC_0(VAR_2, (VAR_7->rv << 16) |
     VAR_7->gv);
 FUNC_0(VAR_3, (VAR_7->bv << 16) |
     VAR_7->av);
}
