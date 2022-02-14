
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_property_blob {scalar_t__ length; int data; } ;
struct drm_mode_get_blob {scalar_t__ length; int data; int blob_id; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (struct drm_device*,int ) ;
 int FUNC_2 (struct drm_property_blob*) ;
 struct drm_property_blob* FUNC_3 (struct drm_device*,int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct drm_device *VAR_4,
      void *VAR_5, struct drm_file *VAR_6)
{
 struct drm_mode_get_blob *VAR_7 = VAR_5;
 struct drm_property_blob *VAR_8;
 int VAR_9 = 0;

 if (!FUNC_1(VAR_4, VAR_0))
  return -VAR_3;

 VAR_8 = FUNC_3(VAR_4, VAR_7->blob_id);
 if (!VAR_8)
  return -VAR_2;

 if (VAR_7->length == VAR_8->length) {
  if (FUNC_0(FUNC_4(VAR_7->data),
     VAR_8->data,
     VAR_8->length)) {
   VAR_9 = -VAR_1;
   goto unref;
  }
 }
 VAR_7->length = VAR_8->length;
unref:
 FUNC_2(VAR_8);

 return VAR_9;
}
