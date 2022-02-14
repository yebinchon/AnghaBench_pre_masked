
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_map_list {scalar_t__ user_token; } ;
struct drm_map {scalar_t__ type; int mtrr; void* handle; int flags; int size; int offset; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct drm_device*,int ,int ,scalar_t__,int ,struct drm_map_list**) ;
 int FUNC_2 (struct drm_device*,int ) ;

int FUNC_3(struct drm_device *VAR_7, void *VAR_8,
       struct drm_file *VAR_9)
{
 struct drm_map *VAR_10 = VAR_8;
 struct drm_map_list *VAR_11;
 int VAR_12;

 if (!(FUNC_0(VAR_0) || VAR_10->type == VAR_5 || VAR_10->type == VAR_6))
  return -VAR_4;

 if (!FUNC_2(VAR_7, VAR_1) &&
     !FUNC_2(VAR_7, VAR_2))
  return -VAR_3;

 VAR_12 = FUNC_1(VAR_7, VAR_10->offset, VAR_10->size, VAR_10->type,
         VAR_10->flags, &VAR_11);

 if (VAR_12)
  return VAR_12;


 VAR_10->handle = (void *)(unsigned long)VAR_11->user_token;







 VAR_10->mtrr = -1;

 return 0;
}
