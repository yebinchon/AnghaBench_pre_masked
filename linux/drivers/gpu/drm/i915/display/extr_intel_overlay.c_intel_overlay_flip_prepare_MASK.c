
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct intel_overlay {TYPE_4__* vma; TYPE_4__* old_vma; int i915; TYPE_3__* crtc; } ;
struct i915_vma {TYPE_2__* obj; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_9__ {TYPE_1__* obj; } ;
struct TYPE_8__ {int pipe; } ;
struct TYPE_7__ {int * frontbuffer; } ;
struct TYPE_6__ {int * frontbuffer; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_4__* FUNC_2 (struct i915_vma*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_5(struct intel_overlay *VAR_0,
           struct i915_vma *VAR_1)
{
 enum pipe VAR_2 = VAR_0->crtc->pipe;

 FUNC_1(VAR_0->old_vma);

 FUNC_4(VAR_0->vma ? VAR_0->vma->obj->frontbuffer : ((void*)0),
    VAR_1 ? VAR_1->obj->frontbuffer : ((void*)0),
    FUNC_0(VAR_2));

 FUNC_3(VAR_0->i915,
           FUNC_0(VAR_2));

 VAR_0->old_vma = VAR_0->vma;
 if (VAR_1)
  VAR_0->vma = FUNC_2(VAR_1);
 else
  VAR_0->vma = ((void*)0);
}
