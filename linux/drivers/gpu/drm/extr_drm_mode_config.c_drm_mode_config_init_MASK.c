
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ num_total_plane; scalar_t__ num_encoder; scalar_t__ num_crtc; scalar_t__ num_connector; scalar_t__ num_fb; int connector_free_work; int connector_free_list; int connector_list_lock; int connector_ida; int tile_idr; int object_idr; int privobj_list; int plane_list; int property_blob_list; int property_list; int encoder_list; int connector_list; int crtc_list; int fb_list; int blob_lock; int fb_lock; int idr_mutex; int connection_mutex; int mutex; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct drm_device *VAR_1)
{
 FUNC_7(&VAR_1->mode_config.mutex);
 FUNC_3(&VAR_1->mode_config.connection_mutex);
 FUNC_7(&VAR_1->mode_config.idr_mutex);
 FUNC_7(&VAR_1->mode_config.fb_lock);
 FUNC_7(&VAR_1->mode_config.blob_lock);
 FUNC_0(&VAR_1->mode_config.fb_list);
 FUNC_0(&VAR_1->mode_config.crtc_list);
 FUNC_0(&VAR_1->mode_config.connector_list);
 FUNC_0(&VAR_1->mode_config.encoder_list);
 FUNC_0(&VAR_1->mode_config.property_list);
 FUNC_0(&VAR_1->mode_config.property_blob_list);
 FUNC_0(&VAR_1->mode_config.plane_list);
 FUNC_0(&VAR_1->mode_config.privobj_list);
 FUNC_5(&VAR_1->mode_config.object_idr);
 FUNC_5(&VAR_1->mode_config.tile_idr);
 FUNC_4(&VAR_1->mode_config.connector_ida);
 FUNC_8(&VAR_1->mode_config.connector_list_lock);

 FUNC_6(&VAR_1->mode_config.connector_free_list);
 FUNC_1(&VAR_1->mode_config.connector_free_work, VAR_0);

 FUNC_2(VAR_1);


 VAR_1->mode_config.num_fb = 0;
 VAR_1->mode_config.num_connector = 0;
 VAR_1->mode_config.num_crtc = 0;
 VAR_1->mode_config.num_encoder = 0;
 VAR_1->mode_config.num_total_plane = 0;
}
