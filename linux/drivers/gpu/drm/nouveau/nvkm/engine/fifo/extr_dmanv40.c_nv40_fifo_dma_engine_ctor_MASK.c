
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_fifo_chan {int dummy; } ;
struct TYPE_2__ {int index; } ;
struct nvkm_engine {TYPE_1__ subdev; } ;
struct nv04_fifo_chan {int * engn; } ;


 struct nv04_fifo_chan* FUNC_0 (struct nvkm_fifo_chan*) ;
 int FUNC_1 (struct nvkm_engine*,int *,int *) ;
 int FUNC_2 (struct nvkm_object*,int *,int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_fifo_chan *VAR_0,
     struct nvkm_engine *VAR_1,
     struct nvkm_object *VAR_2)
{
 struct nv04_fifo_chan *VAR_3 = FUNC_0(VAR_0);
 const int VAR_4 = VAR_1->subdev.index;
 u32 VAR_5, VAR_6;

 if (!FUNC_1(VAR_1, &VAR_5, &VAR_6))
  return 0;

 return FUNC_2(VAR_2, ((void*)0), 0, &VAR_3->engn[VAR_4]);
}
