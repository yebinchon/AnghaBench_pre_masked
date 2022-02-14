
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct intel_guc {int dummy; } ;
struct TYPE_16__ {int struct_mutex; } ;
struct TYPE_14__ {struct intel_guc guc; } ;
struct TYPE_15__ {TYPE_1__ uc; } ;
struct drm_i915_private {TYPE_3__ drm; int runtime_pm; TYPE_2__ gt; } ;
typedef int intel_wakeref_t ;
struct TYPE_17__ {scalar_t__ stage_id; scalar_t__ doorbell_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (struct intel_guc*,int) ;
 int FUNC_8 (struct intel_guc*) ;
 TYPE_4__** VAR_5 ;
 TYPE_4__* FUNC_9 (struct intel_guc*,int) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_18(void *VAR_6)
{
 struct drm_i915_private *VAR_7 = VAR_6;
 intel_wakeref_t VAR_8;
 struct intel_guc *VAR_9;
 int VAR_10, VAR_11 = 0;
 u16 VAR_12;

 FUNC_0(!FUNC_1(VAR_7));
 FUNC_13(&VAR_7->drm.struct_mutex);
 VAR_8 = FUNC_11(&VAR_7->runtime_pm);

 VAR_9 = &VAR_7->gt.uc.guc;
 if (!VAR_9) {
  FUNC_15("No guc object!\n");
  VAR_11 = -VAR_1;
  goto unlock;
 }

 VAR_11 = FUNC_8(VAR_9);
 if (VAR_11)
  goto unlock;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  VAR_5[VAR_10] = FUNC_9(VAR_9, VAR_10 % VAR_3);

  if (!VAR_5[VAR_10]) {
   FUNC_15("[%d] No guc client\n", VAR_10);
   VAR_11 = -VAR_1;
   goto out;
  }

  if (FUNC_2(VAR_5[VAR_10])) {
   if (FUNC_4(VAR_5[VAR_10]) != -VAR_2) {
    FUNC_15("[%d] unexpected error\n", VAR_10);
    VAR_11 = FUNC_4(VAR_5[VAR_10]);
    goto out;
   }

   if (FUNC_7(VAR_9, VAR_10 % VAR_3)) {
    FUNC_15("[%d] non-db related alloc fail\n", VAR_10);
    VAR_11 = -VAR_1;
    goto out;
   }


   continue;
  }





  if (VAR_5[VAR_10]->stage_id >= VAR_4) {
   FUNC_15("[%d] more clients than doorbells (%d >= %d)\n",
          VAR_10, VAR_5[VAR_10]->stage_id, VAR_4);
   VAR_11 = -VAR_1;
   goto out;
  }

  VAR_11 = FUNC_17(VAR_5[VAR_10], VAR_10 % VAR_3);
  if (VAR_11) {
   FUNC_15("[%d] client_alloc sanity check failed!\n", VAR_10);
   VAR_11 = -VAR_1;
   goto out;
  }

  VAR_12 = VAR_5[VAR_10]->doorbell_id;

  VAR_11 = FUNC_6(VAR_5[VAR_10]);
  if (VAR_11) {
   FUNC_15("[%d] Failed to create a doorbell\n", VAR_10);
   goto out;
  }


  if (VAR_12 != VAR_5[VAR_10]->doorbell_id) {
   FUNC_15("[%d] doorbell id changed (%d != %d)\n",
          VAR_10, VAR_12, VAR_5[VAR_10]->doorbell_id);
   VAR_11 = -VAR_1;
   goto out;
  }

  VAR_11 = FUNC_8(VAR_9);
  if (VAR_11)
   goto out;

  VAR_11 = FUNC_16(VAR_5[VAR_10]);
  if (VAR_11)
   goto out;
 }

out:
 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
  if (!FUNC_3(VAR_5[VAR_10])) {
   FUNC_5(VAR_5[VAR_10]);
   FUNC_10(VAR_5[VAR_10]);
  }
unlock:
 FUNC_12(&VAR_7->runtime_pm, VAR_8);
 FUNC_14(&VAR_7->drm.struct_mutex);
 return VAR_11;
}
