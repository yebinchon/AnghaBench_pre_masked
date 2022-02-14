
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_timer {struct nvkm_subdev subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nvkm_subdev*,char*,int ) ;
 int FUNC_2 (struct nvkm_device*,int ,int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct nvkm_timer *VAR_2, u64 VAR_3)
{
 struct nvkm_subdev *VAR_4 = &VAR_2->subdev;
 struct nvkm_device *VAR_5 = VAR_4->device;
 u32 VAR_6 = FUNC_3(VAR_3);
 u32 VAR_7 = FUNC_0(VAR_3);

 FUNC_1(VAR_4, "time low        : %08x\n", VAR_7);
 FUNC_1(VAR_4, "time high       : %08x\n", VAR_6);

 FUNC_2(VAR_5, VAR_1, VAR_6);
 FUNC_2(VAR_5, VAR_0, VAR_7);
}
