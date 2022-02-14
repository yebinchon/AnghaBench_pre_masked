
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nvkm_ram {TYPE_3__* fb; } ;
struct nvkm_bios {int dummy; } ;
struct nvbios_M0209S {size_t* data; } ;
struct nvbios_M0209E {int v02_07; int v03; } ;
struct nvbios_M0205S {int data; } ;
struct nvbios_M0205E {int type; } ;
struct gk104_ram_train {int mask; struct nvbios_M0209S type09; struct nvbios_M0209S type08; struct nvbios_M0209S type07; struct nvbios_M0209S type06; struct nvbios_M0209S type04; struct nvbios_M0209S type01; struct nvbios_M0209S type00; struct nvbios_M0209S remap; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_6__ {TYPE_2__ subdev; } ;
struct TYPE_4__ {struct nvkm_bios* bios; } ;


 int FUNC_0 (size_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nvkm_bios*,int,int *,int *,int *,int *,struct nvbios_M0205E*) ;
 int FUNC_2 (struct nvkm_bios*,int,int ,int *,int *,struct nvbios_M0205S*) ;
 int FUNC_3 (struct nvkm_bios*,int,int *,int *,int *,int *,struct nvbios_M0209E*) ;
 int FUNC_4 (struct nvkm_bios*,int,int ,int *,int *,struct nvbios_M0209S*) ;

__attribute__((used)) static int
FUNC_5(struct nvkm_ram *VAR_2, int VAR_3, u8 VAR_4,
       struct gk104_ram_train *VAR_5)
{
 struct nvkm_bios *VAR_6 = VAR_2->fb->subdev.device->bios;
 struct nvbios_M0205E VAR_7;
 struct nvbios_M0205S VAR_8;
 struct nvbios_M0209E VAR_9;
 struct nvbios_M0209S *VAR_10 = &VAR_5->remap;
 struct nvbios_M0209S *VAR_11;
 u8 VAR_12, VAR_13, VAR_14, VAR_15;
 u32 VAR_16;


 if (!(VAR_16 = FUNC_1(VAR_6, VAR_3, &VAR_12, &VAR_13, &VAR_14, &VAR_15, &VAR_7)))
  return -VAR_1;

 switch (VAR_7.type) {
 case 0x00: VAR_11 = &VAR_5->type00; break;
 case 0x01: VAR_11 = &VAR_5->type01; break;
 case 0x04: VAR_11 = &VAR_5->type04; break;
 case 0x06: VAR_11 = &VAR_5->type06; break;
 case 0x07: VAR_11 = &VAR_5->type07; break;
 case 0x08: VAR_11 = &VAR_5->type08; break;
 case 0x09: VAR_11 = &VAR_5->type09; break;
 default:
  return 0;
 }


 if (!(VAR_16 = FUNC_2(VAR_6, VAR_3, VAR_4, &VAR_12, &VAR_13, &VAR_8)))
  return -VAR_0;
 VAR_3 = VAR_8.data;


 if (!(VAR_16 = FUNC_3(VAR_6, VAR_3, &VAR_12, &VAR_13, &VAR_14, &VAR_15, &VAR_9)))
  return -VAR_0;


 if (!(VAR_16 = FUNC_4(VAR_6, VAR_3, 0, &VAR_12, &VAR_13, VAR_11)))
  return -VAR_0;

 if (VAR_9.v02_07 == 2) {




  if (!(VAR_16 = FUNC_4(VAR_6, VAR_9.v03, 0, &VAR_12, &VAR_13,
         VAR_10)))
   return -VAR_0;

  for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_11->data); VAR_3++)
   VAR_11->data[VAR_3] = VAR_10->data[VAR_11->data[VAR_3]];
 } else
 if (VAR_9.v02_07 != 1)
  return -VAR_0;

 VAR_5->mask |= 1 << VAR_7.type;
 return 0;
}
