
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_devinit_func {int dummy; } ;
struct nvkm_devinit {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct nv04_devinit {int owner; struct nvkm_devinit base; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nv04_devinit* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_devinit_func const*,struct nvkm_device*,int,struct nvkm_devinit*) ;

int
FUNC_2(const struct nvkm_devinit_func *VAR_2,
    struct nvkm_device *VAR_3, int VAR_4,
    struct nvkm_devinit **VAR_5)
{
 struct nv04_devinit *VAR_6;

 if (!(VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1)))
  return -VAR_0;
 *VAR_5 = &VAR_6->base;

 FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_6->base);
 VAR_6->owner = -1;
 return 0;
}
