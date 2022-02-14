
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct TYPE_2__ {void* time; } ;
struct cpudata {int sched_flags; void* last_io_update; TYPE_1__ sample; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpudata*) ;
 int FUNC_1 (struct cpudata*) ;
 scalar_t__ FUNC_2 (void*,void*) ;

__attribute__((used)) static inline void FUNC_3(struct cpudata *VAR_2,
            u64 VAR_3)
{
 VAR_2->sample.time = VAR_3;

 if (VAR_2->sched_flags & VAR_0) {
  bool VAR_4 = 0;

  VAR_2->sched_flags = 0;







  if (FUNC_2(VAR_3, VAR_2->last_io_update + 2 * VAR_1))
   VAR_4 = 1;

  VAR_2->last_io_update = VAR_3;

  if (VAR_4)
   FUNC_1(VAR_2);

 } else {
  FUNC_0(VAR_2);
 }
}
