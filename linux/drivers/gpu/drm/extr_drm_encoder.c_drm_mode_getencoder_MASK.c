
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_mode_get_encoder {int possible_clones; int possible_crtcs; int encoder_id; int encoder_type; scalar_t__ crtc_id; } ;
struct drm_file {int dummy; } ;
struct TYPE_6__ {int id; } ;
struct drm_encoder {int possible_clones; int possible_crtcs; TYPE_3__ base; int encoder_type; } ;
struct TYPE_5__ {int connection_mutex; } ;
struct drm_device {TYPE_2__ mode_config; } ;
struct TYPE_4__ {scalar_t__ id; } ;
struct drm_crtc {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_device*,int ) ;
 struct drm_encoder* FUNC_1 (struct drm_device*,struct drm_file*,int ) ;
 struct drm_crtc* FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (struct drm_file*,int ) ;
 scalar_t__ FUNC_4 (struct drm_file*,scalar_t__) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct drm_device *VAR_3, void *VAR_4,
   struct drm_file *VAR_5)
{
 struct drm_mode_get_encoder *VAR_6 = VAR_4;
 struct drm_encoder *VAR_7;
 struct drm_crtc *VAR_8;

 if (!FUNC_0(VAR_3, VAR_0))
  return -VAR_2;

 VAR_7 = FUNC_1(VAR_3, VAR_5, VAR_6->encoder_id);
 if (!VAR_7)
  return -VAR_1;

 FUNC_5(&VAR_3->mode_config.connection_mutex, ((void*)0));
 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8 && FUNC_4(VAR_5, VAR_8->base.id))
  VAR_6->crtc_id = VAR_8->base.id;
 else
  VAR_6->crtc_id = 0;
 FUNC_6(&VAR_3->mode_config.connection_mutex);

 VAR_6->encoder_type = VAR_7->encoder_type;
 VAR_6->encoder_id = VAR_7->base.id;
 VAR_6->possible_crtcs = FUNC_3(VAR_5,
         VAR_7->possible_crtcs);
 VAR_6->possible_clones = VAR_7->possible_clones;

 return 0;
}
