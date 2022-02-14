
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_devinit {int dummy; } ;
struct nvbios_init {int offset; TYPE_2__* subdev; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {struct nvkm_devinit* devinit; } ;


 scalar_t__ FUNC_0 (struct nvbios_init*) ;
 int FUNC_1 (struct nvbios_init*,int) ;
 int FUNC_2 (struct nvkm_devinit*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(struct nvbios_init *VAR_0)
{
 struct nvkm_devinit *VAR_1 = VAR_0->subdev->device->devinit;

 FUNC_3("COMPUTE_MEM\n");
 VAR_0->offset += 1;

 FUNC_1(VAR_0, 1);
 if (FUNC_0(VAR_0))
  FUNC_2(VAR_1);
 FUNC_1(VAR_0, 0);
}
