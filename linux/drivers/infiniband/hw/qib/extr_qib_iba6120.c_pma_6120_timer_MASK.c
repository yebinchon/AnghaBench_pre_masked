
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct timer_list {int dummy; } ;
struct TYPE_2__ {int lock; int pma_sample_interval; } ;
struct qib_ibport {TYPE_1__ rvp; } ;
struct qib_pportdata {struct qib_ibport ibport_data; } ;
struct qib_chip_specific {scalar_t__ pma_sample_status; void* sword; void* rword; void* spkts; void* rpkts; void* xmit_wait; int pma_timer; struct qib_pportdata* ppd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct qib_chip_specific* VAR_3 ;
 struct qib_chip_specific* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,scalar_t__) ;
 int VAR_5 ;
 int FUNC_2 (struct qib_pportdata*,void**,void**,void**,void**,void**) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_6)
{
 struct qib_chip_specific *VAR_7 = FUNC_0(VAR_7, VAR_6, VAR_5);
 struct qib_pportdata *VAR_8 = VAR_7->ppd;
 struct qib_ibport *VAR_9 = &VAR_8->ibport_data;
 unsigned long VAR_10;

 FUNC_3(&VAR_9->rvp.lock, VAR_10);
 if (VAR_7->pma_sample_status == VAR_2) {
  VAR_7->pma_sample_status = VAR_1;
  FUNC_2(VAR_8, &VAR_7->sword, &VAR_7->rword,
          &VAR_7->spkts, &VAR_7->rpkts, &VAR_7->xmit_wait);
  FUNC_1(&VAR_7->pma_timer,
        VAR_4 + FUNC_5(VAR_9->rvp.pma_sample_interval));
 } else if (VAR_7->pma_sample_status == VAR_1) {
  u64 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

  VAR_7->pma_sample_status = VAR_0;
  FUNC_2(VAR_8, &VAR_11, &VAR_12, &VAR_13, &VAR_14, &VAR_15);

  VAR_7->sword = VAR_11 - VAR_7->sword;
  VAR_7->rword = VAR_12 - VAR_7->rword;
  VAR_7->spkts = VAR_13 - VAR_7->spkts;
  VAR_7->rpkts = VAR_14 - VAR_7->rpkts;
  VAR_7->xmit_wait = VAR_15 - VAR_7->xmit_wait;
 }
 FUNC_4(&VAR_9->rvp.lock, VAR_10);
}
