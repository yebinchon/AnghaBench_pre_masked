
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct efa_dev {int edev; } ;
struct efa_com_destroy_qp_params {int qp_handle; } ;


 int FUNC_0 (int *,struct efa_com_destroy_qp_params*) ;

__attribute__((used)) static int FUNC_1(struct efa_dev *VAR_0, u32 VAR_1)
{
 struct efa_com_destroy_qp_params VAR_2 = { .qp_handle = VAR_1 };

 return FUNC_0(&VAR_0->edev, &VAR_2);
}
