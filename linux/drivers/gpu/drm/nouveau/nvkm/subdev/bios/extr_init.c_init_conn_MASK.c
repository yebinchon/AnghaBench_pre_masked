
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_init {TYPE_3__* outp; TYPE_2__* subdev; } ;
struct nvbios_connE {int type; } ;
struct TYPE_6__ {scalar_t__ connector; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_4__ {struct nvkm_bios* bios; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct nvbios_init*) ;
 scalar_t__ FUNC_2 (struct nvkm_bios*,scalar_t__,int*,int*,struct nvbios_connE*) ;

__attribute__((used)) static u8
FUNC_3(struct nvbios_init *VAR_0)
{
 struct nvkm_bios *VAR_1 = VAR_0->subdev->device->bios;
 struct nvbios_connE VAR_2;
 u8 VAR_3, VAR_4;
 u32 VAR_5;

 if (FUNC_1(VAR_0)) {
  if (VAR_0->outp) {
   VAR_5 = VAR_0->outp->connector;
   VAR_5 = FUNC_2(VAR_1, VAR_5, &VAR_3, &VAR_4, &VAR_2);
   if (VAR_5)
    return VAR_2.type;
  }

  FUNC_0("script needs connector type\n");
 }

 return 0xff;
}
