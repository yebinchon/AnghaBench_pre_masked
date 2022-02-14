
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_fuse {int lock; TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct nvkm_device*,int,int,int) ;
 scalar_t__ FUNC_1 (struct nvkm_device*,scalar_t__) ;
 int FUNC_2 (struct nvkm_device*,int,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static u32
FUNC_5(struct nvkm_fuse *VAR_0, u32 VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->subdev.device;
 unsigned long VAR_3;
 u32 VAR_4, VAR_5;


 FUNC_3(&VAR_0->lock, VAR_3);
 VAR_4 = FUNC_0(VAR_2, 0x001084, 0x800, 0x800);
 VAR_5 = FUNC_1(VAR_2, 0x021000 + VAR_1);
 FUNC_2(VAR_2, 0x001084, VAR_4);
 FUNC_4(&VAR_0->lock, VAR_3);
 return VAR_5;
}
