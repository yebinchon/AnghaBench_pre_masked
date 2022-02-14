
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct qib_pportdata {struct qib_devdata* dd; TYPE_1__* cpspec; int lflags_lock; int lflags; } ;
struct qib_devdata {int control; } ;
struct TYPE_4__ {scalar_t__ function; } ;
struct TYPE_3__ {int autoneg_work; int autoneg_wait; scalar_t__ iblnkerrdelta; scalar_t__ iblnkerrsnap; scalar_t__ ibdeltainprog; scalar_t__ ibsymdelta; scalar_t__ ibsymsnap; TYPE_2__ chase_timer; scalar_t__ chase_end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct qib_devdata*,int ) ;
 int FUNC_4 (struct qib_pportdata*,int ,int ) ;
 int FUNC_5 (struct qib_devdata*,int ,int) ;
 int FUNC_6 (struct qib_devdata*,int ) ;
 int FUNC_7 (struct qib_devdata*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct qib_devdata*,int ,int) ;

__attribute__((used)) static void FUNC_12(struct qib_pportdata *VAR_12)
{
 u64 VAR_13;
 struct qib_devdata *VAR_14 = VAR_12->dd;
 unsigned long VAR_15;


 VAR_14->control &= ~VAR_4;
 FUNC_5(VAR_14, VAR_9,
         VAR_14->control | VAR_3);

 VAR_12->cpspec->chase_end = 0;
 if (VAR_12->cpspec->chase_timer.function)
  FUNC_2(&VAR_12->cpspec->chase_timer);

 if (VAR_12->cpspec->ibsymdelta || VAR_12->cpspec->iblnkerrdelta ||
     VAR_12->cpspec->ibdeltainprog) {
  u64 VAR_16;


  VAR_16 = FUNC_3(VAR_14, VAR_10);
  FUNC_5(VAR_14, VAR_10,
          VAR_16 | FUNC_0(VAR_1, VAR_0));

  if (VAR_12->cpspec->ibsymdelta || VAR_12->cpspec->ibdeltainprog) {
   VAR_13 = FUNC_6(VAR_14, VAR_8);
   if (VAR_12->cpspec->ibdeltainprog)
    VAR_13 -= VAR_13 - VAR_12->cpspec->ibsymsnap;
   VAR_13 -= VAR_12->cpspec->ibsymdelta;
   FUNC_11(VAR_14, VAR_8, VAR_13);
  }
  if (VAR_12->cpspec->iblnkerrdelta || VAR_12->cpspec->ibdeltainprog) {
   VAR_13 = FUNC_6(VAR_14, VAR_7);
   if (VAR_12->cpspec->ibdeltainprog)
    VAR_13 -= VAR_13 - VAR_12->cpspec->iblnkerrsnap;
   VAR_13 -= VAR_12->cpspec->iblnkerrdelta;
   FUNC_11(VAR_14, VAR_7, VAR_13);
  }


  FUNC_5(VAR_14, VAR_10, VAR_16);
 }
 FUNC_4(VAR_12, 0, VAR_5);

 FUNC_8(&VAR_12->lflags_lock, VAR_15);
 VAR_12->lflags &= ~VAR_2;
 FUNC_9(&VAR_12->lflags_lock, VAR_15);
 FUNC_10(&VAR_12->cpspec->autoneg_wait);
 FUNC_1(&VAR_12->cpspec->autoneg_work);

 FUNC_7(VAR_12->dd);
 VAR_13 = FUNC_3(VAR_12->dd, VAR_11);
 VAR_13 |= VAR_6;
 FUNC_5(VAR_12->dd, VAR_11, VAR_13);
}
