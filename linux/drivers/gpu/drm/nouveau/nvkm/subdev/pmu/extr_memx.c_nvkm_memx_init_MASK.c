
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_pmu {TYPE_1__ subdev; } ;
struct nvkm_memx {int base; void* size; struct nvkm_pmu* pmu; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct nvkm_memx* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_pmu*,void**,int ,int ,int ,int ) ;
 int FUNC_2 (struct nvkm_device*,int) ;
 int FUNC_3 (struct nvkm_device*,int,int) ;

int
FUNC_4(struct nvkm_pmu *VAR_5, struct nvkm_memx **VAR_6)
{
 struct nvkm_device *VAR_7 = VAR_5->subdev.device;
 struct nvkm_memx *VAR_8;
 u32 VAR_9[2];
 int VAR_10;

 VAR_10 = FUNC_1(VAR_5, VAR_9, VAR_4, VAR_3,
       VAR_2, 0);
 if (VAR_10)
  return VAR_10;

 VAR_8 = *VAR_6 = FUNC_0(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;
 VAR_8->pmu = VAR_5;
 VAR_8->base = VAR_9[0];
 VAR_8->size = VAR_9[1];


 do {
  FUNC_3(VAR_7, 0x10a580, 0x00000003);
 } while (FUNC_2(VAR_7, 0x10a580) != 0x00000003);
 FUNC_3(VAR_7, 0x10a1c0, 0x01000000 | VAR_8->base);
 return 0;
}
