
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_framebuffer {struct msm_format const* format; } ;
struct msm_format {int dummy; } ;
struct drm_framebuffer {int dummy; } ;


 struct msm_framebuffer* FUNC_0 (struct drm_framebuffer*) ;

const struct msm_format *FUNC_1(struct drm_framebuffer *VAR_0)
{
 struct msm_framebuffer *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->format;
}
