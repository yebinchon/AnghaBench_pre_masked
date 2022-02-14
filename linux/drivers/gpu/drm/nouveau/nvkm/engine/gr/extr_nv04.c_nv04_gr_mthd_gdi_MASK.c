
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int,int) ;
 int FUNC_1 (struct nvkm_device*,int,int) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;
 int FUNC_3 (struct nvkm_device*,int,int) ;
 int FUNC_4 (struct nvkm_device*,int,int) ;
 int FUNC_5 (struct nvkm_device*,int,int) ;

__attribute__((used)) static bool
FUNC_6(struct nvkm_device *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 bool (*VAR_4)(struct nvkm_device *, u32, u32);
 switch (VAR_2) {
 case 0x0188: VAR_4 = FUNC_2; break;
 case 0x018c: VAR_4 = FUNC_3; break;
 case 0x0190: VAR_4 = FUNC_0; break;
 case 0x0194: VAR_4 = FUNC_1; break;
 case 0x0198: VAR_4 = FUNC_4; break;
 case 0x02fc: VAR_4 = FUNC_5; break;
 default:
  return 0;
 }
 return VAR_4(VAR_0, VAR_1, VAR_3);
}
