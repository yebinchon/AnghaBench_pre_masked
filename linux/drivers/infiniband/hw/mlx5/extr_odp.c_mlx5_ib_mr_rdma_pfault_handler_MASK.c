
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ r_key; scalar_t__ rdma_va; scalar_t__ rdma_op_len; scalar_t__ packet_size; } ;
struct mlx5_pagefault {scalar_t__ bytes_committed; int token; int type; TYPE_1__ rdma; } ;
struct mlx5_ib_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct mlx5_ib_dev*,char*,int,int ,scalar_t__,...) ;
 int FUNC_2 (struct mlx5_ib_dev*,struct mlx5_pagefault*,int) ;
 int FUNC_3 (struct mlx5_ib_dev*,int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,int *,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct mlx5_ib_dev *VAR_3,
        struct mlx5_pagefault *VAR_4)
{
 u64 VAR_5;
 u32 VAR_6;
 u32 VAR_7 = VAR_4->bytes_committed;
 int VAR_8 = 0;
 u32 VAR_9 = VAR_4->rdma.r_key;
 int VAR_10;







 VAR_4->rdma.rdma_va += VAR_4->bytes_committed;
 VAR_4->rdma.rdma_op_len -= FUNC_0(VAR_4->bytes_committed,
      VAR_4->rdma.rdma_op_len);
 VAR_4->bytes_committed = 0;

 VAR_5 = VAR_4->rdma.rdma_va;
 VAR_6 = VAR_4->rdma.rdma_op_len;




 if (VAR_6 == 0) {
  VAR_8 = 1;
  VAR_6 = VAR_4->rdma.packet_size;
  VAR_7 = FUNC_0(VAR_2, VAR_7);
 }

 VAR_10 = FUNC_3(VAR_3, ((void*)0), VAR_9, VAR_5, VAR_6,
         &VAR_4->bytes_committed, ((void*)0),
         0);
 if (VAR_10 == -VAR_0) {

  VAR_8 = 0;
 } else if (VAR_10 < 0 || FUNC_4(VAR_5, VAR_6) > VAR_10) {
  FUNC_2(VAR_3, VAR_4, 1);
  if (VAR_10 != -VAR_1)
   FUNC_1(VAR_3, "PAGE FAULT error %d. QP 0x%x, type: 0x%x\n",
        VAR_10, VAR_4->token, VAR_4->type);
  return;
 }

 FUNC_2(VAR_3, VAR_4, 0);
 FUNC_1(VAR_3, "PAGE FAULT completed. QP 0x%x, type: 0x%x, prefetch_activated: %d\n",
      VAR_4->token, VAR_4->type,
      VAR_8);






 if (VAR_8) {
  u32 VAR_11 = 0;

  VAR_10 = FUNC_3(VAR_3, ((void*)0), VAR_9, VAR_5,
          VAR_7,
          &VAR_11, ((void*)0),
          0);
  if (VAR_10 < 0 && VAR_10 != -VAR_0) {
   FUNC_1(VAR_3, "Prefetch failed. ret: %d, QP 0x%x, address: 0x%.16llx, length = 0x%.16x\n",
        VAR_10, VAR_4->token, VAR_5, VAR_7);
  }
 }
}
