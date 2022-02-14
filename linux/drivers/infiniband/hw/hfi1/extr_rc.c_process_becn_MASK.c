
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct hfi1_pportdata {int cca_timer_lock; struct cca_timer* cca_timer; } ;
struct cca_timer {scalar_t__ ccti; int hrtimer; } ;
struct TYPE_6__ {TYPE_2__* entries; } ;
struct TYPE_4__ {scalar_t__ ccti_limit; } ;
struct cc_state {TYPE_3__ cong_setting; TYPE_1__ cct; } ;
struct TYPE_5__ {scalar_t__ ccti_increase; scalar_t__ ccti_timer; size_t trigger_threshold; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct cc_state* FUNC_0 (struct hfi1_pportdata*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct hfi1_pportdata*,size_t,int ,int ,int ,size_t) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (struct hfi1_pportdata*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

void FUNC_8(struct hfi1_pportdata *VAR_2, u8 VAR_3, u32 VAR_4, u32 VAR_5,
    u32 VAR_6, u8 VAR_7)
{
 struct cca_timer *VAR_8;
 u16 VAR_9, VAR_10, VAR_11, VAR_12;
 u8 VAR_13;
 struct cc_state *VAR_14;
 unsigned long VAR_15;

 if (VAR_3 >= VAR_1)
  return;

 VAR_14 = FUNC_0(VAR_2);

 if (!VAR_14)
  return;






 VAR_12 = VAR_14->cct.ccti_limit;
 VAR_10 = VAR_14->cong_setting.entries[VAR_3].ccti_increase;
 VAR_11 = VAR_14->cong_setting.entries[VAR_3].ccti_timer;
 VAR_13 =
  VAR_14->cong_setting.entries[VAR_3].trigger_threshold;

 FUNC_6(&VAR_2->cca_timer_lock, VAR_15);

 VAR_8 = &VAR_2->cca_timer[VAR_3];
 if (VAR_8->ccti < VAR_12) {
  if (VAR_8->ccti + VAR_10 <= VAR_12)
   VAR_8->ccti += VAR_10;
  else
   VAR_8->ccti = VAR_12;
  FUNC_5(VAR_2);
 }

 VAR_9 = VAR_8->ccti;

 if (!FUNC_1(&VAR_8->hrtimer)) {

  unsigned long VAR_16 = 1024 * VAR_11;

  FUNC_2(&VAR_8->hrtimer, FUNC_4(VAR_16),
         VAR_0);
 }

 FUNC_7(&VAR_2->cca_timer_lock, VAR_15);

 if ((VAR_13 != 0) && (VAR_9 >= VAR_13))
  FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}
