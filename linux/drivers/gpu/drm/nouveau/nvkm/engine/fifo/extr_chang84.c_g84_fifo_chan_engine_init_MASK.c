
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct nvkm_gpuobj {scalar_t__ addr; scalar_t__ size; } ;
struct nvkm_fifo_chan {int dummy; } ;
struct TYPE_2__ {size_t index; } ;
struct nvkm_engine {TYPE_1__ subdev; } ;
struct nv50_fifo_chan {int eng; struct nvkm_gpuobj** engn; } ;


 int FUNC_0 (struct nvkm_engine*) ;
 int FUNC_1 (scalar_t__) ;
 struct nv50_fifo_chan* FUNC_2 (struct nvkm_fifo_chan*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int
FUNC_7(struct nvkm_fifo_chan *VAR_0,
     struct nvkm_engine *VAR_1)
{
 struct nv50_fifo_chan *VAR_2 = FUNC_2(VAR_0);
 struct nvkm_gpuobj *VAR_3 = VAR_2->engn[VAR_1->subdev.index];
 u64 VAR_4, VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1);
 if (VAR_6 < 0)
  return 0;
 VAR_4 = VAR_3->addr + VAR_3->size - 1;
 VAR_5 = VAR_3->addr;

 FUNC_4(VAR_2->eng);
 FUNC_5(VAR_2->eng, VAR_6 + 0x00, 0x00190000);
 FUNC_5(VAR_2->eng, VAR_6 + 0x04, FUNC_1(VAR_4));
 FUNC_5(VAR_2->eng, VAR_6 + 0x08, FUNC_1(VAR_5));
 FUNC_5(VAR_2->eng, VAR_6 + 0x0c, FUNC_6(VAR_4) << 24 |
         FUNC_6(VAR_5));
 FUNC_5(VAR_2->eng, VAR_6 + 0x10, 0x00000000);
 FUNC_5(VAR_2->eng, VAR_6 + 0x14, 0x00000000);
 FUNC_3(VAR_2->eng);
 return 0;
}
