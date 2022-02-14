
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_device_pci {int suspend; int pdev; } ;
struct nvkm_device {int dummy; } ;


 struct nvkm_device_pci* FUNC_0 (struct nvkm_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_device *VAR_0, bool VAR_1)
{
 struct nvkm_device_pci *VAR_2 = FUNC_0(VAR_0);
 if (VAR_1) {
  FUNC_1(VAR_2->pdev);
  VAR_2->suspend = 1;
 }
}
