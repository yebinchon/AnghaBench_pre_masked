
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_ib_dev {int dummy; } ;
struct TYPE_8__ {int cons_index; int cqn; } ;
struct TYPE_6__ {int cqe_size; } ;
struct TYPE_5__ {int device; } ;
struct mlx5_ib_cq {TYPE_4__ mcq; TYPE_3__* resize_buf; TYPE_2__ buf; TYPE_1__ ibcq; } ;
struct mlx5_cqe64 {int op_own; } ;
struct TYPE_7__ {int cqe_size; int nent; int fbc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct mlx5_cqe64*) ;
 void* FUNC_1 (struct mlx5_ib_cq*,int) ;
 int FUNC_2 (void*,void*,int) ;
 void* FUNC_3 (int *,int) ;
 int FUNC_4 (struct mlx5_ib_dev*,char*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int,int) ;
 struct mlx5_ib_dev* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct mlx5_ib_cq *VAR_4)
{
 struct mlx5_ib_dev *VAR_5 = FUNC_7(VAR_4->ibcq.device);
 struct mlx5_cqe64 *VAR_6;
 struct mlx5_cqe64 *VAR_7;
 void *VAR_8;
 void *VAR_9;
 void *VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 u8 VAR_14;

 VAR_11 = VAR_4->buf.cqe_size;
 VAR_12 = VAR_4->resize_buf->cqe_size;
 if (VAR_11 != VAR_12) {
  FUNC_4(VAR_5, "resize from different cqe size is not supported\n");
  return -VAR_0;
 }

 VAR_13 = VAR_4->mcq.cons_index;
 VAR_9 = FUNC_1(VAR_4, VAR_13);
 VAR_6 = VAR_11 == 64 ? VAR_9 : VAR_9 + 64;
 VAR_8 = VAR_9;
 if (!VAR_9) {
  FUNC_4(VAR_5, "expected cqe in sw ownership\n");
  return -VAR_0;
 }

 while (FUNC_0(VAR_6) != VAR_3) {
  VAR_10 = FUNC_3(&VAR_4->resize_buf->fbc,
          (VAR_13 + 1) & VAR_4->resize_buf->nent);
  VAR_7 = VAR_12 == 64 ? VAR_10 : VAR_10 + 64;
  VAR_14 = FUNC_6(VAR_13 + 1, VAR_4->resize_buf->nent);
  FUNC_2(VAR_10, VAR_9, VAR_12);
  VAR_7->op_own = (VAR_7->op_own & ~VAR_2) | VAR_14;

  ++VAR_13;
  VAR_9 = FUNC_1(VAR_4, VAR_13);
  VAR_6 = VAR_11 == 64 ? VAR_9 : VAR_9 + 64;
  if (!VAR_9) {
   FUNC_4(VAR_5, "expected cqe in sw ownership\n");
   return -VAR_0;
  }

  if (VAR_9 == VAR_8) {
   FUNC_5("resize CQ failed to get resize CQE, CQN 0x%x\n",
    VAR_4->mcq.cqn);
   return -VAR_1;
  }
 }
 ++VAR_4->mcq.cons_index;
 return 0;
}
