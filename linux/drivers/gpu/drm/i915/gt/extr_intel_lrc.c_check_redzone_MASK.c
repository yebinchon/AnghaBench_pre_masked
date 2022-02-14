
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_engine_cs {int name; TYPE_2__* i915; int context_size; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ drm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (void const*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(const void *VAR_5, const struct intel_engine_cs *VAR_6)
{
 if (!FUNC_0(VAR_0))
  return;

 VAR_5 += VAR_2 * VAR_3;
 VAR_5 += VAR_6->context_size;

 if (FUNC_2(VAR_5, VAR_4, VAR_1))
  FUNC_1(VAR_6->i915->drm.dev,
        "%s context redzone overwritten!\n",
        VAR_6->name);
}
