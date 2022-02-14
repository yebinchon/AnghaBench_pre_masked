
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_device {int cfgopt; } ;
struct nvkm_bar_func {int dummy; } ;
struct nvkm_bar {int dummy; } ;
struct gf100_bar {struct nvkm_bar base; int bar2_halve; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gf100_bar* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_bar_func const*,struct nvkm_device*,int,struct nvkm_bar*) ;
 int FUNC_2 (int ,char*,int) ;

int
FUNC_3(const struct nvkm_bar_func *VAR_2, struct nvkm_device *VAR_3,
        int VAR_4, struct nvkm_bar **VAR_5)
{
 struct gf100_bar *VAR_6;
 if (!(VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1)))
  return -VAR_0;
 FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_6->base);
 VAR_6->bar2_halve = FUNC_2(VAR_3->cfgopt, "NvBar2Halve", 0);
 *VAR_5 = &VAR_6->base;
 return 0;
}
