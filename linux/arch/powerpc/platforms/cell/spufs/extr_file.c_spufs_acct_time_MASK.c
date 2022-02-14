
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long long* times; int util_state; scalar_t__ tstamp; } ;
struct spu_context {TYPE_1__ stats; scalar_t__ spu; } ;
typedef enum spu_utilization_state { ____Placeholder_spu_utilization_state } spu_utilization_state ;


 unsigned long long VAR_0 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static unsigned long long FUNC_1(struct spu_context *VAR_1,
  enum spu_utilization_state VAR_2)
{
 unsigned long long VAR_3 = VAR_1->stats.times[VAR_2];
 if (VAR_1->spu && VAR_1->stats.util_state == VAR_2) {
  VAR_3 += FUNC_0() - VAR_1->stats.tstamp;
 }

 return VAR_3 / VAR_0;
}
