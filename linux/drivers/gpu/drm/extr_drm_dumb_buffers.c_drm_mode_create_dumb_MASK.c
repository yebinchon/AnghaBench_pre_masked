
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_mode_create_dumb {int width; int height; int bpp; scalar_t__ size; scalar_t__ pitch; scalar_t__ handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* dumb_create ) (struct drm_file*,struct drm_device*,struct drm_mode_create_dumb*) ;} ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (struct drm_file*,struct drm_device*,struct drm_mode_create_dumb*) ;

int FUNC_3(struct drm_device *VAR_3,
    struct drm_mode_create_dumb *VAR_4,
    struct drm_file *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;

 if (!VAR_3->driver->dumb_create)
  return -VAR_1;
 if (!VAR_4->width || !VAR_4->height || !VAR_4->bpp)
  return -VAR_0;


 if (VAR_4->bpp > VAR_2 - 8)
  return -VAR_0;
 VAR_6 = FUNC_0(VAR_4->bpp, 8);
 if (VAR_6 > VAR_2 / VAR_4->width)
  return -VAR_0;
 VAR_7 = VAR_6 * VAR_4->width;
 if (VAR_4->height > VAR_2 / VAR_7)
  return -VAR_0;


 VAR_8 = VAR_4->height * VAR_7;
 if (FUNC_1(VAR_8) == 0)
  return -VAR_0;







 VAR_4->handle = 0;
 VAR_4->pitch = 0;
 VAR_4->size = 0;

 return VAR_3->driver->dumb_create(VAR_5, VAR_3, VAR_4);
}
