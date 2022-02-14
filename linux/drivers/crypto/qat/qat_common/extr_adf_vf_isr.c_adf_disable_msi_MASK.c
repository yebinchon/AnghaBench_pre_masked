
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int irq_name; } ;
struct adf_accel_dev {TYPE_1__ vf; } ;


 struct pci_dev* FUNC_0 (struct adf_accel_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_3(struct adf_accel_dev *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0->vf.irq_name);
 FUNC_2(VAR_1);
}
