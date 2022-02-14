
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct nvkm_device* device; } ;
struct nvkm_pci {scalar_t__ irq; TYPE_2__* func; scalar_t__ msi; TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int (* msi_rearm ) (struct nvkm_pci*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_device*,int*) ;
 int FUNC_1 (struct nvkm_device*) ;
 int FUNC_2 (struct nvkm_device*) ;
 int FUNC_3 (struct nvkm_pci*) ;

__attribute__((used)) static irqreturn_t
FUNC_4(int VAR_2, void *VAR_3)
{
 struct nvkm_pci *VAR_4 = VAR_3;
 struct nvkm_device *VAR_5 = VAR_4->subdev.device;
 bool VAR_6 = 0;

 if (VAR_4->irq < 0)
  return VAR_0;

 FUNC_2(VAR_5);
 if (VAR_4->msi)
  VAR_4->func->msi_rearm(VAR_4);
 FUNC_0(VAR_5, &VAR_6);
 FUNC_1(VAR_5);
 return VAR_6 ? VAR_0 : VAR_1;
}
