
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_pmu {struct nvkm_subdev subdev; } ;
struct nvkm_memx {int base; struct nvkm_pmu* pmu; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_memx*) ;
 int FUNC_1 (struct nvkm_memx*) ;
 int FUNC_2 (struct nvkm_subdev*,char*,int,int) ;
 int FUNC_3 (struct nvkm_pmu*,int*,int ,int ,int ,int) ;
 int FUNC_4 (struct nvkm_device*,int) ;
 int FUNC_5 (struct nvkm_device*,int,int) ;

int
FUNC_6(struct nvkm_memx **VAR_2, bool VAR_3)
{
 struct nvkm_memx *VAR_4 = *VAR_2;
 struct nvkm_pmu *VAR_5 = VAR_4->pmu;
 struct nvkm_subdev *VAR_6 = &VAR_5->subdev;
 struct nvkm_device *VAR_7 = VAR_6->device;
 u32 VAR_8, VAR_9[2];


 FUNC_1(VAR_4);


 VAR_8 = FUNC_4(VAR_7, 0x10a1c0) & 0x00ffffff;
 FUNC_5(VAR_7, 0x10a580, 0x00000000);


 if (VAR_3) {
  FUNC_3(VAR_5, VAR_9, VAR_1, VAR_0,
         VAR_4->base, VAR_8);
  FUNC_2(VAR_6, "Exec took %uns, PMU_IN %08x\n",
      VAR_9[0], VAR_9[1]);
 }

 FUNC_0(VAR_4);
 return 0;
}
