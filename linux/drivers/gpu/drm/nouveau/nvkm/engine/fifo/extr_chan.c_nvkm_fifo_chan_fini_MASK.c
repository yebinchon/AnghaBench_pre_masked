
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_object {int dummy; } ;
struct nvkm_fifo_chan {TYPE_1__* func; } ;
struct TYPE_2__ {int (* fini ) (struct nvkm_fifo_chan*) ;} ;


 struct nvkm_fifo_chan* FUNC_0 (struct nvkm_object*) ;
 int FUNC_1 (struct nvkm_fifo_chan*) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_object *VAR_0, bool VAR_1)
{
 struct nvkm_fifo_chan *VAR_2 = FUNC_0(VAR_0);
 VAR_2->func->fini(VAR_2);
 return 0;
}
