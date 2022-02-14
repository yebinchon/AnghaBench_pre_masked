
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int flush_work; } ;
struct intel_guc_log {TYPE_1__ relay; int vma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct intel_guc_log*) ;
 int FUNC_1 (struct intel_guc_log*) ;
 int FUNC_2 (struct intel_guc_log*) ;
 int FUNC_3 (struct intel_guc_log*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct intel_guc_log*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 int VAR_3 ;

int FUNC_9(struct intel_guc_log *VAR_4)
{
 int VAR_5;

 if (!VAR_4->vma)
  return -VAR_1;

 FUNC_6(&VAR_4->relay.lock);

 if (FUNC_5(VAR_4)) {
  VAR_5 = -VAR_0;
  goto out_unlock;
 }






 if (!FUNC_4()) {
  VAR_5 = -VAR_2;
  goto out_unlock;
 }

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5)
  goto out_unlock;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  goto out_relay;

 FUNC_7(&VAR_4->relay.lock);

 FUNC_0(VAR_4);






 FUNC_8(VAR_3, &VAR_4->relay.flush_work);

 return 0;

out_relay:
 FUNC_3(VAR_4);
out_unlock:
 FUNC_7(&VAR_4->relay.lock);

 return VAR_5;
}
