
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct i40iw_cm_node {scalar_t__ send_rdma0_op; scalar_t__ ord_size; scalar_t__ ird_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(struct i40iw_cm_node *VAR_3, u32 VAR_4,
     u32 VAR_5)
{
 if (VAR_4 > VAR_0)
  VAR_4 = VAR_0;

 if (VAR_5 > VAR_1)
  VAR_5 = VAR_1;
 else if (!VAR_5 && VAR_3->send_rdma0_op == VAR_2)
  VAR_5 = 1;

 VAR_3->ird_size = VAR_4;
 VAR_3->ord_size = VAR_5;
}
