
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ opcode; } ;
struct ib_atomic_wr {int compare_add; int swap; TYPE_1__ wr; } ;
struct hns_roce_wqe_atomic_seg {void* cmp_data; void* fetchadd_swap_data; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct hns_roce_wqe_atomic_seg *VAR_1,
      const struct ib_atomic_wr *VAR_2)
{
 if (VAR_2->wr.opcode == VAR_0) {
  VAR_1->fetchadd_swap_data = FUNC_0(VAR_2->swap);
  VAR_1->cmp_data = FUNC_0(VAR_2->compare_add);
 } else {
  VAR_1->fetchadd_swap_data = FUNC_0(VAR_2->compare_add);
  VAR_1->cmp_data = 0;
 }
}
