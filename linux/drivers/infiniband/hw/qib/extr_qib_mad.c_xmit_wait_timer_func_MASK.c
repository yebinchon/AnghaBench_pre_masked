
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct timer_list {int dummy; } ;
struct TYPE_7__ {scalar_t__ flags; int timer; int counter; } ;
struct TYPE_5__ {int lock; } ;
struct TYPE_6__ {TYPE_1__ rvp; } ;
struct qib_pportdata {TYPE_3__ cong_stats; TYPE_2__ ibport_data; } ;
struct qib_devdata {scalar_t__ (* f_portcntr ) (struct qib_pportdata*,int ) ;int (* f_set_cntr_sample ) (struct qib_pportdata*,int ,int) ;} ;
struct TYPE_8__ {int timer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct qib_pportdata*) ;
 TYPE_4__ VAR_6 ;
 struct qib_devdata* FUNC_1 (struct qib_pportdata*) ;
 struct qib_pportdata* FUNC_2 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int *,scalar_t__) ;
 struct qib_pportdata* VAR_8 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (struct qib_pportdata*,int ) ;
 int FUNC_7 (struct qib_pportdata*,int ,int) ;
 int FUNC_8 (struct qib_pportdata*) ;

__attribute__((used)) static void FUNC_9(struct timer_list *VAR_9)
{
 struct qib_pportdata *VAR_10 = FUNC_2(VAR_10, VAR_9, VAR_6.timer);
 struct qib_devdata *VAR_11 = FUNC_1(VAR_10);
 unsigned long VAR_12;
 u8 VAR_13;

 FUNC_4(&VAR_10->ibport_data.rvp.lock, VAR_12);
 if (VAR_10->cong_stats.flags == VAR_1) {
  VAR_13 = VAR_11->f_portcntr(VAR_10, VAR_4);
  if (VAR_13 == VAR_3) {

   FUNC_0(VAR_10);
   VAR_10->cong_stats.flags = VAR_2;
  } else
   goto done;
 }
 VAR_10->cong_stats.counter = FUNC_8(VAR_10);
 VAR_11->f_set_cntr_sample(VAR_10, VAR_5, 0x0);
done:
 FUNC_5(&VAR_10->ibport_data.rvp.lock, VAR_12);
 FUNC_3(&VAR_10->cong_stats.timer, VAR_7 + VAR_0);
}
