
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_umem {TYPE_1__* owning_mm; int ibdev; scalar_t__ is_odp; } ;
struct TYPE_2__ {int pinned_vm; } ;


 int FUNC_0 (int ,struct ib_umem*,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ib_umem*) ;
 void FUNC_3 (int ) ;
 int FUNC_4 (struct ib_umem*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct ib_umem*) ;

void FUNC_7(struct ib_umem *VAR_0)
{
 if (!VAR_0)
  return;
 if (VAR_0->is_odp)
  return FUNC_3(FUNC_6(VAR_0));

 FUNC_0(VAR_0->ibdev, VAR_0, 1);

 FUNC_1(FUNC_2(VAR_0), &VAR_0->owning_mm->pinned_vm);
 FUNC_5(VAR_0->owning_mm);
 FUNC_4(VAR_0);
}
