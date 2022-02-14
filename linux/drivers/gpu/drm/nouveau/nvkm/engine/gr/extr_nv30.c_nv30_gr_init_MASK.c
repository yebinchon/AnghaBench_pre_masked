
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_gr {int dummy; } ;
struct nvkm_device {int chipset; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct nv20_gr {int ctxtab; TYPE_3__ base; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 struct nv20_gr* FUNC_0 (struct nvkm_gr*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvkm_device*,int) ;
 int FUNC_3 (struct nvkm_device*,int,int) ;

int
FUNC_4(struct nvkm_gr *VAR_12)
{
 struct nv20_gr *VAR_13 = FUNC_0(VAR_12);
 struct nvkm_device *VAR_14 = VAR_13->base.engine.subdev.device;

 FUNC_3(VAR_14, VAR_11,
     FUNC_1(VAR_13->ctxtab) >> 4);

 FUNC_3(VAR_14, VAR_0 , 0xFFFFFFFF);
 FUNC_3(VAR_14, VAR_1, 0xFFFFFFFF);

 FUNC_3(VAR_14, VAR_2, 0xFFFFFFFF);
 FUNC_3(VAR_14, VAR_2, 0x00000000);
 FUNC_3(VAR_14, VAR_3, 0x401287c0);
 FUNC_3(VAR_14, 0x400890, 0x01b463ff);
 FUNC_3(VAR_14, VAR_4, 0xf2de0475);
 FUNC_3(VAR_14, VAR_7, 0x00008000);
 FUNC_3(VAR_14, VAR_5, 0xf04bdff6);
 FUNC_3(VAR_14, 0x400B80, 0x1003d888);
 FUNC_3(VAR_14, 0x400B84, 0x0c000000);
 FUNC_3(VAR_14, 0x400098, 0x00000000);
 FUNC_3(VAR_14, 0x40009C, 0x0005ad00);
 FUNC_3(VAR_14, 0x400B88, 0x62ff00ff);
 FUNC_3(VAR_14, 0x4000a0, 0x00000000);
 FUNC_3(VAR_14, 0x4000a4, 0x00000008);
 FUNC_3(VAR_14, 0x4008a8, 0xb784a400);
 FUNC_3(VAR_14, 0x400ba0, 0x002f8685);
 FUNC_3(VAR_14, 0x400ba4, 0x00231f3f);
 FUNC_3(VAR_14, 0x4008a4, 0x40000020);

 if (VAR_14->chipset == 0x34) {
  FUNC_3(VAR_14, VAR_9, 0x00EA0004);
  FUNC_3(VAR_14, VAR_8 , 0x00200201);
  FUNC_3(VAR_14, VAR_9, 0x00EA0008);
  FUNC_3(VAR_14, VAR_8 , 0x00000008);
  FUNC_3(VAR_14, VAR_9, 0x00EA0000);
  FUNC_3(VAR_14, VAR_8 , 0x00000032);
  FUNC_3(VAR_14, VAR_9, 0x00E00004);
  FUNC_3(VAR_14, VAR_8 , 0x00000002);
 }

 FUNC_3(VAR_14, 0x4000c0, 0x00000016);

 FUNC_3(VAR_14, VAR_6, 0x10000100);
 FUNC_3(VAR_14, VAR_10 , 0xFFFFFFFF);
 FUNC_3(VAR_14, 0x0040075c , 0x00000001);



 FUNC_3(VAR_14, 0x4009A4, FUNC_2(VAR_14, 0x100200));
 FUNC_3(VAR_14, 0x4009A8, FUNC_2(VAR_14, 0x100204));
 if (VAR_14->chipset != 0x34) {
  FUNC_3(VAR_14, 0x400750, 0x00EA0000);
  FUNC_3(VAR_14, 0x400754, FUNC_2(VAR_14, 0x100200));
  FUNC_3(VAR_14, 0x400750, 0x00EA0004);
  FUNC_3(VAR_14, 0x400754, FUNC_2(VAR_14, 0x100204));
 }

 return 0;
}
