
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_instmem {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct nv04_instmem {struct nvkm_instmem base; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nv04_instmem* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,struct nvkm_device*,int,struct nvkm_instmem*) ;

int
FUNC_2(struct nvkm_device *VAR_3, int VAR_4,
   struct nvkm_instmem **VAR_5)
{
 struct nv04_instmem *VAR_6;

 if (!(VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1)))
  return -VAR_0;
 FUNC_1(&VAR_2, VAR_3, VAR_4, &VAR_6->base);
 *VAR_5 = &VAR_6->base;
 return 0;
}
