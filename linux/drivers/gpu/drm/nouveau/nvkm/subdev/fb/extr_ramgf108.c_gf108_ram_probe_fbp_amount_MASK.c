
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_ram_func {scalar_t__ (* probe_fbpa_amount ) (struct nvkm_device*,int) ;} ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 scalar_t__ FUNC_2 (struct nvkm_device*,int) ;

u32
FUNC_3(const struct nvkm_ram_func *VAR_0, u32 VAR_1,
      struct nvkm_device *VAR_2, int VAR_3, int *VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_2, 0x022438);
 u32 VAR_6 = FUNC_1(VAR_2, 0x02243c);
 u32 VAR_7 = VAR_6 / VAR_5;
 u32 VAR_8 = VAR_3 * VAR_7;
 u32 VAR_9 = 0;
 while (VAR_7--) {
  if (!(VAR_1 & FUNC_0(VAR_8)))
   VAR_9 += VAR_0->probe_fbpa_amount(VAR_2, VAR_8);
  VAR_8++;
 }
 *VAR_4 = 1;
 return VAR_9;
}
