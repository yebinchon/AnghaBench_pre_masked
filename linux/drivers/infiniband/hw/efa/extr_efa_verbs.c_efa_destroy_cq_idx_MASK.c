
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efa_dev {int edev; } ;
struct efa_com_destroy_cq_params {int cq_idx; } ;


 int FUNC_0 (int *,struct efa_com_destroy_cq_params*) ;

__attribute__((used)) static int FUNC_1(struct efa_dev *VAR_0, int VAR_1)
{
 struct efa_com_destroy_cq_params VAR_2 = { .cq_idx = VAR_1 };

 return FUNC_0(&VAR_0->edev, &VAR_2);
}
