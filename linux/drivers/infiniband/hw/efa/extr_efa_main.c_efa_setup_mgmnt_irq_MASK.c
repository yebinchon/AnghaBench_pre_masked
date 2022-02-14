
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int name; int vector; int affinity_hint_mask; int cpu; struct efa_dev* data; int handler; } ;
struct efa_dev {TYPE_3__ admin_irq; TYPE_1__* pdev; int admin_msix_vector_idx; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,char*,TYPE_3__*,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 char* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,char*,char*) ;

__attribute__((used)) static void FUNC_6(struct efa_dev *VAR_3)
{
 u32 VAR_4;

 FUNC_5(VAR_3->admin_irq.name, VAR_0,
   "efa-mgmnt@pci:%s", FUNC_4(VAR_3->pdev));
 VAR_3->admin_irq.handler = VAR_2;
 VAR_3->admin_irq.data = VAR_3;
 VAR_3->admin_irq.vector =
  FUNC_3(VAR_3->pdev, VAR_3->admin_msix_vector_idx);
 VAR_4 = FUNC_0(VAR_1);
 VAR_3->admin_irq.cpu = VAR_4;
 FUNC_1(VAR_4,
   &VAR_3->admin_irq.affinity_hint_mask);
 FUNC_2(&VAR_3->pdev->dev, "Setup irq:0x%p vector:%d name:%s\n",
   &VAR_3->admin_irq,
   VAR_3->admin_irq.vector,
   VAR_3->admin_irq.name);
}
