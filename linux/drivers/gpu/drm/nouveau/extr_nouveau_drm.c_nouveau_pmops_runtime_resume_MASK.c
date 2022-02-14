
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct nvif_device {int object; } ;
struct TYPE_2__ {struct nvif_device device; } ;
struct nouveau_drm {int hpd_work; TYPE_1__ client; } ;
struct drm_device {int switch_power_state; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nouveau_drm*,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (struct drm_device*,int) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int,int,int) ;
 int FUNC_5 (struct pci_dev*) ;
 struct drm_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int ) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (int *) ;
 struct pci_dev* FUNC_12 (struct device*) ;

__attribute__((used)) static int
FUNC_13(struct device *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_12(VAR_3);
 struct drm_device *VAR_5 = FUNC_6(VAR_4);
 struct nouveau_drm *VAR_6 = FUNC_2(VAR_5);
 struct nvif_device *VAR_7 = &FUNC_2(VAR_5)->client.device;
 int VAR_8;

 if (!FUNC_3()) {
  FUNC_10(VAR_3);
  return -VAR_1;
 }

 FUNC_9(VAR_4, VAR_2);
 FUNC_7(VAR_4);
 VAR_8 = FUNC_5(VAR_4);
 if (VAR_8)
  return VAR_8;
 FUNC_8(VAR_4);

 VAR_8 = FUNC_1(VAR_5, 1);
 if (VAR_8) {
  FUNC_0(VAR_6, "resume failed with: %d\n", VAR_8);
  return VAR_8;
 }


 FUNC_4(&VAR_7->object, 0x088488, (1 << 25), (1 << 25));
 VAR_5->switch_power_state = VAR_0;


 FUNC_11(&FUNC_2(VAR_5)->hpd_work);

 return VAR_8;
}
