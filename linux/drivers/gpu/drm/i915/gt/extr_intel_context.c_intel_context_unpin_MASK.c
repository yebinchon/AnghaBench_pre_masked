
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_context {int pin_mutex; int gem_context; TYPE_3__* ops; TYPE_2__* timeline; TYPE_1__* engine; int pin_count; } ;
struct TYPE_6__ {int (* unpin ) (struct intel_context*) ;} ;
struct TYPE_5__ {int fence_context; } ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct intel_context*) ;
 int FUNC_5 (struct intel_context*) ;
 int FUNC_6 (struct intel_context*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct intel_context*) ;

void FUNC_11(struct intel_context *VAR_1)
{
 if (FUNC_7(FUNC_1(&VAR_1->pin_count, -1, 1)))
  return;


 FUNC_5(VAR_1);
 FUNC_8(&VAR_1->pin_mutex, VAR_0);

 if (FUNC_7(FUNC_2(&VAR_1->pin_count))) {
  FUNC_0("%s context:%llx retire\n",
     VAR_1->engine->name, VAR_1->timeline->fence_context);

  VAR_1->ops->unpin(VAR_1);

  FUNC_3(VAR_1->gem_context);
  FUNC_4(VAR_1);
 }

 FUNC_9(&VAR_1->pin_mutex);
 FUNC_6(VAR_1);
}
