
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxe_send_wqe {int has_rd_atomic; } ;
struct TYPE_2__ {int need_rd_atomic; int rd_atomic; } ;
struct rxe_qp {TYPE_1__ req; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(struct rxe_qp *VAR_1, struct rxe_send_wqe *VAR_2)
{
 int VAR_3;

 if (VAR_2->has_rd_atomic)
  return 0;

 VAR_1->req.need_rd_atomic = 1;
 VAR_3 = FUNC_0(&VAR_1->req.rd_atomic);

 if (VAR_3 >= 0) {
  VAR_1->req.need_rd_atomic = 0;
  VAR_2->has_rd_atomic = 1;
  return 0;
 }

 FUNC_1(&VAR_1->req.rd_atomic);
 return -VAR_0;
}
