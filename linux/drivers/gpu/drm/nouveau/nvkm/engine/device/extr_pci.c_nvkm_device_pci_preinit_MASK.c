
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_device_pci {int suspend; int pdev; } ;
struct nvkm_device {int dummy; } ;


 struct nvkm_device_pci* FUNC_0 (struct nvkm_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_device *VAR_0)
{
 struct nvkm_device_pci *VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->suspend) {
  int VAR_2 = FUNC_1(VAR_1->pdev);
  if (VAR_2)
   return VAR_2;
  FUNC_2(VAR_1->pdev);
  VAR_1->suspend = 0;
 }
 return 0;
}
