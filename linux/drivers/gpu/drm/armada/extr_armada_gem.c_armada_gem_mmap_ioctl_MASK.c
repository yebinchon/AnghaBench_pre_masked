
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_armada_gem_mmap {unsigned long addr; int offset; int size; int handle; } ;
struct TYPE_2__ {int filp; } ;
struct armada_gem_object {TYPE_1__ obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct armada_gem_object* FUNC_1 (struct drm_file*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 unsigned long FUNC_3 (int ,int ,int ,int,int ,int ) ;

int FUNC_4(struct drm_device *VAR_5, void *VAR_6,
 struct drm_file *VAR_7)
{
 struct drm_armada_gem_mmap *VAR_8 = VAR_6;
 struct armada_gem_object *VAR_9;
 unsigned long VAR_10;

 VAR_9 = FUNC_1(VAR_7, VAR_8->handle);
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 if (!VAR_9->obj.filp) {
  FUNC_2(&VAR_9->obj);
  return -VAR_0;
 }

 VAR_10 = FUNC_3(VAR_9->obj.filp, 0, VAR_8->size, VAR_3 | VAR_4,
         VAR_2, VAR_8->offset);
 FUNC_2(&VAR_9->obj);
 if (FUNC_0(VAR_10))
  return VAR_10;

 VAR_8->addr = VAR_10;

 return 0;
}
