
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ precise_ip; } ;
struct perf_event {TYPE_1__ attr; } ;


 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;
 scalar_t__ FUNC_2 (struct perf_event*) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_0)
{
 if (VAR_0->attr.precise_ip)
  FUNC_1(VAR_0);
 if (FUNC_2(VAR_0))
  FUNC_0(VAR_0);
}
