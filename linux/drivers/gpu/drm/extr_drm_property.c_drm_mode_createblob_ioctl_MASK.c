
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; } ;
struct drm_property_blob {int head_file; TYPE_1__ base; int data; } ;
struct drm_mode_create_blob {int blob_id; int length; int data; } ;
struct drm_file {int blobs; } ;
struct TYPE_4__ {int blob_lock; } ;
struct drm_device {TYPE_2__ mode_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct drm_property_blob*) ;
 int FUNC_1 (struct drm_property_blob*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct drm_device*,int ) ;
 int FUNC_4 (struct drm_property_blob*) ;
 struct drm_property_blob* FUNC_5 (struct drm_device*,int ,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

int FUNC_10(struct drm_device *VAR_3,
         void *VAR_4, struct drm_file *VAR_5)
{
 struct drm_mode_create_blob *VAR_6 = VAR_4;
 struct drm_property_blob *VAR_7;
 int VAR_8 = 0;

 if (!FUNC_3(VAR_3, VAR_0))
  return -VAR_2;

 VAR_7 = FUNC_5(VAR_3, VAR_6->length, ((void*)0));
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 if (FUNC_2(VAR_7->data,
      FUNC_9(VAR_6->data),
      VAR_6->length)) {
  VAR_8 = -VAR_1;
  goto out_blob;
 }




 FUNC_7(&VAR_3->mode_config.blob_lock);
 VAR_6->blob_id = VAR_7->base.id;
 FUNC_6(&VAR_7->head_file, &VAR_5->blobs);
 FUNC_8(&VAR_3->mode_config.blob_lock);

 return 0;

out_blob:
 FUNC_4(VAR_7);
 return VAR_8;
}
