
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfi1_ctxtdata {int aspm_intr_supported; scalar_t__ ctxt; TYPE_1__* dd; int aspm_timer; int aspm_lock; } ;
struct TYPE_2__ {scalar_t__ first_dyn_alloc_ctxt; scalar_t__ aspm_supported; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hfi1_ctxtdata *VAR_3)
{
 FUNC_0(&VAR_3->aspm_lock);
 FUNC_1(&VAR_3->aspm_timer, VAR_1, 0);
 VAR_3->aspm_intr_supported = VAR_3->dd->aspm_supported &&
  VAR_2 == VAR_0 &&
  VAR_3->ctxt < VAR_3->dd->first_dyn_alloc_ctxt;
}
