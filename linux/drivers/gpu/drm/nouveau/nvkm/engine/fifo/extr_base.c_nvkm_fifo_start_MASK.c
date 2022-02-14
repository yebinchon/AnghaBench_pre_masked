
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_fifo {TYPE_1__* func; } ;
struct TYPE_2__ {void (* start ) (struct nvkm_fifo*,unsigned long*) ;} ;


 void FUNC_0 (struct nvkm_fifo*,unsigned long*) ;

void
FUNC_1(struct nvkm_fifo *VAR_0, unsigned long *VAR_1)
{
 return VAR_0->func->start(VAR_0, VAR_1);
}
