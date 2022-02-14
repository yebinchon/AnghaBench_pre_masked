
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tasklet_struct {int data; int (* func ) (int ) ;} ;
struct TYPE_9__ {int rb_root; } ;
struct TYPE_10__ {TYPE_4__ queue; struct tasklet_struct tasklet; } ;
struct intel_engine_cs {TYPE_5__ execlists; TYPE_3__* i915; int gt; } ;
struct TYPE_7__ {TYPE_1__* pdev; } ;
struct TYPE_8__ {TYPE_2__ drm; } ;
struct TYPE_6__ {int irq; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct tasklet_struct*) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (struct intel_engine_cs*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct intel_engine_cs*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct tasklet_struct*) ;
 int FUNC_11 (struct tasklet_struct*) ;
 int FUNC_12 (struct tasklet_struct*) ;

bool FUNC_13(struct intel_engine_cs *VAR_0)
{

 if (FUNC_4(VAR_0->gt))
  return 1;

 if (!FUNC_3(VAR_0))
  return 1;


 if (FUNC_2(&VAR_0->execlists)) {
  struct tasklet_struct *VAR_1 = &VAR_0->execlists.tasklet;

  FUNC_9(VAR_0->i915->drm.pdev->irq);

  FUNC_5();
  if (FUNC_10(VAR_1)) {

   if (FUNC_1(VAR_1))
    VAR_1->func(VAR_1->data);
   FUNC_11(VAR_1);
  }
  FUNC_6();


  FUNC_12(VAR_1);

  if (FUNC_2(&VAR_0->execlists))
   return 0;
 }


 if (!FUNC_0(&VAR_0->execlists.queue.rb_root))
  return 0;


 return FUNC_7(VAR_0);
}
