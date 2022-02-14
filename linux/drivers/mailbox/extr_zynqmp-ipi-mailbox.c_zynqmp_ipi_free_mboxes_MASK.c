
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zynqmp_ipi_pdata {int num_mboxes; struct zynqmp_ipi_mbox* ipi_mboxes; } ;
struct TYPE_2__ {scalar_t__ parent; } ;
struct zynqmp_ipi_mbox {TYPE_1__ dev; int mbox; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct zynqmp_ipi_pdata *VAR_0)
{
 struct zynqmp_ipi_mbox *VAR_1;
 int VAR_2;

 VAR_2 = VAR_0->num_mboxes;
 for (; VAR_2 >= 0; VAR_2--) {
  VAR_1 = &VAR_0->ipi_mboxes[VAR_2];
  if (VAR_1->dev.parent) {
   FUNC_1(&VAR_1->mbox);
   FUNC_0(&VAR_1->dev);
  }
 }
}
