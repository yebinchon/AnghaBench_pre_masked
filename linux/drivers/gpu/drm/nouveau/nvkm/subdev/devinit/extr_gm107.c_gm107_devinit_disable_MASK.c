
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef int u32 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_devinit {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 int FUNC_0 (struct nvkm_device*,int) ;

u64
FUNC_1(struct nvkm_devinit *VAR_3)
{
 struct nvkm_device *VAR_4 = VAR_3->subdev.device;
 u32 VAR_5 = FUNC_0(VAR_4, 0x021c00);
 u32 VAR_6 = FUNC_0(VAR_4, 0x021c04);
 u64 VAR_7 = 0ULL;

 if (VAR_5 & 0x00000001)
  VAR_7 |= (1ULL << VAR_0);
 if (VAR_5 & 0x00000004)
  VAR_7 |= (1ULL << VAR_1);
 if (VAR_6 & 0x00000001)
  VAR_7 |= (1ULL << VAR_2);

 return VAR_7;
}
