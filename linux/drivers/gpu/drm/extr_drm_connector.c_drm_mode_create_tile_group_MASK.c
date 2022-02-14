
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_tile_group {int id; struct drm_device* dev; int group_data; int refcount; } ;
struct TYPE_2__ {int idr_mutex; int tile_idr; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct drm_tile_group*,int,int ,int ) ;
 int FUNC_1 (struct drm_tile_group*) ;
 int FUNC_2 (int *) ;
 struct drm_tile_group* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

struct drm_tile_group *FUNC_7(struct drm_device *VAR_1,
        char VAR_2[8])
{
 struct drm_tile_group *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_2(&VAR_3->refcount);
 FUNC_4(VAR_3->group_data, VAR_2, 8);
 VAR_3->dev = VAR_1;

 FUNC_5(&VAR_1->mode_config.idr_mutex);
 VAR_4 = FUNC_0(&VAR_1->mode_config.tile_idr, VAR_3, 1, 0, VAR_0);
 if (VAR_4 >= 0) {
  VAR_3->id = VAR_4;
 } else {
  FUNC_1(VAR_3);
  VAR_3 = ((void*)0);
 }

 FUNC_6(&VAR_1->mode_config.idr_mutex);
 return VAR_3;
}
