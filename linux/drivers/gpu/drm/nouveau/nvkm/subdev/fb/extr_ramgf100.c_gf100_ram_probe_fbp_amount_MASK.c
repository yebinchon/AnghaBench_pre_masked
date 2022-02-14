
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_ram_func {int (* probe_fbpa_amount ) (struct nvkm_device*,int) ;} ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nvkm_device*,int) ;

u32
FUNC_2(const struct nvkm_ram_func *VAR_0, u32 VAR_1,
      struct nvkm_device *VAR_2, int VAR_3, int *VAR_4)
{
 if (!(VAR_1 & FUNC_0(VAR_3))) {
  *VAR_4 = 1;
  return VAR_0->probe_fbpa_amount(VAR_2, VAR_3);
 }
 return 0;
}
