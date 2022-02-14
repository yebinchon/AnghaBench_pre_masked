
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_sc_dev {int hw; scalar_t__ is_pf; } ;
struct i40iw_msix_vector {int irq; scalar_t__ idx; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct i40iw_sc_dev *VAR_0,
         struct i40iw_msix_vector *VAR_1,
         void *VAR_2)
{
 if (VAR_0->is_pf)
  FUNC_3(VAR_0->hw, FUNC_0(VAR_1->idx - 1), 0);
 else
  FUNC_3(VAR_0->hw, FUNC_1(VAR_1->idx - 1), 0);
 FUNC_4(VAR_1->irq, ((void*)0));
 FUNC_2(VAR_1->irq, VAR_2);
}
