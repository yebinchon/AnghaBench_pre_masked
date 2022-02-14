
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_buf_map {int virtual; int count; } ;


 int FUNC_0 (struct drm_device*,void*,int *,int *,int ,struct drm_file*) ;
 int VAR_0 ;

int FUNC_1(struct drm_device *VAR_1, void *VAR_2,
         struct drm_file *VAR_3)
{
 struct drm_buf_map *VAR_4 = VAR_2;
 return FUNC_0(VAR_1, VAR_2, &VAR_4->count,
        &VAR_4->virtual, VAR_0,
        VAR_3);
}
