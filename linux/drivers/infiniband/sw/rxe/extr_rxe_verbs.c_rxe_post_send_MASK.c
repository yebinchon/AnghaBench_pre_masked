
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; int task; } ;
struct rxe_qp {TYPE_1__ req; scalar_t__ is_user; int valid; } ;
struct ib_send_wr {int dummy; } ;
struct ib_qp {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rxe_qp*,struct ib_send_wr const*,struct ib_send_wr const**) ;
 int FUNC_1 (int *,int ) ;
 struct rxe_qp* FUNC_2 (struct ib_qp*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ib_qp *VAR_2, const struct ib_send_wr *VAR_3,
    const struct ib_send_wr **VAR_4)
{
 struct rxe_qp *VAR_5 = FUNC_2(VAR_2);

 if (FUNC_3(!VAR_5->valid)) {
  *VAR_4 = VAR_3;
  return -VAR_0;
 }

 if (FUNC_3(VAR_5->req.state < VAR_1)) {
  *VAR_4 = VAR_3;
  return -VAR_0;
 }

 if (VAR_5->is_user) {

  FUNC_1(&VAR_5->req.task, 0);
  return 0;
 } else
  return FUNC_0(VAR_5, VAR_3, VAR_4);
}
