
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_perf_event {int cntr_mask; int event_id; scalar_t__ range; } ;


 int FUNC_0 () ;

__attribute__((used)) static unsigned int FUNC_1(const struct mips_perf_event *VAR_0)
{
  return ((VAR_0->cntr_mask & 0xffff00) |
   (VAR_0->event_id & 0xff));
}
