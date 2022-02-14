
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_engine {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct nv44_mpeg {struct nvkm_engine engine; int chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct nv44_mpeg* FUNC_1 (int,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,struct nvkm_device*,int,int,struct nvkm_engine*) ;

int
FUNC_3(struct nvkm_device *VAR_3, int VAR_4, struct nvkm_engine **VAR_5)
{
 struct nv44_mpeg *VAR_6;

 if (!(VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1)))
  return -VAR_0;
 FUNC_0(&VAR_6->chan);
 *VAR_5 = &VAR_6->engine;

 return FUNC_2(&VAR_2, VAR_3, VAR_4, 1, &VAR_6->engine);
}
