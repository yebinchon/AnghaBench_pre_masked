
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct TYPE_4__ {int used_cnt; TYPE_1__* msix; scalar_t__ msix_cnt; } ;
struct qedr_dev {int num_hwfns; size_t affin_hwfn_idx; TYPE_2__ int_info; int * cnq_array; } ;
struct TYPE_3__ {int vector; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct qedr_dev *VAR_0)
{
 u32 VAR_1;
 u16 VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->int_info.used_cnt; VAR_3++) {
  if (VAR_0->int_info.msix_cnt) {
   VAR_2 = VAR_3 * VAR_0->num_hwfns + VAR_0->affin_hwfn_idx;
   VAR_1 = VAR_0->int_info.msix[VAR_2].vector;
   FUNC_1(VAR_1);
   FUNC_0(VAR_1, &VAR_0->cnq_array[VAR_3]);
  }
 }

 VAR_0->int_info.used_cnt = 0;
}
