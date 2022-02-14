
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_gr_func {int dummy; } ;
struct nvkm_gr {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct nv20_gr {struct nvkm_gr base; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nv20_gr* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_gr_func const*,struct nvkm_device*,int,int,struct nvkm_gr*) ;

int
FUNC_2(const struct nvkm_gr_func *VAR_2, struct nvkm_device *VAR_3,
      int VAR_4, struct nvkm_gr **VAR_5)
{
 struct nv20_gr *VAR_6;

 if (!(VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1)))
  return -VAR_0;
 *VAR_5 = &VAR_6->base;

 return FUNC_1(VAR_2, VAR_3, VAR_4, 1, &VAR_6->base);
}
