
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_fifo {TYPE_1__* func; } ;
struct nvkm_fault_data {int dummy; } ;
struct TYPE_2__ {void (* fault ) (struct nvkm_fifo*,struct nvkm_fault_data*) ;} ;


 void FUNC_0 (struct nvkm_fifo*,struct nvkm_fault_data*) ;

void
FUNC_1(struct nvkm_fifo *VAR_0, struct nvkm_fault_data *VAR_1)
{
 return VAR_0->func->fault(VAR_0, VAR_1);
}
