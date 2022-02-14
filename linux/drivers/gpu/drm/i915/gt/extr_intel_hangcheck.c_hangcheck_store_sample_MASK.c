
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int last_head; int last_ring; int acthd; } ;
struct intel_engine_cs {TYPE_1__ hangcheck; } ;
struct hangcheck {int head; int ring; int acthd; } ;



__attribute__((used)) static void FUNC_0(struct intel_engine_cs *VAR_0,
       const struct hangcheck *VAR_1)
{
 VAR_0->hangcheck.acthd = VAR_1->acthd;
 VAR_0->hangcheck.last_ring = VAR_1->ring;
 VAR_0->hangcheck.last_head = VAR_1->head;
}
