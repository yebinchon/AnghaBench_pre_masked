
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmw_surface {int res; } ;
struct vmw_private {int dummy; } ;
struct vmw_framebuffer {int dummy; } ;
struct drm_vmw_rect {int dummy; } ;
struct drm_file {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 (struct vmw_private*,struct vmw_framebuffer*,int *,struct drm_vmw_rect*,int *,int ,int ,int ,int,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct vmw_private *VAR_0,
       struct drm_file *VAR_1,
       struct vmw_framebuffer *VAR_2,
       struct vmw_surface *VAR_3,
       uint32_t VAR_4,
       int32_t VAR_5, int32_t VAR_6,
       struct drm_vmw_rect *VAR_7,
       uint32_t VAR_8)
{
 return FUNC_0(VAR_0, VAR_2, ((void*)0), VAR_7,
         &VAR_3->res, VAR_5, VAR_6,
         VAR_8, 1, ((void*)0), ((void*)0));
}
