
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vmw_resource {TYPE_1__* dev_priv; scalar_t__ backup_offset; int backup; } ;
struct vmw_surface {struct vmw_resource res; } ;
struct vmw_buffer_object {int dummy; } ;
struct drm_vmw_size {unsigned int width; int depth; int height; int member_0; } ;
struct drm_mode_fb_cmd2 {int pixel_format; unsigned int* pitches; int height; } ;
struct drm_format_name_buf {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int cmdbuf_mutex; } ;


 int FUNC_0 (char*,...) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,struct drm_format_name_buf*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vmw_buffer_object*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct vmw_resource*,int,int) ;
 int FUNC_7 (struct vmw_resource*,int,int,int,int *,int ) ;
 int FUNC_8 (struct drm_device*,int ,int ,int ,int,int,int ,int ,struct drm_vmw_size,int ,int ,struct vmw_surface**) ;

__attribute__((used)) static int FUNC_9(struct drm_device *VAR_6,
          const struct drm_mode_fb_cmd2 *VAR_7,
          struct vmw_buffer_object *VAR_8,
          struct vmw_surface **VAR_9)
{
 uint32_t VAR_10;
 struct drm_vmw_size VAR_11 = {0};
 struct vmw_resource *VAR_12;
 unsigned int VAR_13;
 struct drm_format_name_buf VAR_14;
 int VAR_15;

 switch (VAR_7->pixel_format) {
 case 131:
 case 128:
  VAR_10 = VAR_5;
  VAR_13 = 4;
  break;

 case 130:
 case 129:
  VAR_10 = VAR_4;
  VAR_13 = 2;
  break;

 case 8:
  VAR_10 = VAR_3;
  VAR_13 = 1;
  break;

 default:
  FUNC_0("Invalid framebuffer format %s\n",
     FUNC_1(VAR_7->pixel_format, &VAR_14));
  return -VAR_0;
 }

 VAR_11.width = VAR_7->pitches[0] / VAR_13;
 VAR_11.height = VAR_7->height;
 VAR_11.depth = 1;

 VAR_15 = FUNC_8(VAR_6,
      0,
      0,
      VAR_10,
      1,
      1,
      0,
      0,
      VAR_11,
      VAR_1,
      VAR_2,
      VAR_9);
 if (VAR_15) {
  FUNC_0("Failed to allocate proxy content buffer\n");
  return VAR_15;
 }

 VAR_12 = &(*VAR_9)->res;


 FUNC_2(&VAR_12->dev_priv->cmdbuf_mutex);
 (void) FUNC_6(VAR_12, 0, 1);
 FUNC_5(&VAR_12->backup);
 VAR_12->backup = FUNC_4(VAR_8);
 VAR_12->backup_offset = 0;
 FUNC_7(VAR_12, 0, 0, 0, ((void*)0), 0);
 FUNC_3(&VAR_12->dev_priv->cmdbuf_mutex);

 return 0;
}
