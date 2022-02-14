
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efa_mr {int umem; } ;
struct efa_dev {int ibdev; } ;
struct TYPE_2__ {int inline_pbl_array; } ;
struct efa_com_reg_mr_params {int inline_pbl; int page_num; int page_shift; TYPE_1__ pbl; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct efa_dev*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct efa_dev *VAR_0, struct efa_mr *VAR_1,
     struct efa_com_reg_mr_params *VAR_2)
{
 int VAR_3;

 VAR_2->inline_pbl = 1;
 VAR_3 = FUNC_1(VAR_0, VAR_1->umem, VAR_2->pbl.inline_pbl_array,
    VAR_2->page_num, VAR_2->page_shift);
 if (VAR_3)
  return VAR_3;

 FUNC_0(&VAR_0->ibdev,
    "inline_pbl_array - pages[%u]\n", VAR_2->page_num);

 return 0;
}
