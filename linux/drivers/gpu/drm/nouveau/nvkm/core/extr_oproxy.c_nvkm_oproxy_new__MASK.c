
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_oproxy_func {int dummy; } ;
struct nvkm_oproxy {int dummy; } ;
struct nvkm_oclass {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_oproxy* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_oproxy_func const*,struct nvkm_oclass const*,struct nvkm_oproxy*) ;

int
FUNC_2(const struct nvkm_oproxy_func *VAR_2,
   const struct nvkm_oclass *VAR_3, struct nvkm_oproxy **VAR_4)
{
 if (!(*VAR_4 = FUNC_0(sizeof(**VAR_4), VAR_1)))
  return -VAR_0;
 FUNC_1(VAR_2, VAR_3, *VAR_4);
 return 0;
}
