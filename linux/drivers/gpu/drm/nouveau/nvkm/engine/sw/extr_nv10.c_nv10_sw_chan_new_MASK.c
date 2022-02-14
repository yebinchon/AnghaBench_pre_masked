
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_object {int dummy; } ;
struct nvkm_sw_chan {struct nvkm_object object; } ;
struct nvkm_sw {int dummy; } ;
struct nvkm_oclass {int dummy; } ;
struct nvkm_fifo_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_sw_chan* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,struct nvkm_sw*,struct nvkm_fifo_chan*,struct nvkm_oclass const*,struct nvkm_sw_chan*) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_sw *VAR_3, struct nvkm_fifo_chan *VAR_4,
   const struct nvkm_oclass *VAR_5, struct nvkm_object **VAR_6)
{
 struct nvkm_sw_chan *VAR_7;

 if (!(VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1)))
  return -VAR_0;
 *VAR_6 = &VAR_7->object;

 return FUNC_1(&VAR_2, VAR_3, VAR_4, VAR_5, VAR_7);
}
