
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct timer_list {int dummy; } ;
struct qib_devdata {scalar_t__ z_int_counter; int intrchk_timer; TYPE_1__* pcidev; int (* f_intr_fallback ) (struct qib_devdata*) ;} ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct qib_devdata* VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct qib_devdata* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (struct qib_devdata*) ;
 int FUNC_4 (struct qib_devdata*) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_4)
{
 struct qib_devdata *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_2);
 u64 VAR_6;

 if (!VAR_5)
  return;





 VAR_6 = FUNC_3(VAR_5) - VAR_5->z_int_counter;
 if (VAR_6 == 0) {
  if (!VAR_5->f_intr_fallback(VAR_5))
   FUNC_0(&VAR_5->pcidev->dev,
    "No interrupts detected, not usable.\n");
  else
   FUNC_2(&VAR_5->intrchk_timer, VAR_3 + VAR_0/2);
 }
}
