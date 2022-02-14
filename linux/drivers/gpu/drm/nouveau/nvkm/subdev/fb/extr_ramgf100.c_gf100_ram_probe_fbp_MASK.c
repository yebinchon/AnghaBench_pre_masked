
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_ram_func {int (* probe_fbp_amount ) (struct nvkm_ram_func const*,int ,struct nvkm_device*,int,int*) ;} ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int) ;
 int FUNC_1 (struct nvkm_ram_func const*,int ,struct nvkm_device*,int,int*) ;

u32
FUNC_2(const struct nvkm_ram_func *VAR_0,
      struct nvkm_device *VAR_1, int VAR_2, int *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_1, 0x022554);
 return VAR_0->probe_fbp_amount(VAR_0, VAR_4, VAR_1, VAR_2, VAR_3);
}
