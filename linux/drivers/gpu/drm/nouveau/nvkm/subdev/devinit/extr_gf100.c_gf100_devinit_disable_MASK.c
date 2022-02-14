
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
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 int FUNC_0 (struct nvkm_device*,int) ;

__attribute__((used)) static u64
FUNC_1(struct nvkm_devinit *VAR_7)
{
 struct nvkm_device *VAR_8 = VAR_7->subdev.device;
 u32 VAR_9 = FUNC_0(VAR_8, 0x022500);
 u64 VAR_10 = 0ULL;

 if (VAR_9 & 0x00000001)
  VAR_10 |= (1ULL << VAR_2);

 if (VAR_9 & 0x00000002) {
  VAR_10 |= (1ULL << VAR_4);
  VAR_10 |= (1ULL << VAR_5);
 }

 if (VAR_9 & 0x00000004)
  VAR_10 |= (1ULL << VAR_6);
 if (VAR_9 & 0x00000008)
  VAR_10 |= (1ULL << VAR_3);
 if (VAR_9 & 0x00000100)
  VAR_10 |= (1ULL << VAR_0);
 if (VAR_9 & 0x00000200)
  VAR_10 |= (1ULL << VAR_1);

 return VAR_10;
}
