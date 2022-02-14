
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_engine {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct nv31_mpeg_func {int dummy; } ;
struct nv31_mpeg {struct nvkm_engine engine; struct nv31_mpeg_func const* func; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nv31_mpeg* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,struct nvkm_device*,int,int,struct nvkm_engine*) ;

int
FUNC_2(const struct nv31_mpeg_func *VAR_3, struct nvkm_device *VAR_4,
        int VAR_5, struct nvkm_engine **VAR_6)
{
 struct nv31_mpeg *VAR_7;

 if (!(VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1)))
  return -VAR_0;
 VAR_7->func = VAR_3;
 *VAR_6 = &VAR_7->engine;

 return FUNC_1(&VAR_2, VAR_4, VAR_5,
    1, &VAR_7->engine);
}
