
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_mc_func {int dummy; } ;
struct nvkm_mc {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct gp100_mc {int intr; int mask; int lock; struct nvkm_mc base; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gp100_mc* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_mc_func const*,struct nvkm_device*,int,struct nvkm_mc*) ;
 int FUNC_2 (int *) ;

int
FUNC_3(const struct nvkm_mc_func *VAR_2, struct nvkm_device *VAR_3,
       int VAR_4, struct nvkm_mc **VAR_5)
{
 struct gp100_mc *VAR_6;

 if (!(VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1)))
  return -VAR_0;
 FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_6->base);
 *VAR_5 = &VAR_6->base;

 FUNC_2(&VAR_6->lock);
 VAR_6->intr = 0;
 VAR_6->mask = 0x7fffffff;
 return 0;
}
