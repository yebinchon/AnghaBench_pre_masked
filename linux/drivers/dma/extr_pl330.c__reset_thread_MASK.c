
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pl330_thread {int id; int req_running; TYPE_1__* req; struct pl330_dmac* dmac; } ;
struct pl330_dmac {int mcbufsz; scalar_t__ mcode_bus; scalar_t__ mcode_cpu; } ;
struct TYPE_2__ {int * desc; scalar_t__ mc_bus; scalar_t__ mc_cpu; } ;



__attribute__((used)) static inline void FUNC_0(struct pl330_thread *VAR_0)
{
 struct pl330_dmac *VAR_1 = VAR_0->dmac;

 VAR_0->req[0].mc_cpu = VAR_1->mcode_cpu
    + (VAR_0->id * VAR_1->mcbufsz);
 VAR_0->req[0].mc_bus = VAR_1->mcode_bus
    + (VAR_0->id * VAR_1->mcbufsz);
 VAR_0->req[0].desc = ((void*)0);

 VAR_0->req[1].mc_cpu = VAR_0->req[0].mc_cpu
    + VAR_1->mcbufsz / 2;
 VAR_0->req[1].mc_bus = VAR_0->req[0].mc_bus
    + VAR_1->mcbufsz / 2;
 VAR_0->req[1].desc = ((void*)0);

 VAR_0->req_running = -1;
}
