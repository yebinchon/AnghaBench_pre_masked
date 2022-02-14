
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_simple_display_pipe {int encoder; } ;
struct drm_bridge {int dummy; } ;


 int FUNC_0 (int *,struct drm_bridge*,int *) ;

int FUNC_1(struct drm_simple_display_pipe *VAR_0,
       struct drm_bridge *VAR_1)
{
 return FUNC_0(&VAR_0->encoder, VAR_1, ((void*)0));
}
