
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_ior {TYPE_1__* func; TYPE_4__* disp; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_6__ {struct nvkm_device* device; } ;
struct TYPE_7__ {TYPE_2__ subdev; } ;
struct TYPE_8__ {TYPE_3__ engine; } ;
struct TYPE_5__ {int (* power ) (struct nvkm_ior*,int,int,int,int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nvkm_ior*) ;
 int FUNC_2 (struct nvkm_device*,int const,int,int) ;
 int FUNC_3 (struct nvkm_device*,int const,int) ;
 int FUNC_4 (struct nvkm_ior*,int,int,int,int,int) ;
 int FUNC_5 (struct nvkm_ior*,int,int,int,int,int) ;
 int FUNC_6 (int) ;

int
FUNC_7(struct nvkm_ior *VAR_1, u32 VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_1->disp->engine.subdev.device;
 const u32 VAR_4 = FUNC_1(VAR_1);

 VAR_1->func->power(VAR_1, 0, 1, 0, 0, 0);

 FUNC_3(VAR_3, 0x61a00c + VAR_4, 0x00100000 | VAR_2);
 FUNC_0(9);
 FUNC_6(500);
 VAR_2 = FUNC_2(VAR_3, 0x61a00c + VAR_4, 0xffffffff, 0x00000000);

 VAR_1->func->power(VAR_1, 0, 0, 0, 0, 0);
 if (!(VAR_2 & 0x80000000))
  return -VAR_0;

 return (VAR_2 & 0x38000000) >> 27;
}
