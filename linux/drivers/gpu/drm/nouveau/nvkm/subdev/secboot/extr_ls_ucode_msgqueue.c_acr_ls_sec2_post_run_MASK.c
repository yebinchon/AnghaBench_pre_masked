
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_secboot {struct nvkm_subdev subdev; } ;
struct nvkm_sec2 {int falcon; int queue; } ;
struct nvkm_device {struct nvkm_sec2* sec2; } ;
struct nvkm_acr {size_t boot_falcon; } ;


 int FUNC_0 (int ,int ,int const) ;
 int FUNC_1 (struct nvkm_subdev*,char*,int ) ;
 int * VAR_0 ;

int
FUNC_2(const struct nvkm_acr *VAR_1, const struct nvkm_secboot *VAR_2)
{
 const struct nvkm_subdev *VAR_3 = &VAR_2->subdev;
 struct nvkm_device *VAR_4 = VAR_3->device;
 struct nvkm_sec2 *VAR_5 = VAR_4->sec2;

 const u32 VAR_6 = 0x01000000;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5->queue, VAR_5->falcon, VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_1(&VAR_2->subdev, "%s started\n",
     VAR_0[VAR_1->boot_falcon]);

 return 0;
}
