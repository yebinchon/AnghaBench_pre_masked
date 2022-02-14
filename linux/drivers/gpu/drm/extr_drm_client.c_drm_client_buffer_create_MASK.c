
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct drm_mode_create_dumb {int bpp; int handle; int pitch; void* height; void* width; } ;
struct drm_gem_object {int dummy; } ;
struct drm_format_info {int* cpp; } ;
struct drm_device {int dummy; } ;
struct drm_client_dev {int file; struct drm_device* dev; } ;
struct drm_client_buffer {struct drm_gem_object* gem; int pitch; int handle; struct drm_client_dev* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_client_buffer* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct drm_client_buffer*) ;
 struct drm_format_info* FUNC_2 (void*) ;
 struct drm_gem_object* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct drm_device*,struct drm_mode_create_dumb*,int ) ;
 struct drm_client_buffer* FUNC_5 (int,int ) ;

__attribute__((used)) static struct drm_client_buffer *
FUNC_6(struct drm_client_dev *VAR_3, u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 const struct drm_format_info *VAR_7 = FUNC_2(VAR_6);
 struct drm_mode_create_dumb VAR_8 = { };
 struct drm_device *VAR_9 = VAR_3->dev;
 struct drm_client_buffer *VAR_10;
 struct drm_gem_object *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 VAR_10->client = VAR_3;

 VAR_8.width = VAR_4;
 VAR_8.height = VAR_5;
 VAR_8.bpp = VAR_7->cpp[0] * 8;
 VAR_12 = FUNC_4(VAR_9, &VAR_8, VAR_3->file);
 if (VAR_12)
  goto err_delete;

 VAR_10->handle = VAR_8.handle;
 VAR_10->pitch = VAR_8.pitch;

 VAR_11 = FUNC_3(VAR_3->file, VAR_8.handle);
 if (!VAR_11) {
  VAR_12 = -VAR_0;
  goto err_delete;
 }

 VAR_10->gem = VAR_11;

 return VAR_10;

err_delete:
 FUNC_1(VAR_10);

 return FUNC_0(VAR_12);
}
