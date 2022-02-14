
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int,int,int) ;
 int FUNC_1 (struct nvkm_device*,int,int ,int ) ;
 int FUNC_2 (struct nvkm_device*,int) ;

__attribute__((used)) static bool
FUNC_3(struct nvkm_device *VAR_0, u32 VAR_1, u32 VAR_2)
{
 u8 VAR_3 = FUNC_2(VAR_0, 0x700000) & 0x000000ff;
 if (VAR_2 > 5)
  return 0;

 if (VAR_2 > 2 && VAR_3 < 0x40)
  return 0;
 FUNC_0(VAR_0, VAR_1, 0x00038000, VAR_2 << 15);

 FUNC_1(VAR_0, VAR_1, 0, 0);
 return 1;
}
