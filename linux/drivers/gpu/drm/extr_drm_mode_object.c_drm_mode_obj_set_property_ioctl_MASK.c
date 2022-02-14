
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_property {int dev; } ;
struct drm_mode_object {int properties; } ;
struct drm_mode_obj_set_property {int value; int prop_id; int obj_type; int obj_id; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_device*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct drm_property* FUNC_2 (struct drm_mode_object*,int ) ;
 struct drm_mode_object* FUNC_3 (struct drm_device*,struct drm_file*,int ,int ) ;
 int FUNC_4 (struct drm_mode_object*) ;
 int FUNC_5 (struct drm_mode_object*,struct drm_file*,struct drm_property*,int ) ;
 int FUNC_6 (struct drm_mode_object*,struct drm_property*,int ) ;

int FUNC_7(struct drm_device *VAR_4, void *VAR_5,
        struct drm_file *VAR_6)
{
 struct drm_mode_obj_set_property *VAR_7 = VAR_5;
 struct drm_mode_object *VAR_8;
 struct drm_property *VAR_9;
 int VAR_10 = -VAR_1;

 if (!FUNC_0(VAR_4, VAR_0))
  return -VAR_3;

 VAR_8 = FUNC_3(VAR_4, VAR_6, VAR_7->obj_id, VAR_7->obj_type);
 if (!VAR_8)
  return -VAR_2;

 if (!VAR_8->properties)
  goto out_unref;

 VAR_9 = FUNC_2(VAR_8, VAR_7->prop_id);
 if (!VAR_9)
  goto out_unref;

 if (FUNC_1(VAR_9->dev))
  VAR_10 = FUNC_5(VAR_8, VAR_6, VAR_9, VAR_7->value);
 else
  VAR_10 = FUNC_6(VAR_8, VAR_9, VAR_7->value);

out_unref:
 FUNC_4(VAR_8);
 return VAR_10;
}
