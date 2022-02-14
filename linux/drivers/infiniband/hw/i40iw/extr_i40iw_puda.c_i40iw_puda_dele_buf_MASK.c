
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_sc_dev {int hw; } ;
struct i40iw_puda_buf {int buf_mem; int mem; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct i40iw_sc_dev *VAR_0,
    struct i40iw_puda_buf *VAR_1)
{
 FUNC_0(VAR_0->hw, &VAR_1->mem);
 FUNC_1(VAR_0->hw, &VAR_1->buf_mem);
}
