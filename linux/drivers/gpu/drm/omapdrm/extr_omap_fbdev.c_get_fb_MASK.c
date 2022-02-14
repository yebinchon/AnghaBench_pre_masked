
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct fb_info {struct drm_fb_helper* par; TYPE_1__ fix; } ;
struct drm_fb_helper {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static struct drm_fb_helper *FUNC_1(struct fb_info *VAR_1)
{
 if (!VAR_1 || FUNC_0(VAR_1->fix.id, VAR_0)) {

  return ((void*)0);
 }
 return VAR_1->par;
}
