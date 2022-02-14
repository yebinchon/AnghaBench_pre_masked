
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_bios {struct nvkm_subdev subdev; } ;
struct nvbios_power_budget {int cap_entry; int ver; int hlen; int elen; int ecount; scalar_t__ offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nvkm_bios*,int*,int*,int*,int*) ;
 int FUNC_1 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_2 (struct nvkm_subdev*,char*) ;

int
FUNC_3(struct nvkm_bios *VAR_2,
                           struct nvbios_power_budget *VAR_3)
{
 struct nvkm_subdev *VAR_4 = &VAR_2->subdev;
 u8 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 u32 VAR_10;

 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_2, &VAR_5, &VAR_6, &VAR_7, &VAR_8);
 if (!VAR_10 || !VAR_7)
  return -VAR_1;

 switch (VAR_5) {
 case 0x20:
  VAR_9 = FUNC_1(VAR_2, VAR_10 + 0x9);
  break;
 case 0x30:
  VAR_9 = FUNC_1(VAR_2, VAR_10 + 0xa);
  break;
 default:
  VAR_9 = 0xff;
 }

 if (VAR_9 >= VAR_7 && VAR_9 != 0xff) {
  FUNC_2(VAR_4,
            "invalid cap_entry in power budget table found\n");
  VAR_3->cap_entry = 0xff;
  return -VAR_0;
 }

 VAR_3->offset = VAR_10;
 VAR_3->ver = VAR_5;
 VAR_3->hlen = VAR_6;
 VAR_3->elen = VAR_8;
 VAR_3->ecount = VAR_7;

 VAR_3->cap_entry = VAR_9;

 return 0;
}
