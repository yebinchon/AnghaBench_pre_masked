
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_mode_fb_cmd2 {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct TYPE_3__ {int* dev_private; } ;


 struct drm_framebuffer* FUNC_0 (TYPE_1__*,struct drm_mode_fb_cmd2*,int *) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_1(struct drm_mode_fb_cmd2 *VAR_1)
{
 int VAR_2 = 0;
 struct drm_framebuffer *VAR_3;

 VAR_0.dev_private = &VAR_2;
 VAR_3 = FUNC_0(&VAR_0, VAR_1, ((void*)0));
 return VAR_2;
}
