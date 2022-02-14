
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct timer_list {int dummy; } ;
struct qib_pportdata {int link_speed_active; int lflags; TYPE_3__* dd; TYPE_1__* cpspec; int link_speed_supported; } ;
struct qib_devdata {int num_pports; int flags; int stats_timer; scalar_t__ diag_client; struct qib_pportdata* pport; } ;
struct TYPE_6__ {TYPE_2__* cspec; int eep_st_lock; scalar_t__ traffic_wds; } ;
struct TYPE_5__ {scalar_t__ r1; } ;
struct TYPE_4__ {scalar_t__ qdr_dfe_on; scalar_t__ qdr_dfe_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct qib_devdata* VAR_11 ;
 int FUNC_0 (struct qib_pportdata*) ;
 struct qib_devdata* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (struct qib_pportdata*,int ) ;
 int FUNC_5 (struct qib_pportdata*,int ,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int VAR_13 ;
 scalar_t__ FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct timer_list *VAR_14)
{
 struct qib_devdata *VAR_15 = FUNC_1(VAR_15, VAR_14, VAR_13);
 struct qib_pportdata *VAR_16;
 unsigned long VAR_17;
 u64 VAR_18;
 int VAR_19;

 for (VAR_19 = 0; VAR_19 < VAR_15->num_pports; ++VAR_19) {
  VAR_16 = VAR_15->pport + VAR_19;






  if (!VAR_16->link_speed_supported || !(VAR_15->flags & VAR_10)
      || VAR_15->diag_client)
   continue;






  VAR_18 = FUNC_4(VAR_16, VAR_7) +
   FUNC_4(VAR_16, VAR_8);
  FUNC_6(&VAR_16->dd->eep_st_lock, VAR_17);
  VAR_18 -= VAR_16->dd->traffic_wds;
  VAR_16->dd->traffic_wds += VAR_18;
  FUNC_7(&VAR_16->dd->eep_st_lock, VAR_17);
  if (VAR_16->cpspec->qdr_dfe_on && (VAR_16->link_speed_active &
      VAR_9) &&
      (VAR_16->lflags & (VAR_6 | VAR_5 |
        VAR_4)) &&
      VAR_16->cpspec->qdr_dfe_time &&
      FUNC_8(VAR_16->cpspec->qdr_dfe_time)) {
   VAR_16->cpspec->qdr_dfe_on = 0;

   FUNC_5(VAR_16, FUNC_2(2),
         VAR_16->dd->cspec->r1 ?
         VAR_3 :
         VAR_2);
   FUNC_0(VAR_16);
  }
 }
 FUNC_3(&VAR_15->stats_timer, VAR_12 + VAR_1 * VAR_0);
}
