
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_uncore {int lock; TYPE_3__* debug; TYPE_1__* i915; int user_forcewake_count; } ;
struct TYPE_6__ {int lock; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {TYPE_2__ drm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct intel_uncore*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct intel_uncore*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct intel_uncore *VAR_1)
{
 FUNC_5(&VAR_1->lock);
 if (!--VAR_1->user_forcewake_count) {
  FUNC_4(&VAR_1->debug->lock);
  FUNC_3(VAR_1->debug);

  if (FUNC_0(VAR_1))
   FUNC_1(VAR_1->i915->drm.dev,
     "Invalid mmio detected during user access\n");
  FUNC_6(&VAR_1->debug->lock);

  FUNC_2(VAR_1, VAR_0);
 }
 FUNC_7(&VAR_1->lock);
}
