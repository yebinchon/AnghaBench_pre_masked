
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ execbuf_client; } ;
struct TYPE_11__ {TYPE_6__ guc; } ;
struct TYPE_7__ {int flags; } ;
struct intel_gt {TYPE_5__ uc; TYPE_1__ reset; } ;
struct intel_engine_cs {size_t uabi_class; int (* resume ) (struct intel_engine_cs*) ;int name; struct intel_gt* gt; TYPE_4__* i915; scalar_t__ id; } ;
struct TYPE_9__ {int * reset_engine_count; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_10__ {TYPE_3__ gpu_error; TYPE_2__ drm; } ;


 int FUNC_0 (char*,char*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct intel_engine_cs*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int ,char const*) ;
 int FUNC_6 (struct intel_engine_cs*) ;
 int FUNC_7 (struct intel_engine_cs*) ;
 int FUNC_8 (struct intel_engine_cs*) ;
 int FUNC_9 (struct intel_engine_cs*) ;
 int FUNC_10 (TYPE_6__*,struct intel_engine_cs*) ;
 int FUNC_11 (struct intel_engine_cs*) ;
 int FUNC_12 (struct intel_engine_cs*) ;
 int FUNC_13 (struct intel_engine_cs*) ;
 int FUNC_14 (scalar_t__,int *) ;

int FUNC_15(struct intel_engine_cs *VAR_1, const char *VAR_2)
{
 struct intel_gt *VAR_3 = VAR_1->gt;
 int VAR_4;

 FUNC_2("%s flags=%lx\n", VAR_1->name, VAR_3->reset.flags);
 FUNC_1(!FUNC_14(VAR_0 + VAR_1->id, &VAR_3->reset.flags));

 if (!FUNC_7(VAR_1))
  return 0;

 FUNC_12(VAR_1);

 if (VAR_2)
  FUNC_5(VAR_1->i915->drm.dev,
      "Resetting %s for %s\n", VAR_1->name, VAR_2);
 FUNC_4(&VAR_1->i915->gpu_error.reset_engine_count[VAR_1->uabi_class]);

 if (!VAR_1->gt->uc.guc.execbuf_client)
  VAR_4 = FUNC_9(VAR_1);
 else
  VAR_4 = FUNC_10(&VAR_1->gt->uc.guc, VAR_1);
 if (VAR_4) {

  FUNC_0("%sFailed to reset %s, ret=%d\n",
     VAR_1->gt->uc.guc.execbuf_client ? "GuC " : "",
     VAR_1->name, VAR_4);
  goto out;
 }






 FUNC_3(VAR_1, 1);






 VAR_4 = VAR_1->resume(VAR_1);

out:
 FUNC_6(VAR_1);
 FUNC_11(VAR_1);
 FUNC_8(VAR_1);
 return VAR_4;
}
