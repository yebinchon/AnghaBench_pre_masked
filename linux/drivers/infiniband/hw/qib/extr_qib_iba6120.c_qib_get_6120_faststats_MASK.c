
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct timer_list {int dummy; } ;
struct qib_pportdata {int dummy; } ;
struct qib_devdata {int flags; int stats_timer; int eep_st_lock; scalar_t__ traffic_wds; scalar_t__ diag_client; struct qib_pportdata* pport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct qib_devdata* VAR_5 ;
 struct qib_devdata* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct qib_devdata*) ;
 scalar_t__ FUNC_3 (struct qib_pportdata*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_8)
{
 struct qib_devdata *VAR_9 = FUNC_0(VAR_9, VAR_8, VAR_7);
 struct qib_pportdata *VAR_10 = VAR_9->pport;
 unsigned long VAR_11;
 u64 VAR_12;





 if (!(VAR_9->flags & VAR_2) || VAR_9->diag_client)

  goto done;






 VAR_12 = FUNC_3(VAR_10, VAR_4) +
  FUNC_3(VAR_10, VAR_3);
 FUNC_4(&VAR_9->eep_st_lock, VAR_11);
 VAR_12 -= VAR_9->traffic_wds;
 VAR_9->traffic_wds += VAR_12;
 FUNC_5(&VAR_9->eep_st_lock, VAR_11);

 FUNC_2(VAR_9);
done:
 FUNC_1(&VAR_9->stats_timer, VAR_6 + VAR_1 * VAR_0);
}
