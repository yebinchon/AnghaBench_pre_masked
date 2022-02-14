
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_local_map {scalar_t__ type; int size; int offset; int handle; } ;
struct drm_device {TYPE_1__* agp; } ;
struct TYPE_2__ {scalar_t__ cant_use_aperture; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,struct drm_device*) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct drm_local_map *VAR_1, struct drm_device *VAR_2)
{
 if (VAR_2->agp && VAR_2->agp->cant_use_aperture && VAR_1->type == VAR_0)
  VAR_1->handle = FUNC_0(VAR_1->offset, VAR_1->size, VAR_2);
 else
  VAR_1->handle = FUNC_1(VAR_1->offset, VAR_1->size);
}
