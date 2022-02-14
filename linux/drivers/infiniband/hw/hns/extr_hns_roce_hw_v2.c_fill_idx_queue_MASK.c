
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_idx_que {int entry_sz; int idx_buf; } ;


 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(struct hns_roce_idx_que *VAR_0,
      int VAR_1, int VAR_2)
{
 unsigned int *VAR_3;

 VAR_3 = (unsigned int *)FUNC_0(&VAR_0->idx_buf,
         VAR_1 * VAR_0->entry_sz);
 *VAR_3 = VAR_2;
}
