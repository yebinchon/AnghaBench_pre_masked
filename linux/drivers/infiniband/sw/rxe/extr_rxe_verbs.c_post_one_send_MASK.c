
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rxe_sq {int sq_lock; int queue; } ;
struct rxe_send_wqe {int dummy; } ;
struct rxe_qp {struct rxe_sq sq; } ;
struct ib_send_wr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rxe_qp*,struct ib_send_wr const*,unsigned int,int ,struct rxe_send_wqe*) ;
 struct rxe_send_wqe* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct rxe_qp*,struct ib_send_wr const*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_9(struct rxe_qp *VAR_1, const struct ib_send_wr *VAR_2,
    unsigned int VAR_3, u32 VAR_4)
{
 int VAR_5;
 struct rxe_sq *VAR_6 = &VAR_1->sq;
 struct rxe_send_wqe *VAR_7;
 unsigned long VAR_8;

 VAR_5 = FUNC_8(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_5(&VAR_1->sq.sq_lock, VAR_8);

 if (FUNC_7(FUNC_3(VAR_6->queue))) {
  VAR_5 = -VAR_0;
  goto err1;
 }

 VAR_7 = FUNC_2(VAR_6->queue);

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_7);
 if (FUNC_7(VAR_5))
  goto err1;





 FUNC_4();

 FUNC_0(VAR_6->queue);
 FUNC_6(&VAR_1->sq.sq_lock, VAR_8);

 return 0;

err1:
 FUNC_6(&VAR_1->sq.sq_lock, VAR_8);
 return VAR_5;
}
