
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int supported; int low_rates; } ;
struct drm_scdc {int supported; int read_request; TYPE_1__ scrambling; } ;
struct drm_hdmi_info {struct drm_scdc scdc; } ;
struct drm_display_info {int has_hdmi_infoframe; int max_tmds_clock; struct drm_hdmi_info hdmi; } ;
struct drm_connector {struct drm_display_info display_info; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct drm_connector*,int const*) ;

__attribute__((used)) static void FUNC_2(struct drm_connector *VAR_0,
     const u8 *VAR_1)
{
 struct drm_display_info *VAR_2 = &VAR_0->display_info;
 struct drm_hdmi_info *VAR_3 = &VAR_2->hdmi;

 VAR_2->has_hdmi_infoframe = 1;

 if (VAR_1[6] & 0x80) {
  VAR_3->scdc.supported = 1;
  if (VAR_1[6] & 0x40)
   VAR_3->scdc.read_request = 1;
 }
 if (VAR_1[5]) {

  u32 VAR_4 = VAR_1[5] * 5000;
  struct drm_scdc *VAR_5 = &VAR_3->scdc;

  if (VAR_4 > 340000) {
   VAR_2->max_tmds_clock = VAR_4;
   FUNC_0("HF-VSDB: max TMDS clock %d kHz\n",
    VAR_2->max_tmds_clock);
  }

  if (VAR_5->supported) {
   VAR_5->scrambling.supported = 1;


   if ((VAR_1[6] & 0x8))
    VAR_5->scrambling.low_rates = 1;
  }
 }

 FUNC_1(VAR_0, VAR_1);
}
