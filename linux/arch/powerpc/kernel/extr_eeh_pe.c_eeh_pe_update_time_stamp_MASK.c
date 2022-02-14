
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct eeh_pe {scalar_t__ freeze_count; int tstamp; } ;


 void* FUNC_0 () ;

void FUNC_1(struct eeh_pe *VAR_0)
{
 time64_t VAR_1;

 if (!VAR_0) return;

 if (VAR_0->freeze_count <= 0) {
  VAR_0->freeze_count = 0;
  VAR_0->tstamp = FUNC_0();
 } else {
  VAR_1 = FUNC_0();
  if (VAR_1 - VAR_0->tstamp > 3600) {
   VAR_0->tstamp = VAR_1;
   VAR_0->freeze_count = 0;
  }
 }
}
