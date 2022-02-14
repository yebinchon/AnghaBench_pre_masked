
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {int dev_private; } ;
struct TYPE_2__ {int clear_depth; int clear_color; int flags; } ;
typedef TYPE_1__ drm_i810_clear_t ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,struct drm_file*) ;
 int FUNC_1 (struct drm_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_1, void *VAR_2,
      struct drm_file *VAR_3)
{
 drm_i810_clear_t *VAR_4 = VAR_2;

 FUNC_0(VAR_1, VAR_3);


 if (!VAR_1->dev_private)
  return -VAR_0;

 FUNC_1(VAR_1, VAR_4->flags,
    VAR_4->clear_color, VAR_4->clear_depth);
 return 0;
}
