
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct nvkm_bar_func {int dummy; } ;
struct nvkm_bar {int dummy; } ;
struct nv50_bar {struct nvkm_bar base; int pgd_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nv50_bar* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_bar_func const*,struct nvkm_device*,int,struct nvkm_bar*) ;

int
FUNC_2(const struct nvkm_bar_func *VAR_2, struct nvkm_device *VAR_3,
       int VAR_4, u32 VAR_5, struct nvkm_bar **VAR_6)
{
 struct nv50_bar *VAR_7;
 if (!(VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1)))
  return -VAR_0;
 FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_7->base);
 VAR_7->pgd_addr = VAR_5;
 *VAR_6 = &VAR_7->base;
 return 0;
}
