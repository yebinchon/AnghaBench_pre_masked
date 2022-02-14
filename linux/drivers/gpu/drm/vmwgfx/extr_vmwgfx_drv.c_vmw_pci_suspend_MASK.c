
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {scalar_t__ refuse_hibernation; } ;
struct pci_dev {int dummy; } ;
struct drm_device {int dummy; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*) ;
 struct drm_device* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 struct vmw_private* FUNC_4 (struct drm_device*) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_2, pm_message_t VAR_3)
{
 struct drm_device *VAR_4 = FUNC_1(VAR_2);
 struct vmw_private *VAR_5 = FUNC_4(VAR_4);

 if (VAR_5->refuse_hibernation)
  return -VAR_0;

 FUNC_2(VAR_2);
 FUNC_0(VAR_2);
 FUNC_3(VAR_2, VAR_1);
 return 0;
}
