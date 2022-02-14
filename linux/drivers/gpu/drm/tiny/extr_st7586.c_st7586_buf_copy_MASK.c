
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_rect {int dummy; } ;
struct TYPE_2__ {struct dma_buf_attachment* import_attach; } ;
struct drm_gem_cma_object {void* vaddr; TYPE_1__ base; } ;
struct drm_framebuffer {int dummy; } ;
struct dma_buf_attachment {int dmabuf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 struct drm_gem_cma_object* FUNC_2 (struct drm_framebuffer*,int ) ;
 int FUNC_3 (void*,void*,struct drm_framebuffer*,struct drm_rect*) ;

__attribute__((used)) static int FUNC_4(void *VAR_1, struct drm_framebuffer *VAR_2,
      struct drm_rect *VAR_3)
{
 struct drm_gem_cma_object *VAR_4 = FUNC_2(VAR_2, 0);
 struct dma_buf_attachment *VAR_5 = VAR_4->base.import_attach;
 void *VAR_6 = VAR_4->vaddr;
 int VAR_7 = 0;

 if (VAR_5) {
  VAR_7 = FUNC_0(VAR_5->dmabuf,
            VAR_0);
  if (VAR_7)
   return VAR_7;
 }

 FUNC_3(VAR_1, VAR_6, VAR_2, VAR_3);

 if (VAR_5)
  VAR_7 = FUNC_1(VAR_5->dmabuf,
          VAR_0);

 return VAR_7;
}
