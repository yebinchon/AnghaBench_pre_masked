
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_fifo_chan {int dummy; } ;
struct nv50_fifo_chan {int ramht; } ;


 struct nv50_fifo_chan* FUNC_0 (struct nvkm_fifo_chan*) ;
 int FUNC_1 (int ,int) ;

void
FUNC_2(struct nvkm_fifo_chan *VAR_0, int VAR_1)
{
 struct nv50_fifo_chan *VAR_2 = FUNC_0(VAR_0);
 FUNC_1(VAR_2->ramht, VAR_1);
}
