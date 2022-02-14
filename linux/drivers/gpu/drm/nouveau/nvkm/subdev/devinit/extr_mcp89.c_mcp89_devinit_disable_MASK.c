
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
 int FUNC_0 (struct nvkm_device*,int) ;

__attribute__((used)) static u64
FUNC_1(struct nvkm_devinit *VAR_6)
{
 struct nvkm_device *VAR_7 = VAR_6->subdev.device;
 u32 VAR_8 = FUNC_0(VAR_7, 0x001540);
 u32 VAR_9 = FUNC_0(VAR_7, 0x00154c);
 u64 VAR_10 = 0;

 if (!(VAR_8 & 0x40000000)) {
  VAR_10 |= (1ULL << VAR_2);
  VAR_10 |= (1ULL << VAR_3);
 }

 if (!(VAR_9 & 0x00000004))
  VAR_10 |= (1ULL << VAR_1);
 if (!(VAR_9 & 0x00000020))
  VAR_10 |= (1ULL << VAR_4);
 if (!(VAR_9 & 0x00000040))
  VAR_10 |= (1ULL << VAR_5);
 if (!(VAR_9 & 0x00000200))
  VAR_10 |= (1ULL << VAR_0);

 return VAR_10;
}
