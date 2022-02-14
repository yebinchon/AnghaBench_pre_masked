
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* agp; } ;
struct drm_agp_mem {scalar_t__ bound; int memory; } ;
struct drm_agp_binding {int offset; int handle; } ;
struct TYPE_2__ {scalar_t__ base; int acquired; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_agp_mem* FUNC_1 (struct drm_device*,int ) ;
 int FUNC_2 (int ,int) ;

int FUNC_3(struct drm_device *VAR_3, struct drm_agp_binding *VAR_4)
{
 struct drm_agp_mem *VAR_5;
 int VAR_6;
 int VAR_7;

 if (!VAR_3->agp || !VAR_3->agp->acquired)
  return -VAR_0;
 VAR_5 = FUNC_1(VAR_3, VAR_4->handle);
 if (!VAR_5 || VAR_5->bound)
  return -VAR_0;
 VAR_7 = (VAR_4->offset + VAR_2 - 1) / VAR_2;
 VAR_6 = FUNC_2(VAR_5->memory, VAR_7);
 if (VAR_6)
  return VAR_6;
 VAR_5->bound = VAR_3->agp->base + (VAR_7 << VAR_1);
 FUNC_0("base = 0x%lx entry->bound = 0x%lx\n",
    VAR_3->agp->base, VAR_5->bound);
 return 0;
}
