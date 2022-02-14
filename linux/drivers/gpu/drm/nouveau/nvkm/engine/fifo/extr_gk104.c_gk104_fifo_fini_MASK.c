
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvkm_fifo {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_8__ {int work; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_7__ {TYPE_2__ engine; } ;
struct gk104_fifo {TYPE_4__ recover; TYPE_3__ base; } ;


 int FUNC_0 (int *) ;
 struct gk104_fifo* FUNC_1 (struct nvkm_fifo*) ;
 int FUNC_2 (struct nvkm_device*,int,int,int) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_fifo *VAR_0)
{
 struct gk104_fifo *VAR_1 = FUNC_1(VAR_0);
 struct nvkm_device *VAR_2 = VAR_1->base.engine.subdev.device;
 FUNC_0(&VAR_1->recover.work);

 FUNC_2(VAR_2, 0x002140, 0x10000000, 0x10000000);
}
