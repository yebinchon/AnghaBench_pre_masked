
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct drm_psb_private {int suspended; int display_power; int pge_ctl; int gmch_ctrl; TYPE_1__* ops; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct TYPE_2__ {int (* restore_regs ) (struct drm_device*) ;int (* power_up ) (struct drm_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct drm_device* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_4)
{
 struct drm_device *VAR_5 = FUNC_1(VAR_4);
 struct drm_psb_private *VAR_6 = VAR_5->dev_private;


 VAR_6->ops->power_up(VAR_5);
 VAR_6->suspended = 0;
 VAR_6->display_power = 1;

 FUNC_0(VAR_6->pge_ctl | VAR_3, VAR_1);
 FUNC_2(VAR_4, VAR_0,
   VAR_6->gmch_ctrl | VAR_2);

 FUNC_3(VAR_5);
 VAR_6->ops->restore_regs(VAR_5);
}
