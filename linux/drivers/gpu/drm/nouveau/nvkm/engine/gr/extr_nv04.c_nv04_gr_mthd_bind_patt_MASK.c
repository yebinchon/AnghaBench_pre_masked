
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int ) ;
 int FUNC_1 (struct nvkm_device*,int ,int,int) ;

__attribute__((used)) static bool
FUNC_2(struct nvkm_device *VAR_0, u32 VAR_1, u32 VAR_2)
{
 switch (FUNC_0(VAR_0, VAR_2)) {
 case 0x30:
  FUNC_1(VAR_0, VAR_1, 0x08000000, 0);
  return 1;
 case 0x44:
  FUNC_1(VAR_0, VAR_1, 0x08000000, 0x08000000);
  return 1;
 }
 return 0;
}
