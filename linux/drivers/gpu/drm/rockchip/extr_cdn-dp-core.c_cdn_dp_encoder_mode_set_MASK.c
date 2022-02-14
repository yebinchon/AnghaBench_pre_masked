
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_info {int color_depth; int v_sync_polarity; int h_sync_polarity; int color_fmt; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int flags; } ;
struct drm_display_info {int bpc; } ;
struct TYPE_2__ {struct drm_display_info display_info; } ;
struct cdn_dp_device {int mode; struct video_info video_info; TYPE_1__ connector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cdn_dp_device* FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (int *,struct drm_display_mode*,int) ;

__attribute__((used)) static void FUNC_2(struct drm_encoder *VAR_3,
        struct drm_display_mode *VAR_4,
        struct drm_display_mode *VAR_5)
{
 struct cdn_dp_device *VAR_6 = FUNC_0(VAR_3);
 struct drm_display_info *VAR_7 = &VAR_6->connector.display_info;
 struct video_info *VAR_8 = &VAR_6->video_info;

 switch (VAR_7->bpc) {
 case 10:
  VAR_8->color_depth = 10;
  break;
 case 6:
  VAR_8->color_depth = 6;
  break;
 default:
  VAR_8->color_depth = 8;
  break;
 }

 VAR_8->color_fmt = VAR_2;
 VAR_8->v_sync_polarity = !!(VAR_4->flags & VAR_1);
 VAR_8->h_sync_polarity = !!(VAR_4->flags & VAR_0);

 FUNC_1(&VAR_6->mode, VAR_5, sizeof(*VAR_4));
}
