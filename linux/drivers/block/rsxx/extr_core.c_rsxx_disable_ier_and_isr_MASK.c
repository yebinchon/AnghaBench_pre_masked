
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsxx_cardinfo {scalar_t__ regmap; int ier_mask; int isr_mask; int eeh_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(struct rsxx_cardinfo *VAR_1,
      unsigned int VAR_2)
{
 if (FUNC_2(VAR_1->eeh_state))
  return;

 FUNC_0(&VAR_1->isr_mask, VAR_2);
 FUNC_0(&VAR_1->ier_mask, VAR_2);
 FUNC_1(VAR_1->ier_mask, VAR_1->regmap + VAR_0);
}
