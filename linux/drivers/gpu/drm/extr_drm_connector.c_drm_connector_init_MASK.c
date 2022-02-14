
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ida {int dummy; } ;
struct drm_mode_config {struct ida connector_ida; int prop_crtc_id; int tile_property; int non_desktop_property; int link_status_property; int dpms_property; int connector_list_lock; int num_connector; int connector_list; } ;
struct drm_device {struct drm_mode_config mode_config; } ;
struct drm_connector_funcs {int atomic_duplicate_state; int atomic_destroy_state; } ;
struct TYPE_7__ {int * properties; } ;
struct TYPE_6__ {int panel_orientation; } ;
struct drm_connector {int index; int connector_type; int connector_type_id; TYPE_2__ base; int * debugfs_entry; int head; TYPE_1__ display_info; int status; int * tile_blob_ptr; int * edid_blob_ptr; int mutex; int modes; int probed_modes; int name; struct drm_connector_funcs const* funcs; struct drm_device* dev; int properties; } ;
struct TYPE_8__ {int name; struct ida ida; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_device*,TYPE_2__*,int ,int,int ) ;
 int VAR_7 ;
 int FUNC_4 (struct drm_connector*) ;
 TYPE_4__* VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct drm_connector*) ;
 scalar_t__ FUNC_6 (struct drm_device*,int ) ;
 scalar_t__ FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*,TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ,int ) ;
 void* FUNC_10 (struct ida*,int,int,int ) ;
 int FUNC_11 (struct ida*,int) ;
 int FUNC_12 (int ,char*,int ,int) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

int FUNC_17(struct drm_device *VAR_10,
         struct drm_connector *VAR_11,
         const struct drm_connector_funcs *VAR_12,
         int VAR_13)
{
 struct drm_mode_config *VAR_14 = &VAR_10->mode_config;
 int VAR_15;
 struct ida *VAR_16 =
  &VAR_8[VAR_13].ida;

 FUNC_2(FUNC_7(VAR_10) &&
  (!VAR_12->atomic_destroy_state ||
   !VAR_12->atomic_duplicate_state));

 VAR_15 = FUNC_3(VAR_10, &VAR_11->base,
        VAR_3,
        0, VAR_9);
 if (VAR_15)
  return VAR_15;

 VAR_11->base.properties = &VAR_11->properties;
 VAR_11->dev = VAR_10;
 VAR_11->funcs = VAR_12;


 VAR_15 = FUNC_10(&VAR_14->connector_ida, 0, 32, VAR_6);
 if (VAR_15 < 0) {
  FUNC_0("Failed to allocate %s connector index: %d\n",
         VAR_8[VAR_13].name,
         VAR_15);
  goto out_put;
 }
 VAR_11->index = VAR_15;
 VAR_15 = 0;

 VAR_11->connector_type = VAR_13;
 VAR_11->connector_type_id =
  FUNC_10(VAR_16, 1, 0, VAR_6);
 if (VAR_11->connector_type_id < 0) {
  VAR_15 = VAR_11->connector_type_id;
  goto out_put_id;
 }
 VAR_11->name =
  FUNC_12(VAR_6, "%s-%d",
     VAR_8[VAR_13].name,
     VAR_11->connector_type_id);
 if (!VAR_11->name) {
  VAR_15 = -VAR_5;
  goto out_put_type_id;
 }

 FUNC_1(&VAR_11->probed_modes);
 FUNC_1(&VAR_11->modes);
 FUNC_14(&VAR_11->mutex);
 VAR_11->edid_blob_ptr = ((void*)0);
 VAR_11->tile_blob_ptr = ((void*)0);
 VAR_11->status = VAR_7;
 VAR_11->display_info.panel_orientation =
  VAR_4;

 FUNC_5(VAR_11);



 FUNC_15(&VAR_14->connector_list_lock);
 FUNC_13(&VAR_11->head, &VAR_14->connector_list);
 VAR_14->num_connector++;
 FUNC_16(&VAR_14->connector_list_lock);

 if (VAR_13 != VAR_1 &&
     VAR_13 != VAR_2)
  FUNC_4(VAR_11);

 FUNC_9(&VAR_11->base,
          VAR_14->dpms_property, 0);

 FUNC_9(&VAR_11->base,
       VAR_14->link_status_property,
       0);

 FUNC_9(&VAR_11->base,
       VAR_14->non_desktop_property,
       0);
 FUNC_9(&VAR_11->base,
       VAR_14->tile_property,
       0);

 if (FUNC_6(VAR_10, VAR_0)) {
  FUNC_9(&VAR_11->base, VAR_14->prop_crtc_id, 0);
 }

 VAR_11->debugfs_entry = ((void*)0);
out_put_type_id:
 if (VAR_15)
  FUNC_11(VAR_16, VAR_11->connector_type_id);
out_put_id:
 if (VAR_15)
  FUNC_11(&VAR_14->connector_ida, VAR_11->index);
out_put:
 if (VAR_15)
  FUNC_8(VAR_10, &VAR_11->base);

 return VAR_15;
}
