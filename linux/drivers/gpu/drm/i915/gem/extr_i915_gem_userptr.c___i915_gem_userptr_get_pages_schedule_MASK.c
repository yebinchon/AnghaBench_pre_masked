
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct get_pages_work {int work; int task; int obj; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_7__ {int * work; } ;
struct drm_i915_gem_object {TYPE_2__ base; TYPE_3__ userptr; } ;
struct TYPE_5__ {int userptr_wq; } ;
struct TYPE_8__ {TYPE_1__ mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sg_table* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 struct get_pages_work* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int *) ;
 TYPE_4__* FUNC_6 (int ) ;

__attribute__((used)) static struct sg_table *
FUNC_7(struct drm_i915_gem_object *VAR_5)
{
 struct get_pages_work *VAR_6;
 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_2);
 if (VAR_6 == ((void*)0))
  return FUNC_0(-VAR_1);

 VAR_5->userptr.work = &VAR_6->work;

 VAR_6->obj = FUNC_3(VAR_5);

 VAR_6->task = VAR_4;
 FUNC_2(VAR_6->task);

 FUNC_1(&VAR_6->work, VAR_3);
 FUNC_5(FUNC_6(VAR_5->base.dev)->mm.userptr_wq, &VAR_6->work);

 return FUNC_0(-VAR_0);
}
