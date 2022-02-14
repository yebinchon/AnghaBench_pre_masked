
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_dma_func {int dummy; } ;
struct nvkm_dma {int engine; struct nvkm_dma_func const* func; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_dma* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,struct nvkm_device*,int,int,int *) ;

int
FUNC_2(const struct nvkm_dma_func *VAR_3, struct nvkm_device *VAR_4,
       int VAR_5, struct nvkm_dma **VAR_6)
{
 struct nvkm_dma *VAR_7;

 if (!(VAR_7 = *VAR_6 = FUNC_0(sizeof(*VAR_7), VAR_1)))
  return -VAR_0;
 VAR_7->func = VAR_3;

 return FUNC_1(&VAR_2, VAR_4, VAR_5, 1, &VAR_7->engine);
}
