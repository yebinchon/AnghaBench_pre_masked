
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int bytes; } ;
struct drm_omap_gem_new {int flags; int handle; TYPE_1__ size; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct drm_device*,struct drm_file*,int ,int) ;
 int FUNC_1 (struct drm_device*,struct drm_file*,TYPE_1__,int,int *) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_1, void *VAR_2,
  struct drm_file *VAR_3)
{
 struct drm_omap_gem_new *VAR_4 = VAR_2;
 u32 VAR_5 = VAR_4->flags & VAR_0;

 FUNC_0("%p:%p: size=0x%08x, flags=%08x", VAR_1, VAR_3,
      VAR_4->size.bytes, VAR_5);

 return FUNC_1(VAR_1, VAR_3, VAR_4->size, VAR_5,
       &VAR_4->handle);
}
