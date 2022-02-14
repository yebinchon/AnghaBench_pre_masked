
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_devinit {struct nvkm_subdev subdev; } ;
struct nvkm_device {int bios; } ;
struct nvbios_pll {int type; int reg; } ;


 int VAR_0 ;




 int FUNC_0 (struct nvkm_subdev*,struct nvbios_pll*,int ,int*,int*,int*,int*) ;
 int FUNC_1 (int ,int ,struct nvbios_pll*) ;
 int FUNC_2 (struct nvkm_device*,int ,int,int) ;
 int FUNC_3 (struct nvkm_subdev*,char*,int ,int ) ;
 int FUNC_4 (struct nvkm_device*,int ,int) ;

int
FUNC_5(struct nvkm_devinit *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct nvkm_subdev *VAR_4 = &VAR_1->subdev;
 struct nvkm_device *VAR_5 = VAR_4->device;
 struct nvbios_pll VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_5->bios, VAR_2, &VAR_6);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_0(VAR_4, &VAR_6, VAR_3, &VAR_7, &VAR_8, &VAR_9, &VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 switch (VAR_6.type) {
 case 131:
 case 130:
 case 129:
 case 128:
  FUNC_2(VAR_5, VAR_6.reg + 0x0c, 0x00000000, 0x00000100);
  FUNC_4(VAR_5, VAR_6.reg + 0x04, (VAR_10 << 16) | (VAR_7 << 8) | VAR_9);
  FUNC_4(VAR_5, VAR_6.reg + 0x10, VAR_8 << 16);
  break;
 default:
  FUNC_3(VAR_4, "%08x/%dKhz unimplemented\n", VAR_2, VAR_3);
  VAR_11 = -VAR_0;
  break;
 }

 return VAR_11;
}
