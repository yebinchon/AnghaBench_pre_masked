
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct nvkm_gr {TYPE_2__ engine; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static u32
FUNC_1(struct nvkm_gr *VAR_0)
{
 return FUNC_0(VAR_0->engine.subdev.device, 0x409b00);
}
