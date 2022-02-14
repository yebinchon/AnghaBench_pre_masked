
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pwr_rail_t {int mode; int extdev_id; int resistor_count; int config; TYPE_1__* resistors; } ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_bios {struct nvkm_subdev subdev; } ;
struct nvbios_iccsense {int nr_entry; struct pwr_rail_t* rail; } ;
struct nvbios_extdev_func {int type; } ;
struct TYPE_2__ {int mohm; int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 struct pwr_rail_t* FUNC_0 (int,int,int ) ;
 scalar_t__ FUNC_1 (struct nvkm_bios*,int,struct nvbios_extdev_func*) ;
 int FUNC_2 (struct nvkm_bios*,int*,int*,int*,int*) ;
 int FUNC_3 (struct nvkm_bios*,int) ;
 int FUNC_4 (struct nvkm_bios*,int) ;
 int FUNC_5 (struct nvkm_subdev*,char*,int) ;

int
FUNC_6(struct nvkm_bios *VAR_3, struct nvbios_iccsense *VAR_4)
{
 struct nvkm_subdev *VAR_5 = &VAR_3->subdev;
 u8 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 u32 VAR_11, VAR_12;

 VAR_11 = FUNC_2(VAR_3, &VAR_6, &VAR_7, &VAR_8, &VAR_9);
 if (!VAR_11 || !VAR_8)
  return -VAR_0;

 if (VAR_6 != 0x10 && VAR_6 != 0x20) {
  FUNC_5(VAR_5, "ICCSENSE version 0x%02x unknown\n", VAR_6);
  return -VAR_0;
 }

 VAR_4->nr_entry = VAR_8;
 VAR_4->rail = FUNC_0(VAR_8, sizeof(struct pwr_rail_t),
           VAR_2);
 if (!VAR_4->rail)
  return -VAR_1;

 for (VAR_10 = 0; VAR_10 < VAR_8; ++VAR_10) {
  struct nvbios_extdev_func VAR_13;
  struct pwr_rail_t *VAR_14 = &VAR_4->rail[VAR_10];
  u8 VAR_15 = 0;
  int VAR_16;

  VAR_12 = VAR_11 + VAR_7 + VAR_10 * VAR_9;

  switch(VAR_6) {
  case 0x10:
   if ((FUNC_3(VAR_3, VAR_12 + 0x1) & 0xf8) == 0xf8)
    VAR_14->mode = 1;
   else
    VAR_14->mode = 0;
   VAR_14->extdev_id = FUNC_3(VAR_3, VAR_12 + 0x2);
   VAR_15 = 0x3;
   break;
  case 0x20:
   VAR_14->mode = FUNC_3(VAR_3, VAR_12);
   VAR_14->extdev_id = FUNC_3(VAR_3, VAR_12 + 0x1);
   VAR_15 = 0x5;
   break;
  }

  if (FUNC_1(VAR_3, VAR_14->extdev_id, &VAR_13))
   continue;

  switch (VAR_13.type) {
  case 130:
  case 129:
   VAR_14->resistor_count = 1;
   break;
  case 128:
   VAR_14->resistor_count = 3;
   break;
  default:
   VAR_14->resistor_count = 0;
   break;
  }

  for (VAR_16 = 0; VAR_16 < VAR_14->resistor_count; ++VAR_16) {
   VAR_14->resistors[VAR_16].mohm = FUNC_3(VAR_3, VAR_12 + VAR_15 + VAR_16 * 2);
   VAR_14->resistors[VAR_16].enabled = !(FUNC_3(VAR_3, VAR_12 + VAR_15 + VAR_16 * 2 + 1) & 0x40);
  }
  VAR_14->config = FUNC_4(VAR_3, VAR_12 + VAR_15 + VAR_14->resistor_count * 2);
 }

 return 0;
}
