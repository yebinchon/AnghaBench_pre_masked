
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_fifo_chan {int dummy; } ;
struct nvkm_fifo {int lock; } ;


 scalar_t__ FUNC_0 (struct nvkm_fifo_chan*) ;
 int FUNC_1 (int *,unsigned long) ;

void
FUNC_2(struct nvkm_fifo *VAR_0, unsigned long VAR_1,
     struct nvkm_fifo_chan **VAR_2)
{
 struct nvkm_fifo_chan *VAR_3 = *VAR_2;
 if (FUNC_0(VAR_3)) {
  *VAR_2 = ((void*)0);
  FUNC_1(&VAR_0->lock, VAR_1);
 }
}
