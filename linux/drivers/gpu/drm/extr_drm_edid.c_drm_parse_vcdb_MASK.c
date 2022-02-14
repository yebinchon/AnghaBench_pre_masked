
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_display_info {int rgb_quant_range_selectable; } ;
struct drm_connector {struct drm_display_info display_info; } ;


 int FUNC_0 (char*,int const) ;
 int const VAR_0 ;

__attribute__((used)) static void FUNC_1(struct drm_connector *VAR_1, const u8 *VAR_2)
{
 struct drm_display_info *VAR_3 = &VAR_1->display_info;

 FUNC_0("CEA VCDB 0x%02x\n", VAR_2[2]);

 if (VAR_2[2] & VAR_0)
  VAR_3->rgb_quant_range_selectable = 1;
}
