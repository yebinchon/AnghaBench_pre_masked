
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nvkm_fifo_chan {int dummy; } ;
struct nvkm_fifo {int lock; } ;


 struct nvkm_fifo_chan* FUNC_0 (struct nvkm_fifo*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct nvkm_fifo_chan *
FUNC_3(struct nvkm_fifo *VAR_0, u64 VAR_1, unsigned long *VAR_2)
{
 struct nvkm_fifo_chan *VAR_3;
 unsigned long VAR_4;
 FUNC_1(&VAR_0->lock, VAR_4);
 if ((VAR_3 = FUNC_0(VAR_0, VAR_1))) {
  *VAR_2 = VAR_4;
  return VAR_3;
 }
 FUNC_2(&VAR_0->lock, VAR_4);
 return ((void*)0);
}
