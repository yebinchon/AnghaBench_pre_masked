
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efa_dev {int edev; } ;
struct efa_com_destroy_ah_params {int pdn; int ah; } ;
struct TYPE_3__ {int pd; } ;
struct efa_ah {TYPE_1__ ibah; int ah; } ;
struct TYPE_4__ {int pdn; } ;


 int FUNC_0 (int *,struct efa_com_destroy_ah_params*) ;
 TYPE_2__* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct efa_dev *VAR_0, struct efa_ah *VAR_1)
{
 struct efa_com_destroy_ah_params VAR_2 = {
  .ah = VAR_1->ah,
  .pdn = FUNC_1(VAR_1->ibah.pd)->pdn,
 };

 return FUNC_0(&VAR_0->edev, &VAR_2);
}
