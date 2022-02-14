
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct amdgpu_device {int mp1_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*) ;
 struct drm_device* FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static void
FUNC_2(struct pci_dev *VAR_2)
{
 struct drm_device *VAR_3 = FUNC_1(VAR_2);
 struct amdgpu_device *VAR_4 = VAR_3->dev_private;






 VAR_4->mp1_state = VAR_1;
 FUNC_0(VAR_4);
 VAR_4->mp1_state = VAR_0;
}
