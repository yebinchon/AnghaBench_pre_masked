
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_display_info {int dvi_dual; int max_tmds_clock; } ;
struct drm_connector {struct drm_display_info display_info; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (struct drm_connector*,int const*) ;

__attribute__((used)) static void
FUNC_3(struct drm_connector *VAR_0, const u8 *VAR_1)
{
 struct drm_display_info *VAR_2 = &VAR_0->display_info;
 u8 VAR_3 = FUNC_1(VAR_1);

 if (VAR_3 >= 6)
  VAR_2->dvi_dual = VAR_1[6] & 1;
 if (VAR_3 >= 7)
  VAR_2->max_tmds_clock = VAR_1[7] * 5000;

 FUNC_0("HDMI: DVI dual %d, "
        "max TMDS clock %d kHz\n",
        VAR_2->dvi_dual,
        VAR_2->max_tmds_clock);

 FUNC_2(VAR_0, VAR_1);
}
