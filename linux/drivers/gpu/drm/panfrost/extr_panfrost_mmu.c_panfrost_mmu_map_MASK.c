
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct TYPE_3__ {int start; } ;
struct drm_gem_object {int dev; } ;
struct TYPE_4__ {struct drm_gem_object base; } ;
struct panfrost_gem_object {int is_mapped; TYPE_1__ node; int mmu; scalar_t__ noexec; TYPE_2__ base; } ;
struct panfrost_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sg_table*) ;
 int VAR_3 ;
 int FUNC_1 (struct sg_table*) ;
 scalar_t__ FUNC_2 (int) ;
 struct sg_table* FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (struct panfrost_device*,int ,int,int,struct sg_table*) ;
 struct panfrost_device* FUNC_5 (int ) ;

int FUNC_6(struct panfrost_gem_object *VAR_4)
{
 struct drm_gem_object *VAR_5 = &VAR_4->base.base;
 struct panfrost_device *VAR_6 = FUNC_5(VAR_5->dev);
 struct sg_table *VAR_7;
 int VAR_8 = VAR_1 | VAR_2;

 if (FUNC_2(VAR_4->is_mapped))
  return 0;

 if (VAR_4->noexec)
  VAR_8 |= VAR_0;

 VAR_7 = FUNC_3(VAR_5);
 if (FUNC_2(FUNC_0(VAR_7)))
  return FUNC_1(VAR_7);

 FUNC_4(VAR_6, VAR_4->mmu, VAR_4->node.start << VAR_3, VAR_8, VAR_7);
 VAR_4->is_mapped = 1;

 return 0;
}
