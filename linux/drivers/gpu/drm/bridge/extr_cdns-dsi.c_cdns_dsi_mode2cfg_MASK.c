
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_display_mode {unsigned int htotal; unsigned int hsync_end; unsigned int hsync_start; unsigned int crtc_htotal; unsigned int crtc_hsync_end; unsigned int crtc_hsync_start; unsigned int hdisplay; unsigned int crtc_hdisplay; } ;
struct cdns_dsi_output {TYPE_1__* dev; } ;
struct cdns_dsi_cfg {void* hfp; void* hact; void* hsa; void* hbp; } ;
struct cdns_dsi {struct cdns_dsi_output output; } ;
struct TYPE_2__ {int mode_flags; int lanes; int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (unsigned int,int,int ) ;
 int FUNC_1 (struct cdns_dsi_cfg*,int ,int) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (struct drm_display_mode const*,int) ;

__attribute__((used)) static int FUNC_4(struct cdns_dsi *VAR_4,
        const struct drm_display_mode *VAR_5,
        struct cdns_dsi_cfg *VAR_6,
        bool VAR_7)
{
 struct cdns_dsi_output *VAR_8 = &VAR_4->output;
 unsigned int VAR_9;
 bool VAR_10 = 0;
 int VAR_11, VAR_12;

 FUNC_1(VAR_6, 0, sizeof(*VAR_6));

 if (VAR_8->dev->mode_flags & VAR_3)
  VAR_10 = 1;

 VAR_11 = FUNC_2(VAR_8->dev->format);
 VAR_12 = VAR_8->dev->lanes;

 if (VAR_7)
  VAR_9 = VAR_5->htotal -
        (VAR_10 ? VAR_5->hsync_end : VAR_5->hsync_start);
 else
  VAR_9 = VAR_5->crtc_htotal -
        (VAR_10 ?
         VAR_5->crtc_hsync_end : VAR_5->crtc_hsync_start);

 VAR_6->hbp = FUNC_0(VAR_9, VAR_11, VAR_0);

 if (VAR_10) {
  if (VAR_7)
   VAR_9 = VAR_5->hsync_end - VAR_5->hsync_start;
  else
   VAR_9 = VAR_5->crtc_hsync_end - VAR_5->crtc_hsync_start;

  VAR_6->hsa = FUNC_0(VAR_9, VAR_11,
       VAR_2);
 }

 VAR_6->hact = FUNC_0(VAR_7 ?
       VAR_5->hdisplay : VAR_5->crtc_hdisplay,
       VAR_11, 0);
 VAR_6->hfp = FUNC_0(FUNC_3(VAR_5, VAR_7),
      VAR_11, VAR_1);

 return 0;
}
