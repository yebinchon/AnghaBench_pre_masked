
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ enabled; scalar_t__ active; int lock; void* total; int enabled_at; int start; } ;
struct intel_engine_cs {TYPE_1__ stats; } ;
typedef int ktime_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 void* FUNC_1 (void*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_6(struct intel_engine_cs *VAR_0)
{
 unsigned long VAR_1;

 if (FUNC_0(VAR_0->stats.enabled) == 0)
  return;

 FUNC_4(&VAR_0->stats.lock, VAR_1);

 if (VAR_0->stats.enabled > 0) {
  ktime_t VAR_2;

  if (VAR_0->stats.active && --VAR_0->stats.active == 0) {




   VAR_2 = FUNC_3(FUNC_2(), VAR_0->stats.start);

   VAR_0->stats.total = FUNC_1(VAR_0->stats.total,
       VAR_2);
  } else if (VAR_0->stats.active == 0) {





   VAR_2 = FUNC_3(FUNC_2(), VAR_0->stats.enabled_at);

   VAR_0->stats.total = FUNC_1(VAR_0->stats.total,
       VAR_2);
  }
 }

 FUNC_5(&VAR_0->stats.lock, VAR_1);
}
