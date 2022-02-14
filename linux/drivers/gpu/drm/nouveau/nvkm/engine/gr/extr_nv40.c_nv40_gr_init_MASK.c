
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_gr {int dummy; } ;
struct nvkm_device {int chipset; TYPE_4__* func; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_7__ {TYPE_2__ engine; } ;
struct nv40_gr {int size; TYPE_3__ base; } ;
struct TYPE_8__ {int (* resource_size ) (struct nvkm_device*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct nv40_gr* FUNC_0 (struct nvkm_gr*) ;
 int FUNC_1 (struct nvkm_device*,int *) ;
 int FUNC_2 (struct nvkm_device*,int) ;
 int FUNC_3 (struct nvkm_device*,int,int) ;
 int FUNC_4 (struct nvkm_device*,int) ;

int
FUNC_5(struct nvkm_gr *VAR_10)
{
 struct nv40_gr *VAR_11 = FUNC_0(VAR_10);
 struct nvkm_device *VAR_12 = VAR_11->base.engine.subdev.device;
 int VAR_13, VAR_14, VAR_15;
 u32 VAR_16;


 VAR_13 = FUNC_1(VAR_12, &VAR_11->size);
 if (VAR_13)
  return VAR_13;


 FUNC_3(VAR_12, VAR_8, 0x00000000);

 FUNC_3(VAR_12, VAR_0 , 0xFFFFFFFF);
 FUNC_3(VAR_12, VAR_9, 0xFFFFFFFF);

 FUNC_3(VAR_12, VAR_1, 0xFFFFFFFF);
 FUNC_3(VAR_12, VAR_1, 0x00000000);
 FUNC_3(VAR_12, VAR_2, 0x401287c0);
 FUNC_3(VAR_12, VAR_3, 0xe0de8055);
 FUNC_3(VAR_12, VAR_6, 0x00008000);
 FUNC_3(VAR_12, VAR_4, 0x00be3c5f);

 FUNC_3(VAR_12, VAR_5, 0x10010100);
 FUNC_3(VAR_12, VAR_7 , 0xFFFFFFFF);

 VAR_15 = FUNC_2(VAR_12, 0x1540) & 0xff;
 if (VAR_15) {
  for (VAR_14 = 0; !(VAR_15 & 1); VAR_15 >>= 1, VAR_14++)
   ;
  FUNC_3(VAR_12, 0x405000, VAR_14);
 }

 if (VAR_12->chipset == 0x40) {
  FUNC_3(VAR_12, 0x4009b0, 0x83280fff);
  FUNC_3(VAR_12, 0x4009b4, 0x000000a0);
 } else {
  FUNC_3(VAR_12, 0x400820, 0x83280eff);
  FUNC_3(VAR_12, 0x400824, 0x000000a0);
 }

 switch (VAR_12->chipset) {
 case 0x40:
 case 0x45:
  FUNC_3(VAR_12, 0x4009b8, 0x0078e366);
  FUNC_3(VAR_12, 0x4009bc, 0x0000014c);
  break;
 case 0x41:
 case 0x42:

  FUNC_3(VAR_12, 0x400828, 0x007596ff);
  FUNC_3(VAR_12, 0x40082c, 0x00000108);
  break;
 case 0x43:
  FUNC_3(VAR_12, 0x400828, 0x0072cb77);
  FUNC_3(VAR_12, 0x40082c, 0x00000108);
  break;
 case 0x44:
 case 0x46:
 case 0x4a:
 case 0x4c:
 case 0x4e:
  FUNC_3(VAR_12, 0x400860, 0);
  FUNC_3(VAR_12, 0x400864, 0);
  break;
 case 0x47:
 case 0x49:
 case 0x4b:
  FUNC_3(VAR_12, 0x400828, 0x07830610);
  FUNC_3(VAR_12, 0x40082c, 0x0000016A);
  break;
 default:
  break;
 }

 FUNC_3(VAR_12, 0x400b38, 0x2ffff800);
 FUNC_3(VAR_12, 0x400b3c, 0x00006000);


 switch (VAR_12->chipset) {
 case 0x44:
 case 0x4a:
  FUNC_3(VAR_12, 0x400bc4, 0x1003d888);
  FUNC_3(VAR_12, 0x400bbc, 0xb7a7b500);
  break;
 case 0x46:
  FUNC_3(VAR_12, 0x400bc4, 0x0000e024);
  FUNC_3(VAR_12, 0x400bbc, 0xb7a7b520);
  break;
 case 0x4c:
 case 0x4e:
 case 0x67:
  FUNC_3(VAR_12, 0x400bc4, 0x1003d888);
  FUNC_3(VAR_12, 0x400bbc, 0xb7a7b540);
  break;
 default:
  break;
 }


 VAR_16 = VAR_12->func->resource_size(VAR_12, 1) - 1;
 switch (VAR_12->chipset) {
 case 0x40:
  FUNC_3(VAR_12, 0x4009A4, FUNC_2(VAR_12, 0x100200));
  FUNC_3(VAR_12, 0x4009A8, FUNC_2(VAR_12, 0x100204));
  FUNC_3(VAR_12, 0x4069A4, FUNC_2(VAR_12, 0x100200));
  FUNC_3(VAR_12, 0x4069A8, FUNC_2(VAR_12, 0x100204));
  FUNC_3(VAR_12, 0x400820, 0);
  FUNC_3(VAR_12, 0x400824, 0);
  FUNC_3(VAR_12, 0x400864, VAR_16);
  FUNC_3(VAR_12, 0x400868, VAR_16);
  break;
 default:
  switch (VAR_12->chipset) {
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x45:
  case 0x4e:
  case 0x44:
  case 0x4a:
   FUNC_3(VAR_12, 0x4009F0, FUNC_2(VAR_12, 0x100200));
   FUNC_3(VAR_12, 0x4009F4, FUNC_2(VAR_12, 0x100204));
   break;
  default:
   FUNC_3(VAR_12, 0x400DF0, FUNC_2(VAR_12, 0x100200));
   FUNC_3(VAR_12, 0x400DF4, FUNC_2(VAR_12, 0x100204));
   break;
  }
  FUNC_3(VAR_12, 0x4069F0, FUNC_2(VAR_12, 0x100200));
  FUNC_3(VAR_12, 0x4069F4, FUNC_2(VAR_12, 0x100204));
  FUNC_3(VAR_12, 0x400840, 0);
  FUNC_3(VAR_12, 0x400844, 0);
  FUNC_3(VAR_12, 0x4008A0, VAR_16);
  FUNC_3(VAR_12, 0x4008A4, VAR_16);
  break;
 }

 return 0;
}
