
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_oproxy_func {int dummy; } ;
struct nvkm_oproxy {struct nvkm_oproxy_func const* func; int base; } ;
struct nvkm_oclass {int dummy; } ;


 int FUNC_0 (int *,struct nvkm_oclass const*,int *) ;
 int VAR_0 ;

void
FUNC_1(const struct nvkm_oproxy_func *VAR_1,
   const struct nvkm_oclass *VAR_2, struct nvkm_oproxy *VAR_3)
{
 FUNC_0(&VAR_0, VAR_2, &VAR_3->base);
 VAR_3->func = VAR_1;
}
