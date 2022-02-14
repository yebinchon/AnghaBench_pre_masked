
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct qib_pportdata {int lflags; } ;
struct qib_devdata {int flags; struct qib_pportdata* pport; } ;
struct qib_chip_specific {int relock_interval; int relock_timer; struct qib_devdata* dd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct qib_chip_specific* VAR_7 ;
 struct qib_chip_specific* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct qib_devdata*) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_11)
{
 struct qib_chip_specific *VAR_12 = FUNC_0(VAR_12, VAR_11, VAR_10);
 struct qib_devdata *VAR_13 = VAR_12->dd;
 struct qib_pportdata *VAR_14 = VAR_13->pport;
 int VAR_15;







 if ((VAR_13->flags & VAR_6) && !(VAR_14->lflags &
     (VAR_1 | VAR_5 | VAR_4 |
      VAR_3))) {
  if (VAR_9) {
   if (!(VAR_14->lflags & VAR_2))
    FUNC_2(VAR_13);
  }

  VAR_15 = VAR_12->relock_interval << 1;
  if (VAR_15 > VAR_0)
   VAR_15 = VAR_0;
  VAR_12->relock_interval = VAR_15;
 } else
  VAR_15 = VAR_0;
 FUNC_1(&VAR_12->relock_timer, VAR_8 + VAR_15);
}
