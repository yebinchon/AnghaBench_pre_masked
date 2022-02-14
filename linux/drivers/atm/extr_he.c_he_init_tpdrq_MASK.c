
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct he_tpdrq {int dummy; } ;
struct he_dev {int tpdrq_phys; int * tpdrq_base; int * tpdrq_head; int * tpdrq_tail; TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int *,int,int*,int ) ;
 int FUNC_1 (struct he_dev*,int,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct he_dev *VAR_6)
{
 VAR_6->tpdrq_base = FUNC_0(&VAR_6->pci_dev->dev,
      VAR_0 * sizeof(struct he_tpdrq),
      &VAR_6->tpdrq_phys,
      VAR_2);
 if (VAR_6->tpdrq_base == ((void*)0)) {
  FUNC_2("failed to alloc tpdrq\n");
  return -VAR_1;
 }

 VAR_6->tpdrq_tail = VAR_6->tpdrq_base;
 VAR_6->tpdrq_head = VAR_6->tpdrq_base;

 FUNC_1(VAR_6, VAR_6->tpdrq_phys, VAR_3);
 FUNC_1(VAR_6, 0, VAR_5);
 FUNC_1(VAR_6, VAR_0 - 1, VAR_4);

 return 0;
}
