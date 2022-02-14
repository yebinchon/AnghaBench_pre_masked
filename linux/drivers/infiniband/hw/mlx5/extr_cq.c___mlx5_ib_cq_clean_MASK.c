
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx5_ib_srq {int dummy; } ;
struct TYPE_4__ {int cons_index; int cqe_sz; } ;
struct TYPE_3__ {int cqe; } ;
struct mlx5_ib_cq {TYPE_2__ mcq; TYPE_1__ ibcq; } ;
struct mlx5_cqe64 {int op_own; int wqe_counter; int srqn; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (struct mlx5_ib_cq*,int) ;
 scalar_t__ FUNC_2 (struct mlx5_ib_cq*,int) ;
 scalar_t__ FUNC_3 (struct mlx5_cqe64*,int) ;
 int FUNC_4 (void*,void*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct mlx5_ib_srq*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;

void FUNC_9(struct mlx5_ib_cq *VAR_1, u32 VAR_2, struct mlx5_ib_srq *VAR_3)
{
 struct mlx5_cqe64 *VAR_4, *VAR_5;
 void *VAR_6, *VAR_7;
 u32 VAR_8;
 int VAR_9 = 0;
 u8 VAR_10;

 if (!VAR_1)
  return;







 for (VAR_8 = VAR_1->mcq.cons_index; FUNC_2(VAR_1, VAR_8); VAR_8++)
  if (VAR_8 == VAR_1->mcq.cons_index + VAR_1->ibcq.cqe)
   break;




 while ((int) --VAR_8 - (int) VAR_1->mcq.cons_index >= 0) {
  VAR_6 = FUNC_1(VAR_1, VAR_8 & VAR_1->ibcq.cqe);
  VAR_4 = (VAR_1->mcq.cqe_sz == 64) ? VAR_6 : VAR_6 + 64;
  if (FUNC_3(VAR_4, VAR_2)) {
   if (VAR_3 && (FUNC_7(VAR_4->srqn) & 0xffffff))
    FUNC_6(VAR_3, FUNC_0(VAR_4->wqe_counter));
   ++VAR_9;
  } else if (VAR_9) {
   VAR_7 = FUNC_1(VAR_1, (VAR_8 + VAR_9) & VAR_1->ibcq.cqe);
   VAR_5 = (VAR_1->mcq.cqe_sz == 64) ? VAR_7 : VAR_7 + 64;
   VAR_10 = VAR_5->op_own & VAR_0;
   FUNC_4(VAR_7, VAR_6, VAR_1->mcq.cqe_sz);
   VAR_5->op_own = VAR_10 |
    (VAR_5->op_own & ~VAR_0);
  }
 }

 if (VAR_9) {
  VAR_1->mcq.cons_index += VAR_9;



  FUNC_8();
  FUNC_5(&VAR_1->mcq);
 }
}
