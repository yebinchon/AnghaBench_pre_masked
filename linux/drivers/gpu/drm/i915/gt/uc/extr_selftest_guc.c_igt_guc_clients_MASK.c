
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_guc {scalar_t__ execbuf_client; } ;
struct TYPE_6__ {int struct_mutex; } ;
struct TYPE_4__ {struct intel_guc guc; } ;
struct TYPE_5__ {TYPE_1__ uc; } ;
struct drm_i915_private {TYPE_3__ drm; int runtime_pm; TYPE_2__ gt; } ;
typedef int intel_wakeref_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct intel_guc*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct intel_guc*) ;
 int FUNC_6 (struct intel_guc*) ;
 int FUNC_7 (struct intel_guc*) ;
 int FUNC_8 (struct intel_guc*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_16(void *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2;
 intel_wakeref_t VAR_4;
 struct intel_guc *VAR_5;
 int VAR_6 = 0;

 FUNC_0(!FUNC_1(VAR_3));
 FUNC_12(&VAR_3->drm.struct_mutex);
 VAR_4 = FUNC_10(&VAR_3->runtime_pm);

 VAR_5 = &VAR_3->gt.uc.guc;
 if (!VAR_5) {
  FUNC_14("No guc object!\n");
  VAR_6 = -VAR_0;
  goto unlock;
 }

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6)
  goto unlock;





 FUNC_7(VAR_5);
 FUNC_6(VAR_5);
 if (VAR_5->execbuf_client) {
  FUNC_14("guc_clients_destroy lied!\n");
  VAR_6 = -VAR_0;
  goto unlock;
 }

 VAR_6 = FUNC_5(VAR_5);
 if (VAR_6) {
  FUNC_14("Failed to create clients\n");
  goto unlock;
 }
 FUNC_0(!VAR_5->execbuf_client);

 VAR_6 = FUNC_15(VAR_5->execbuf_client,
         VAR_1);
 if (VAR_6) {
  FUNC_14("execbug client validation failed\n");
  goto out;
 }


 if (!FUNC_9(VAR_5->execbuf_client)) {
  FUNC_14("guc_clients_create didn't reserve doorbells\n");
  VAR_6 = -VAR_0;
  goto out;
 }


 FUNC_8(VAR_5);


 if (!FUNC_3(VAR_5->execbuf_client)) {
  FUNC_14("failed to initialize the doorbells\n");
  VAR_6 = -VAR_0;
  goto out;
 }





 VAR_6 = FUNC_4(VAR_5->execbuf_client);

out:




 FUNC_7(VAR_5);
 FUNC_6(VAR_5);
 FUNC_5(VAR_5);
 FUNC_8(VAR_5);
unlock:
 FUNC_11(&VAR_3->runtime_pm, VAR_4);
 FUNC_13(&VAR_3->drm.struct_mutex);
 return VAR_6;
}
