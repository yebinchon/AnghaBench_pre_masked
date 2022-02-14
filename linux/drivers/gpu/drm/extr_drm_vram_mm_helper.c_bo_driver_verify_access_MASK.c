
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_buffer_object {int bdev; } ;
struct file {int dummy; } ;
struct drm_vram_mm {TYPE_1__* funcs; } ;
struct TYPE_2__ {int (* verify_access ) (struct ttm_buffer_object*,struct file*) ;} ;


 struct drm_vram_mm* FUNC_0 (int ) ;
 int FUNC_1 (struct ttm_buffer_object*,struct file*) ;

__attribute__((used)) static int FUNC_2(struct ttm_buffer_object *VAR_0,
       struct file *VAR_1)
{
 struct drm_vram_mm *VAR_2 = FUNC_0(VAR_0->bdev);

 if (!VAR_2->funcs || !VAR_2->funcs->verify_access)
  return 0;
 return VAR_2->funcs->verify_access(VAR_0, VAR_1);
}
