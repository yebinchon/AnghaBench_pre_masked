
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_map_list {struct drm_local_map* map; } ;
struct drm_local_map {int dummy; } ;
struct drm_device {int dummy; } ;
typedef int resource_size_t ;
typedef enum drm_map_type { ____Placeholder_drm_map_type } drm_map_type ;
typedef enum drm_map_flags { ____Placeholder_drm_map_flags } drm_map_flags ;


 int FUNC_0 (struct drm_device*,int ,unsigned int,int,int,struct drm_map_list**) ;

int FUNC_1(struct drm_device *VAR_0, resource_size_t VAR_1,
        unsigned int VAR_2, enum drm_map_type VAR_3,
        enum drm_map_flags VAR_4, struct drm_local_map **VAR_5)
{
 struct drm_map_list *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, &VAR_6);
 if (!VAR_7)
  *VAR_5 = VAR_6->map;
 return VAR_7;
}
