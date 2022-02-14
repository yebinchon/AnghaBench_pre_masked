
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_devinit {struct nvkm_subdev subdev; } ;
struct nvkm_device {int chipset; } ;
struct io_mapping {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct io_mapping*) ;
 struct io_mapping* FUNC_1 (struct nvkm_device*) ;
 int FUNC_2 (struct io_mapping*,int) ;
 int FUNC_3 (struct io_mapping*,int,int) ;
 int FUNC_4 (struct nvkm_subdev*,char*) ;
 int FUNC_5 (struct nvkm_device*,int ,int,int) ;
 int FUNC_6 (struct nvkm_device*,int) ;
 int FUNC_7 (struct nvkm_device*,int ,int ) ;

__attribute__((used)) static void
FUNC_8(struct nvkm_devinit *VAR_3)
{
 struct nvkm_subdev *VAR_4 = &VAR_3->subdev;
 struct nvkm_device *VAR_5 = VAR_4->device;
 uint32_t VAR_6 = (VAR_5->chipset >= 0x25 ? 0x300 : 0x900);
 uint32_t VAR_7, VAR_8;
 struct io_mapping *VAR_9;


 VAR_9 = FUNC_1(VAR_5);
 if (!VAR_9) {
  FUNC_4(VAR_4, "failed to map fb\n");
  return;
 }

 FUNC_7(VAR_5, VAR_1, VAR_2);


 FUNC_5(VAR_5, VAR_0, 0, VAR_6);

 VAR_7 = FUNC_6(VAR_5, 0x10020c);
 for (VAR_8 = VAR_7; VAR_8 > 0x2000000; VAR_8 -= 0x2000000)
  FUNC_3(VAR_9, VAR_8 - 4, VAR_8);

 VAR_7 = FUNC_6(VAR_5, 0x10020c);
 if (VAR_7 != FUNC_2(VAR_9, VAR_7 - 4))

  FUNC_5(VAR_5, VAR_0, VAR_6, 0);

 FUNC_0(VAR_9);
}
