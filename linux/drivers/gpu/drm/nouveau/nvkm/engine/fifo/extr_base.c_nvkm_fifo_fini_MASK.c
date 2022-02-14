
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_fifo {TYPE_1__* func; } ;
struct nvkm_engine {int dummy; } ;
struct TYPE_2__ {int (* fini ) (struct nvkm_fifo*) ;} ;


 struct nvkm_fifo* FUNC_0 (struct nvkm_engine*) ;
 int FUNC_1 (struct nvkm_fifo*) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_engine *VAR_0, bool VAR_1)
{
 struct nvkm_fifo *VAR_2 = FUNC_0(VAR_0);
 if (VAR_2->func->fini)
  VAR_2->func->fini(VAR_2);
 return 0;
}
