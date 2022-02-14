
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_framebuffer {int * obj; } ;
struct drm_file {int dummy; } ;


 int FUNC_0 (struct drm_file*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct drm_framebuffer *VAR_0,
       struct drm_file *VAR_1, u32 *VAR_2)
{
 return FUNC_0(VAR_1, VAR_0->obj[0], VAR_2);
}
