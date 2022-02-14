
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long long tstamp; int util_state; long long* times; } ;
struct spu_context {TYPE_1__ stats; struct spu* spu; int state_mutex; } ;
struct TYPE_5__ {long long* times; int util_state; unsigned long long tstamp; } ;
struct spu {int node; TYPE_2__ stats; } ;
typedef enum spu_utilization_state { ____Placeholder_spu_utilization_state } spu_utilization_state ;
struct TYPE_6__ {int busy_spus; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_3__* VAR_1 ;
 unsigned long long FUNC_3 () ;
 int FUNC_4 (int *) ;

void FUNC_5(struct spu_context *VAR_2,
  enum spu_utilization_state VAR_3)
{
 unsigned long long VAR_4;
 signed long long VAR_5;
 struct spu *VAR_6;
 enum spu_utilization_state VAR_7;
 int VAR_8;

 VAR_4 = FUNC_3();
 VAR_5 = VAR_4 - VAR_2->stats.tstamp;

 FUNC_0(!FUNC_4(&VAR_2->state_mutex));
 FUNC_0(VAR_5 < 0);

 VAR_6 = VAR_2->spu;
 VAR_7 = VAR_2->stats.util_state;
 VAR_2->stats.util_state = VAR_3;
 VAR_2->stats.tstamp = VAR_4;




 if (VAR_6) {
  VAR_2->stats.times[VAR_7] += VAR_5;
  VAR_6->stats.times[VAR_7] += VAR_5;
  VAR_6->stats.util_state = VAR_3;
  VAR_6->stats.tstamp = VAR_4;
  VAR_8 = VAR_6->node;
  if (VAR_7 == VAR_0)
   FUNC_1(&VAR_1[VAR_8].busy_spus);
  if (VAR_3 == VAR_0)
   FUNC_2(&VAR_1[VAR_8].busy_spus);
 }
}
