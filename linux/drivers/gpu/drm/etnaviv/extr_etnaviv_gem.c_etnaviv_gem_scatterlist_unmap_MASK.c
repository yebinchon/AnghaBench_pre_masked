
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int nents; int sgl; } ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct etnaviv_gem_object {int flags; struct sg_table* sgt; TYPE_1__ base; } ;
struct drm_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct etnaviv_gem_object *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->base.dev;
 struct sg_table *VAR_4 = VAR_2->sgt;
 if (VAR_2->flags & VAR_1)
  FUNC_0(VAR_3->dev, VAR_4->sgl, VAR_4->nents, VAR_0);
}
