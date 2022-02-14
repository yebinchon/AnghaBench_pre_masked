
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int precise_ip; } ;
struct perf_event {TYPE_1__ attr; } ;


 void FUNC_0 (struct perf_event*) ;
 void FUNC_1 (struct perf_event*) ;

__attribute__((used)) static void FUNC_2(struct perf_event *VAR_0)
{
 if (VAR_0->attr.precise_ip < 3)
  return FUNC_0(VAR_0);
 return FUNC_1(VAR_0);
}
