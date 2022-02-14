
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tile_property; } ;
struct drm_device {TYPE_2__ mode_config; } ;
struct drm_connector {int tile_is_single_monitor; int num_h_tile; int num_v_tile; int tile_h_loc; int tile_v_loc; int tile_h_size; int tile_v_size; int base; int tile_blob_ptr; TYPE_1__* tile_group; int has_tile; struct drm_device* dev; } ;
struct TYPE_3__ {int id; } ;


 int FUNC_0 (struct drm_device*,int *,scalar_t__,char*,int *,int ) ;
 int FUNC_1 (char*,int,char*,int,int,int,int,int,int,int,int) ;
 scalar_t__ FUNC_2 (char*) ;

int FUNC_3(struct drm_connector *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 char VAR_2[256];
 int VAR_3;

 if (!VAR_0->has_tile) {
  VAR_3 = FUNC_0(VAR_1,
                                          &VAR_0->tile_blob_ptr,
                                          0,
                                          ((void*)0),
                                          &VAR_0->base,
                                          VAR_1->mode_config.tile_property);
  return VAR_3;
 }

 FUNC_1(VAR_2, 256, "%d:%d:%d:%d:%d:%d:%d:%d",
   VAR_0->tile_group->id, VAR_0->tile_is_single_monitor,
   VAR_0->num_h_tile, VAR_0->num_v_tile,
   VAR_0->tile_h_loc, VAR_0->tile_v_loc,
   VAR_0->tile_h_size, VAR_0->tile_v_size);

 VAR_3 = FUNC_0(VAR_1,
                                        &VAR_0->tile_blob_ptr,
                                        FUNC_2(VAR_2) + 1,
                                        VAR_2,
                                        &VAR_0->base,
                                        VAR_1->mode_config.tile_property);
 return VAR_3;
}
