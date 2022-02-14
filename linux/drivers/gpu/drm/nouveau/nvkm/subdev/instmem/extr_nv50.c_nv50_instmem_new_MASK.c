
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_instmem {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct nv50_instmem {struct nvkm_instmem base; int lru; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct nv50_instmem* FUNC_1 (int,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,struct nvkm_device*,int,struct nvkm_instmem*) ;

int
FUNC_3(struct nvkm_device *VAR_3, int VAR_4,
   struct nvkm_instmem **VAR_5)
{
 struct nv50_instmem *VAR_6;

 if (!(VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1)))
  return -VAR_0;
 FUNC_2(&VAR_2, VAR_3, VAR_4, &VAR_6->base);
 FUNC_0(&VAR_6->lru);
 *VAR_5 = &VAR_6->base;
 return 0;
}
