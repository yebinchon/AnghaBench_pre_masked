
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx_suspend; } ;
struct TYPE_3__ {scalar_t__ state; } ;
struct siw_qp {int state_lock; TYPE_2__ tx_ctx; TYPE_1__ attrs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct siw_qp*,char*,...) ;
 int FUNC_3 (struct siw_qp*,int ) ;
 int FUNC_4 (struct siw_qp*) ;
 int FUNC_5 (struct siw_qp*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct siw_qp *VAR_1)
{
 if (FUNC_0(&VAR_1->state_lock)) {
  if (FUNC_1(VAR_1->attrs.state == VAR_0 &&
      !VAR_1->tx_ctx.tx_suspend)) {
   int VAR_2 = FUNC_5(VAR_1);

   FUNC_7(&VAR_1->state_lock);

   if (FUNC_6(VAR_2 < 0)) {
    FUNC_2(VAR_1, "SQ task failed: err %d\n", VAR_2);

    if (!VAR_1->tx_ctx.tx_suspend)
     FUNC_3(VAR_1, 0);
   }
  } else {
   FUNC_7(&VAR_1->state_lock);
  }
 } else {
  FUNC_2(VAR_1, "Resume SQ while QP locked\n");
 }
 FUNC_4(VAR_1);
}
