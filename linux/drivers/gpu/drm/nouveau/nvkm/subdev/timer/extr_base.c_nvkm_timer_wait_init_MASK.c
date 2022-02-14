
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nvkm_timer_wait {scalar_t__ reads; int limit; int tmr; } ;
struct nvkm_device {int timer; } ;



void
FUNC_0(struct nvkm_device *VAR_0, u64 VAR_1,
       struct nvkm_timer_wait *VAR_2)
{
 VAR_2->tmr = VAR_0->timer;
 VAR_2->limit = VAR_1;
 VAR_2->reads = 0;
}
