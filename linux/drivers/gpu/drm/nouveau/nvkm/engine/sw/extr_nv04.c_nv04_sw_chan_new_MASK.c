
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_sw {int dummy; } ;
struct nvkm_oclass {int dummy; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_fifo_chan {int dummy; } ;
struct TYPE_2__ {struct nvkm_object object; } ;
struct nv04_sw_chan {TYPE_1__ base; int ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct nv04_sw_chan* FUNC_1 (int,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,struct nvkm_sw*,struct nvkm_fifo_chan*,struct nvkm_oclass const*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_sw *VAR_3, struct nvkm_fifo_chan *VAR_4,
   const struct nvkm_oclass *VAR_5, struct nvkm_object **VAR_6)
{
 struct nv04_sw_chan *VAR_7;

 if (!(VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1)))
  return -VAR_0;
 FUNC_0(&VAR_7->ref, 0);
 *VAR_6 = &VAR_7->base.object;

 return FUNC_2(&VAR_2, VAR_3, VAR_4, VAR_5, &VAR_7->base);
}
