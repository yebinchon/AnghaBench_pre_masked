
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i40iw_sc_qp {scalar_t__ back_qp; } ;
struct TYPE_2__ {int qp_num; } ;
struct i40iw_qp {int iwpd; struct i40iw_device* iwdev; TYPE_1__ ibqp; } ;
struct i40iw_device {int dummy; } ;
struct i40iw_cqp_request {scalar_t__ param; } ;


 int FUNC_0 (struct i40iw_device*,struct i40iw_qp*,int ) ;
 int FUNC_1 (struct i40iw_device*) ;
 int FUNC_2 (int ,struct i40iw_device*) ;

__attribute__((used)) static void FUNC_3(struct i40iw_cqp_request *VAR_0, u32 VAR_1)
{
 struct i40iw_sc_qp *VAR_2 = (struct i40iw_sc_qp *)VAR_0->param;
 struct i40iw_qp *VAR_3 = (struct i40iw_qp *)VAR_2->back_qp;
 struct i40iw_device *VAR_4;
 u32 VAR_5 = VAR_3->ibqp.qp_num;

 VAR_4 = VAR_3->iwdev;

 FUNC_2(VAR_3->iwpd, VAR_4);
 FUNC_0(VAR_4, VAR_3, VAR_5);
 FUNC_1(VAR_4);
}
