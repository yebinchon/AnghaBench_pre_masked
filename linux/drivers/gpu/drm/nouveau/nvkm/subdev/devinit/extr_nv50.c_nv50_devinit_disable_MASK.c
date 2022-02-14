
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
 int FUNC_0 (struct nvkm_device*,int) ;

__attribute__((used)) static u64
FUNC_1(struct nvkm_devinit *VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_1->subdev.device;
 u32 VAR_3 = FUNC_0(VAR_2, 0x001540);
 u64 VAR_4 = 0ULL;

 if (!(VAR_3 & 0x40000000))
  VAR_4 |= (1ULL << VAR_0);

 return VAR_4;
}
