
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_outp {TYPE_1__* func; } ;
struct TYPE_2__ {int (* fini ) (struct nvkm_outp*) ;} ;


 int FUNC_0 (struct nvkm_outp*) ;

void
FUNC_1(struct nvkm_outp *VAR_0)
{
 if (VAR_0->func->fini)
  VAR_0->func->fini(VAR_0);
}
