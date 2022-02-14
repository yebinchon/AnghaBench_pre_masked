
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int devfn; int bus; } ;
struct bridge_controller {int dummy; } ;
struct TYPE_4__ {int reg; } ;
struct TYPE_3__ {int w_tflush; } ;


 struct bridge_controller* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (struct bridge_controller*,int ,int ) ;
 int FUNC_3 (struct bridge_controller*,int ) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_3)
{
 struct bridge_controller *VAR_4 = FUNC_0(VAR_3->bus);
 int VAR_5 = FUNC_1(VAR_3->devfn);


 FUNC_2(VAR_4, VAR_1[VAR_5].reg, VAR_0);
 FUNC_3(VAR_4, VAR_2.w_tflush);
}
