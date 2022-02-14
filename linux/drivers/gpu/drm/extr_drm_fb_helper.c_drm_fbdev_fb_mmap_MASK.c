
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct fb_info {struct drm_fb_helper* par; } ;
struct drm_fb_helper {TYPE_3__* buffer; TYPE_2__* dev; } ;
struct TYPE_6__ {int gem; } ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_4__ {int (* gem_prime_mmap ) (int ,struct vm_area_struct*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_1, struct vm_area_struct *VAR_2)
{
 struct drm_fb_helper *VAR_3 = VAR_1->par;

 if (VAR_3->dev->driver->gem_prime_mmap)
  return VAR_3->dev->driver->gem_prime_mmap(VAR_3->buffer->gem, VAR_2);
 else
  return -VAR_0;
}
