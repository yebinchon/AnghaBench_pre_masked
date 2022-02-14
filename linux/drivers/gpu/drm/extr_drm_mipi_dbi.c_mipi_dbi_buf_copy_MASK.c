
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_rect {int dummy; } ;
struct drm_gem_object {struct dma_buf_attachment* import_attach; } ;
struct drm_gem_cma_object {void* vaddr; } ;
struct drm_framebuffer {TYPE_2__* format; TYPE_1__* dev; } ;
struct drm_format_name_buf {int dummy; } ;
struct dma_buf_attachment {int dmabuf; } ;
struct TYPE_4__ {int format; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (void*,void*,struct drm_framebuffer*,struct drm_rect*) ;
 int FUNC_4 (void*,void*,struct drm_framebuffer*,struct drm_rect*) ;
 int FUNC_5 (void*,void*,struct drm_framebuffer*,struct drm_rect*,int) ;
 struct drm_gem_object* FUNC_6 (struct drm_framebuffer*,int ) ;
 int FUNC_7 (int,struct drm_format_name_buf*) ;
 struct drm_gem_cma_object* FUNC_8 (struct drm_gem_object*) ;

int FUNC_9(void *VAR_2, struct drm_framebuffer *VAR_3,
        struct drm_rect *VAR_4, bool VAR_5)
{
 struct drm_gem_object *VAR_6 = FUNC_6(VAR_3, 0);
 struct drm_gem_cma_object *VAR_7 = FUNC_8(VAR_6);
 struct dma_buf_attachment *VAR_8 = VAR_6->import_attach;
 struct drm_format_name_buf VAR_9;
 void *VAR_10 = VAR_7->vaddr;
 int VAR_11 = 0;

 if (VAR_8) {
  VAR_11 = FUNC_1(VAR_8->dmabuf,
            VAR_0);
  if (VAR_11)
   return VAR_11;
 }

 switch (VAR_3->format->format) {
 case 129:
  if (VAR_5)
   FUNC_4(VAR_2, VAR_10, VAR_3, VAR_4);
  else
   FUNC_3(VAR_2, VAR_10, VAR_3, VAR_4);
  break;
 case 128:
  FUNC_5(VAR_2, VAR_10, VAR_3, VAR_4, VAR_5);
  break;
 default:
  FUNC_0(VAR_3->dev->dev, "Format is not supported: %s\n",
        FUNC_7(VAR_3->format->format,
       &VAR_9));
  return -VAR_1;
 }

 if (VAR_8)
  VAR_11 = FUNC_2(VAR_8->dmabuf,
          VAR_0);
 return VAR_11;
}
