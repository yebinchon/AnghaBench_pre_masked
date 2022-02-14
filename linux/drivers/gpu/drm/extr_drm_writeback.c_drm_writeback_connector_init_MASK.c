
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int id; } ;
struct drm_connector {char* name; TYPE_2__ base; scalar_t__ interlace_allowed; } ;
struct drm_writeback_connector {int encoder; struct drm_property_blob* pixel_formats_blob_ptr; int timeline_name; int fence_lock; int fence_context; int job_lock; int job_queue; struct drm_connector base; } ;
struct TYPE_3__ {int id; } ;
struct drm_property_blob {TYPE_1__ base; } ;
struct drm_mode_config {int writeback_pixel_formats_property; int writeback_fb_id_property; int writeback_out_fence_ptr_property; } ;
struct drm_encoder_helper_funcs {int dummy; } ;
struct drm_device {struct drm_mode_config mode_config; } ;
struct drm_connector_funcs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct drm_property_blob*) ;
 int FUNC_2 (struct drm_property_blob*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct drm_connector*,int *) ;
 int FUNC_6 (struct drm_connector*) ;
 int FUNC_7 (struct drm_device*,struct drm_connector*,struct drm_connector_funcs const*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,struct drm_encoder_helper_funcs const*) ;
 int FUNC_10 (struct drm_device*,int *,int *,int ,int *) ;
 int FUNC_11 (TYPE_2__*,int ,int ) ;
 int FUNC_12 (struct drm_property_blob*) ;
 struct drm_property_blob* FUNC_13 (struct drm_device*,int,int const*) ;
 int VAR_2 ;
 int FUNC_14 (int ,int,char*,int,char*) ;
 int FUNC_15 (int *) ;

int FUNC_16(struct drm_device *VAR_3,
     struct drm_writeback_connector *VAR_4,
     const struct drm_connector_funcs *VAR_5,
     const struct drm_encoder_helper_funcs *VAR_6,
     const u32 *VAR_7, int VAR_8)
{
 struct drm_property_blob *VAR_9;
 struct drm_connector *VAR_10 = &VAR_4->base;
 struct drm_mode_config *VAR_11 = &VAR_3->mode_config;
 int VAR_12 = FUNC_3(VAR_3);

 if (VAR_12 != 0)
  return VAR_12;

 VAR_9 = FUNC_13(VAR_3, VAR_8 * sizeof(*VAR_7),
     VAR_7);
 if (FUNC_1(VAR_9))
  return FUNC_2(VAR_9);

 FUNC_9(&VAR_4->encoder, VAR_6);
 VAR_12 = FUNC_10(VAR_3, &VAR_4->encoder,
          &VAR_2,
          VAR_1, ((void*)0));
 if (VAR_12)
  goto fail;

 VAR_10->interlace_allowed = 0;

 VAR_12 = FUNC_7(VAR_3, VAR_10, VAR_5,
     VAR_0);
 if (VAR_12)
  goto connector_fail;

 VAR_12 = FUNC_5(VAR_10,
      &VAR_4->encoder);
 if (VAR_12)
  goto attach_fail;

 FUNC_0(&VAR_4->job_queue);
 FUNC_15(&VAR_4->job_lock);

 VAR_4->fence_context = FUNC_4(1);
 FUNC_15(&VAR_4->fence_lock);
 FUNC_14(VAR_4->timeline_name,
   sizeof(VAR_4->timeline_name),
   "CONNECTOR:%d-%s", VAR_10->base.id, VAR_10->name);

 FUNC_11(&VAR_10->base,
       VAR_11->writeback_out_fence_ptr_property, 0);

 FUNC_11(&VAR_10->base,
       VAR_11->writeback_fb_id_property, 0);

 FUNC_11(&VAR_10->base,
       VAR_11->writeback_pixel_formats_property,
       VAR_9->base.id);
 VAR_4->pixel_formats_blob_ptr = VAR_9;

 return 0;

attach_fail:
 FUNC_6(VAR_10);
connector_fail:
 FUNC_8(&VAR_4->encoder);
fail:
 FUNC_12(VAR_9);
 return VAR_12;
}
