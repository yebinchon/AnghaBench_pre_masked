
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct c4iw_qp_attributes {int next_state; } ;
struct TYPE_3__ {TYPE_2__* qp; scalar_t__ cm_id; } ;
struct c4iw_ep {TYPE_1__ com; int srqe_idx; } ;
struct c4iw_dev {int dummy; } ;
struct TYPE_4__ {int rhp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*,int ,struct c4iw_qp_attributes*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct c4iw_ep*,int ) ;
 int FUNC_3 (struct c4iw_ep*) ;
 int FUNC_4 (struct c4iw_ep*) ;

__attribute__((used)) static void FUNC_5(struct c4iw_dev *VAR_2, struct c4iw_ep *VAR_3)
{
 FUNC_2(VAR_3, VAR_3->srqe_idx);
 if (VAR_3->com.cm_id && VAR_3->com.qp) {
  struct c4iw_qp_attributes VAR_4;

  VAR_4.next_state = VAR_1;
  FUNC_0(VAR_3->com.qp->rhp, VAR_3->com.qp,
          VAR_0, &VAR_4, 1);
 }
 FUNC_3(VAR_3);
 FUNC_4(VAR_3);
 FUNC_1(&VAR_3->com);
}
