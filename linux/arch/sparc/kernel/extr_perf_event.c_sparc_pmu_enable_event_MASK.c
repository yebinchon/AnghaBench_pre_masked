
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct hw_perf_event {int dummy; } ;
struct cpu_hw_events {int * pcr; int * events; } ;
struct TYPE_4__ {int (* write_pcr ) (int,int ) ;} ;
struct TYPE_3__ {int num_pcrs; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static inline void FUNC_4(struct cpu_hw_events *VAR_2, struct hw_perf_event *VAR_3, int VAR_4)
{
 u64 VAR_5, VAR_6, VAR_7 = FUNC_1(VAR_4);
 int VAR_8 = 0;

 if (VAR_1->num_pcrs > 1)
  VAR_8 = VAR_4;

 VAR_5 = FUNC_2(VAR_2->events[VAR_4]);

 VAR_6 = VAR_2->pcr[VAR_8];
 VAR_6 &= ~VAR_7;
 VAR_6 |= FUNC_0(VAR_5, VAR_4);
 VAR_2->pcr[VAR_8] = VAR_6;

 VAR_0->write_pcr(VAR_8, VAR_2->pcr[VAR_8]);
}
