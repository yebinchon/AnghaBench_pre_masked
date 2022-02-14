
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nvkm_ram_func {int dummy; } ;
struct nvkm_ram {int dummy; } ;
struct nvkm_fb {int dummy; } ;
typedef enum nvkm_ram_type { ____Placeholder_nvkm_ram_type } nvkm_ram_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_ram* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_ram_func const*,struct nvkm_fb*,int,int ,struct nvkm_ram*) ;

int
FUNC_2(const struct nvkm_ram_func *VAR_2, struct nvkm_fb *VAR_3,
       enum nvkm_ram_type VAR_4, u64 VAR_5, struct nvkm_ram **VAR_6)
{
 if (!(*VAR_6 = FUNC_0(sizeof(**VAR_6), VAR_1)))
  return -VAR_0;
 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, *VAR_6);
}
