
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_devinit {int dummy; } ;
struct nvbios_init {TYPE_2__* subdev; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {struct nvkm_devinit* devinit; } ;


 scalar_t__ FUNC_0 (struct nvbios_init*) ;
 int FUNC_1 (struct nvkm_devinit*,int ,int ) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct nvbios_init *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct nvkm_devinit *VAR_3 = VAR_0->subdev->device->devinit;
 if (FUNC_0(VAR_0)) {
  int VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);
  if (VAR_4)
   FUNC_2("failed to prog pll 0x%08x to %dkHz\n", VAR_1, VAR_2);
 }
}
