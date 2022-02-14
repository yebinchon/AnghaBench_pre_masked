
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_framebuffer {int * obj; } ;
struct drm_file {int dummy; } ;


 int FUNC_0 (struct drm_file*,int ,unsigned int*) ;

int FUNC_1(struct drm_framebuffer *VAR_0, struct drm_file *VAR_1,
        unsigned int *VAR_2)
{
 return FUNC_0(VAR_1, VAR_0->obj[0], VAR_2);
}
