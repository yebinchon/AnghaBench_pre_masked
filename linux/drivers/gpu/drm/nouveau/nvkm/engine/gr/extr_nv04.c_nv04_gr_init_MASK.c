
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_gr {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct nv04_gr {TYPE_3__ base; } ;


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
 int VAR_12 ;
 struct nv04_gr* FUNC_0 (struct nvkm_gr*) ;
 int FUNC_1 (struct nvkm_device*,int ,int,int) ;
 int FUNC_2 (struct nvkm_device*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_gr *VAR_13)
{
 struct nv04_gr *VAR_14 = FUNC_0(VAR_13);
 struct nvkm_device *VAR_15 = VAR_14->base.engine.subdev.device;


 FUNC_2(VAR_15, VAR_0, 0xFFFFFFFF);
 FUNC_2(VAR_15, VAR_1, 0xFFFFFFFF);

 FUNC_2(VAR_15, VAR_11, 0);
 FUNC_2(VAR_15, VAR_12, 0);


 FUNC_2(VAR_15, VAR_5, 0x1231c000);


 FUNC_2(VAR_15, VAR_6, 0x72111100);


 FUNC_2(VAR_15, VAR_7, 0x11d5f071);



 FUNC_2(VAR_15, VAR_8, 0xf0d4ff31);


 FUNC_2(VAR_15, VAR_10 , 0xFFFFFFFF);
 FUNC_2(VAR_15, VAR_3 , 0x10000100);
 FUNC_1(VAR_15, VAR_4, 0xff000000, 0x0f000000);


 FUNC_2(VAR_15, VAR_9, 0x00000000);
 FUNC_2(VAR_15, VAR_2 , 0xFFFFFFFF);
 return 0;
}
