
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int mthd; int size; int* data; } ;
struct nvkm_memx {TYPE_3__ c; TYPE_2__* pmu; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;


 int FUNC_0 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct nvkm_memx *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->pmu->subdev.device;
 int VAR_2;

 if (VAR_0->c.mthd) {
  FUNC_0(VAR_1, 0x10a1c4, (VAR_0->c.size << 16) | VAR_0->c.mthd);
  for (VAR_2 = 0; VAR_2 < VAR_0->c.size; VAR_2++)
   FUNC_0(VAR_1, 0x10a1c4, VAR_0->c.data[VAR_2]);
  VAR_0->c.mthd = 0;
  VAR_0->c.size = 0;
 }
}
