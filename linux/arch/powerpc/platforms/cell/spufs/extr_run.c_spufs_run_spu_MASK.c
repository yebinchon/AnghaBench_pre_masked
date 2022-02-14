
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int libassist; } ;
struct spu_context {int event_return; int run_mutex; TYPE_1__ stats; int sched_flags; struct spu* spu; int state_mutex; int stop_wq; } ;
struct spu {int dummy; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct spu_context*) ;
 int FUNC_6 (struct spu_context*) ;
 int FUNC_7 (struct spu_context*) ;
 int FUNC_8 (struct spu_context*) ;
 int FUNC_9 (struct spu_context*) ;
 int FUNC_10 (struct spu_context*,int*,int*) ;
 int FUNC_11 (struct spu_context*,int*) ;
 int FUNC_12 (struct spu_context*,int*) ;
 int FUNC_13 (struct spu*,struct spu_context*) ;
 int FUNC_14 (struct spu_context*) ;
 int FUNC_15 (struct spu_context*) ;
 int FUNC_16 (struct spu_context*,int ) ;
 int FUNC_17 (struct spu_context*) ;
 int FUNC_18 (struct spu_context*) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int *) ;
 scalar_t__ FUNC_21 (int) ;

long FUNC_22(struct spu_context *VAR_9, u32 *VAR_10, u32 *VAR_11)
{
 int VAR_12;
 struct spu *VAR_13;
 u32 VAR_14;

 if (FUNC_2(&VAR_9->run_mutex))
  return -VAR_0;

 VAR_9->event_return = 0;

 VAR_12 = FUNC_5(VAR_9);
 if (VAR_12)
  goto out_unlock;

 FUNC_7(VAR_9);

 FUNC_14(VAR_9);

 VAR_12 = FUNC_11(VAR_9, VAR_10);
 if (VAR_12) {
  FUNC_9(VAR_9);
  goto out;
 }

 do {
  VAR_12 = FUNC_19(VAR_9->stop_wq, FUNC_12(VAR_9, &VAR_14));
  if (FUNC_21(VAR_12)) {





   FUNC_1(&VAR_9->state_mutex);
   break;
  }
  VAR_13 = VAR_9->spu;
  if (FUNC_21(FUNC_20(VAR_2,
      &VAR_9->sched_flags))) {
   if (!(VAR_14 & VAR_5)) {
    FUNC_13(VAR_13, VAR_9);
    continue;
   }
  }

  FUNC_16(VAR_9, VAR_7);

  if ((VAR_14 & VAR_5) &&
      (VAR_14 >> VAR_6 == 0x2104)) {
   VAR_12 = FUNC_8(VAR_9);
   if (VAR_12)
    break;
   VAR_14 &= ~VAR_5;
  }
  VAR_12 = FUNC_18(VAR_9);
  if (VAR_12)
   break;

  VAR_12 = FUNC_17(VAR_9);
  if (VAR_12)
   break;

  if (FUNC_4(VAR_8))
   VAR_12 = -VAR_0;
 } while (!VAR_12 && !(VAR_14 & (VAR_5 |
          VAR_4 |
           VAR_3)));

 FUNC_6(VAR_9);
 VAR_12 = FUNC_10(VAR_9, VAR_10, &VAR_14);
 FUNC_15(VAR_9);

 if ((VAR_14 & VAR_5) &&
     (((VAR_14 >> VAR_6) & 0x3f00) == 0x2100))
  VAR_9->stats.libassist++;

 if ((VAR_12 == 0) ||
     ((VAR_12 == -VAR_0) &&
      ((VAR_14 & VAR_4) ||
       (VAR_14 & VAR_3) ||
       ((VAR_14 & VAR_5) &&
        (VAR_14 >> VAR_6 != 0x2104)))))
  VAR_12 = VAR_14;





 if (FUNC_21(VAR_14 & VAR_3))
  VAR_12 = -VAR_0;

 else if (FUNC_21((VAR_14 & VAR_5)
     && (VAR_14 >> VAR_6) == 0x3fff)) {
  FUNC_0(VAR_1);
  VAR_12 = -VAR_0;
 }

out:
 *VAR_11 = VAR_9->event_return;
out_unlock:
 FUNC_3(&VAR_9->run_mutex);
 return VAR_12;
}
