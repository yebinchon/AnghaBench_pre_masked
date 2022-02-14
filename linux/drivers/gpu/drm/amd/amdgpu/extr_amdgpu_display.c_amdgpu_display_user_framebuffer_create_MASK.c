
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_mode_fb_cmd2 {int * handles; } ;
struct drm_gem_object {scalar_t__ import_attach; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* pdev; } ;
struct amdgpu_framebuffer {struct drm_framebuffer base; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_framebuffer* FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (struct drm_device*,struct amdgpu_framebuffer*,struct drm_mode_fb_cmd2 const*,struct drm_gem_object*) ;
 int FUNC_3 (int *,char*,int ) ;
 struct drm_gem_object* FUNC_4 (struct drm_file*,int ) ;
 int FUNC_5 (struct drm_gem_object*) ;
 int FUNC_6 (struct amdgpu_framebuffer*) ;
 struct amdgpu_framebuffer* FUNC_7 (int,int ) ;

struct drm_framebuffer *
FUNC_8(struct drm_device *VAR_4,
           struct drm_file *VAR_5,
           const struct drm_mode_fb_cmd2 *VAR_6)
{
 struct drm_gem_object *VAR_7;
 struct amdgpu_framebuffer *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_4(VAR_5, VAR_6->handles[0]);
 if (VAR_7 == ((void*)0)) {
  FUNC_3(&VAR_4->pdev->dev, "No GEM object associated to handle 0x%08X, "
   "can't create framebuffer\n", VAR_6->handles[0]);
  return FUNC_1(-VAR_1);
 }


 if (VAR_7->import_attach) {
  FUNC_0("Cannot create framebuffer from imported dma_buf\n");
  return FUNC_1(-VAR_0);
 }

 VAR_8 = FUNC_7(sizeof(*VAR_8), VAR_3);
 if (VAR_8 == ((void*)0)) {
  FUNC_5(VAR_7);
  return FUNC_1(-VAR_2);
 }

 VAR_9 = FUNC_2(VAR_4, VAR_8, VAR_6, VAR_7);
 if (VAR_9) {
  FUNC_6(VAR_8);
  FUNC_5(VAR_7);
  return FUNC_1(VAR_9);
 }

 return &VAR_8->base;
}
