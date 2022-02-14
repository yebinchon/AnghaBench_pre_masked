
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct drm_display_mode {scalar_t__ crtc_clock; } ;
struct TYPE_4__ {struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct TYPE_5__ {scalar_t__ clock; int config; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,scalar_t__,...) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static u32 FUNC_2(const struct intel_crtc_state *VAR_1)
{
 const struct drm_display_mode *VAR_2 =
  &VAR_1->base.adjusted_mode;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_2->crtc_clock == VAR_0[VAR_3].clock)
   break;
 }

 if (VAR_3 == FUNC_0(VAR_0)) {
  FUNC_1("HDMI audio pixel clock setting for %d not found, falling back to defaults\n",
         VAR_2->crtc_clock);
  VAR_3 = 1;
 }

 FUNC_1("Configuring HDMI audio for pixel clock %d (0x%08x)\n",
        VAR_0[VAR_3].clock,
        VAR_0[VAR_3].config);

 return VAR_0[VAR_3].config;
}
