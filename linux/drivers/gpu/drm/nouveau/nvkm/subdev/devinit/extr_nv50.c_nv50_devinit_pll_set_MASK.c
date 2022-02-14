
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_devinit {struct nvkm_subdev subdev; } ;
struct nvkm_device {struct nvkm_bios* bios; } ;
struct nvkm_bios {int dummy; } ;
struct nvbios_pll {int type; int bias_p; scalar_t__ reg; } ;


 int VAR_0 ;



 int FUNC_0 (struct nvkm_subdev*,struct nvbios_pll*,int ,int*,int*,int*,int*,int*) ;
 int FUNC_1 (struct nvkm_bios*,int ,struct nvbios_pll*) ;
 int FUNC_2 (struct nvkm_subdev*,char*,...) ;
 int FUNC_3 (struct nvkm_device*,scalar_t__,int,int) ;
 int FUNC_4 (struct nvkm_device*,scalar_t__,int) ;

int
FUNC_5(struct nvkm_devinit *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct nvkm_subdev *VAR_4 = &VAR_1->subdev;
 struct nvkm_device *VAR_5 = VAR_4->device;
 struct nvkm_bios *VAR_6 = VAR_5->bios;
 struct nvbios_pll VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;

 VAR_13 = FUNC_1(VAR_6, VAR_2, &VAR_7);
 if (VAR_13) {
  FUNC_2(VAR_4, "failed to retrieve pll data, %d\n", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_0(VAR_4, &VAR_7, VAR_3, &VAR_8, &VAR_9, &VAR_10, &VAR_11, &VAR_12);
 if (!VAR_13) {
  FUNC_2(VAR_4, "failed pll calculation\n");
  return -VAR_0;
 }

 switch (VAR_7.type) {
 case 129:
 case 128:
  FUNC_4(VAR_5, VAR_7.reg + 0, 0x10000611);
  FUNC_3(VAR_5, VAR_7.reg + 4, 0x00ff00ff, (VAR_9 << 16) | VAR_8);
  FUNC_3(VAR_5, VAR_7.reg + 8, 0x7fff00ff, (VAR_12 << 28) |
           (VAR_11 << 16) | VAR_10);
  break;
 case 130:
  FUNC_3(VAR_5, VAR_7.reg + 0, 0x01ff0000,
             (VAR_12 << 22) |
      (VAR_7.bias_p << 19) |
      (VAR_12 << 16));
  FUNC_4(VAR_5, VAR_7.reg + 4, (VAR_8 << 8) | VAR_9);
  break;
 default:
  FUNC_3(VAR_5, VAR_7.reg + 0, 0x00070000, (VAR_12 << 16));
  FUNC_4(VAR_5, VAR_7.reg + 4, (VAR_8 << 8) | VAR_9);
  break;
 }

 return 0;
}
