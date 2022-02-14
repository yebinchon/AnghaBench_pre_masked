
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_property_blob {size_t length; int head_global; int base; void* data; struct drm_device* dev; int head_file; } ;
struct TYPE_2__ {int blob_lock; int property_blob_list; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_property_blob* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (struct drm_device*,int *,int ,int,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct drm_property_blob*) ;
 struct drm_property_blob* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (void*,void const*,size_t) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

struct drm_property_blob *
FUNC_9(struct drm_device *VAR_6, size_t VAR_7,
    const void *VAR_8)
{
 struct drm_property_blob *VAR_9;
 int VAR_10;

 if (!VAR_7 || VAR_7 > VAR_4 - sizeof(struct drm_property_blob))
  return FUNC_0(-VAR_1);

 VAR_9 = FUNC_4(sizeof(struct drm_property_blob)+VAR_7, VAR_3);
 if (!VAR_9)
  return FUNC_0(-VAR_2);



 FUNC_1(&VAR_9->head_file);
 VAR_9->data = (void *)VAR_9 + sizeof(*VAR_9);
 VAR_9->length = VAR_7;
 VAR_9->dev = VAR_6;

 if (VAR_8)
  FUNC_6(VAR_9->data, VAR_8, VAR_7);

 VAR_10 = FUNC_2(VAR_6, &VAR_9->base, VAR_0,
        1, VAR_5);
 if (VAR_10) {
  FUNC_3(VAR_9);
  return FUNC_0(-VAR_1);
 }

 FUNC_7(&VAR_6->mode_config.blob_lock);
 FUNC_5(&VAR_9->head_global,
               &VAR_6->mode_config.property_blob_list);
 FUNC_8(&VAR_6->mode_config.blob_lock);

 return VAR_9;
}
