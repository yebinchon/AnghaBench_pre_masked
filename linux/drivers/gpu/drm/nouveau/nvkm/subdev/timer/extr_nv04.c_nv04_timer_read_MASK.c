
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_timer {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nvkm_device*,int ) ;

u64
FUNC_1(struct nvkm_timer *VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_2->subdev.device;
 u32 VAR_4, VAR_5;

 do {
  VAR_4 = FUNC_0(VAR_3, VAR_1);
  VAR_5 = FUNC_0(VAR_3, VAR_0);
 } while (VAR_4 != FUNC_0(VAR_3, VAR_1));

 return ((u64)VAR_4 << 32 | VAR_5);
}
