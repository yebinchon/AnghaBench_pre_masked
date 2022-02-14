
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_udata {int dummy; } ;
struct ib_qp {int dummy; } ;
struct i40iw_qp {int destroyed; scalar_t__ ibqp_state; scalar_t__ iwscq; scalar_t__ iwrcq; int ibqp; int user_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct i40iw_qp*,scalar_t__) ;
 int FUNC_1 (struct i40iw_qp*,int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 struct i40iw_qp* FUNC_3 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_4(struct ib_qp *VAR_3, struct ib_udata *VAR_4)
{
 struct i40iw_qp *VAR_5 = FUNC_3(VAR_3);

 VAR_5->destroyed = 1;

 if (VAR_5->ibqp_state >= VAR_1 && VAR_5->ibqp_state < VAR_2)
  FUNC_1(VAR_5, VAR_0, 0, 0, 0);

 if (!VAR_5->user_mode) {
  if (VAR_5->iwscq) {
   FUNC_0(VAR_5, VAR_5->iwscq);
   if (VAR_5->iwrcq != VAR_5->iwscq)
    FUNC_0(VAR_5, VAR_5->iwrcq);
  }
 }

 FUNC_2(&VAR_5->ibqp);
 return 0;
}
