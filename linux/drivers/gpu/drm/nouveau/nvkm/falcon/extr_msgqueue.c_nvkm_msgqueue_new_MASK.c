
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_secboot {int dummy; } ;
struct nvkm_msgqueue {int fw_version; } ;
struct nvkm_falcon {struct nvkm_subdev* owner; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_falcon*,struct nvkm_secboot const*,struct nvkm_msgqueue**) ;
 int FUNC_1 (struct nvkm_falcon*,struct nvkm_secboot const*,struct nvkm_msgqueue**) ;
 int FUNC_2 (struct nvkm_falcon*,struct nvkm_secboot const*,struct nvkm_msgqueue**) ;
 int FUNC_3 (struct nvkm_subdev const*,char*,int ) ;
 int FUNC_4 (struct nvkm_subdev const*,char*,int ) ;

int
FUNC_5(u32 VAR_1, struct nvkm_falcon *VAR_2,
    const struct nvkm_secboot *VAR_3, struct nvkm_msgqueue **VAR_4)
{
 const struct nvkm_subdev *VAR_5 = VAR_2->owner;
 int VAR_6 = -VAR_0;

 switch (VAR_1) {
 case 0x0137c63d:
  VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);
  break;
 case 0x0137bca5:
  VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);
  break;
 case 0x0148cdec:
 case 0x015ccf3e:
 case 0x0167d263:
  VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);
  break;
 default:
  FUNC_4(VAR_5, "unhandled firmware version 0x%08x\n",
      VAR_1);
  break;
 }

 if (VAR_6 == 0) {
  FUNC_3(VAR_5, "firmware version: 0x%08x\n", VAR_1);
  (*VAR_4)->fw_version = VAR_1;
 }

 return VAR_6;
}
