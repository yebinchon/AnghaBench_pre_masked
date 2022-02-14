
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_ram_func {scalar_t__ (* probe_fbpa_amount ) (struct nvkm_device*,int) ;} ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nvkm_device*,int) ;
 scalar_t__ FUNC_3 (struct nvkm_device*,int) ;

u32
FUNC_4(const struct nvkm_ram_func *VAR_0, u32 VAR_1,
      struct nvkm_device *VAR_2, int VAR_3, int *VAR_4)
{
 u32 VAR_5 = FUNC_2(VAR_2, 0x022450);
 u32 VAR_6 = FUNC_2(VAR_2, 0x022458);
 u32 VAR_7 = VAR_3 * VAR_6;
 u32 VAR_8 = 0;
 if (!(FUNC_2(VAR_2, 0x021d38) & FUNC_0(VAR_3))) {
  u32 VAR_9 = FUNC_2(VAR_2, 0x021d70 + (VAR_3 * 4));
  u32 VAR_10 = ~VAR_9 & ((1 << VAR_5) - 1);

  while (VAR_6--) {
   if (!(VAR_1 & (1 << VAR_7)))
    VAR_8 += VAR_0->probe_fbpa_amount(VAR_2, VAR_7);
   VAR_7++;
  }

  *VAR_4 = FUNC_1(VAR_10);
 }
 return VAR_8;
}
