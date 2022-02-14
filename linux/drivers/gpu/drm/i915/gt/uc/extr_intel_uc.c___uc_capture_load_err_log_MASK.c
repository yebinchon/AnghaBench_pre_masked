
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* vma; } ;
struct intel_guc {TYPE_2__ log; } ;
struct intel_uc {scalar_t__ load_err_log; struct intel_guc guc; } ;
struct TYPE_3__ {int obj; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct intel_uc *VAR_0)
{
 struct intel_guc *VAR_1 = &VAR_0->guc;

 if (VAR_1->log.vma && !VAR_0->load_err_log)
  VAR_0->load_err_log = FUNC_0(VAR_1->log.vma->obj);
}
