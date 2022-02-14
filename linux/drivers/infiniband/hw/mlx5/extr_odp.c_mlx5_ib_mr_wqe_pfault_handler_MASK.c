
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_2__ {int wq_num; int wqe_index; } ;
struct mlx5_pagefault {int type; TYPE_1__ wqe; int token; } ;
struct mlx5_ib_srq {int dummy; } ;
struct mlx5_ib_qp {int dummy; } ;
struct mlx5_ib_dev {int dummy; } ;
struct mlx5_core_rsc_common {scalar_t__ res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct mlx5_core_rsc_common*) ;
 int FUNC_3 (struct mlx5_ib_dev*,char*,int ,...) ;
 int FUNC_4 (struct mlx5_ib_dev*,char*,...) ;
 int FUNC_5 (struct mlx5_ib_dev*,struct mlx5_pagefault*,struct mlx5_ib_qp*,void**,void**,size_t) ;
 int FUNC_6 (struct mlx5_ib_dev*,struct mlx5_ib_qp*,void*,void**,size_t) ;
 int FUNC_7 (struct mlx5_ib_dev*,struct mlx5_ib_srq*,void**,void**,size_t) ;
 int FUNC_8 (struct mlx5_ib_dev*,struct mlx5_pagefault*,int) ;
 int FUNC_9 (struct mlx5_ib_qp*,int ,void*,int ,size_t*) ;
 int FUNC_10 (struct mlx5_ib_qp*,int ,void*,int ,size_t*) ;
 int FUNC_11 (struct mlx5_ib_srq*,int ,void*,int ,size_t*) ;
 struct mlx5_core_rsc_common* FUNC_12 (struct mlx5_ib_dev*,int ,int) ;
 int FUNC_13 (struct mlx5_ib_dev*,struct mlx5_pagefault*,void*,void*,scalar_t__*,scalar_t__*,int) ;
 struct mlx5_ib_qp* FUNC_14 (struct mlx5_core_rsc_common*) ;
 struct mlx5_ib_srq* FUNC_15 (struct mlx5_core_rsc_common*) ;

__attribute__((used)) static void FUNC_16(struct mlx5_ib_dev *VAR_7,
       struct mlx5_pagefault *VAR_8)
{
 bool VAR_9 = VAR_8->type & VAR_2;
 u16 VAR_10 = VAR_8->wqe.wqe_index;
 void *VAR_11, *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 u32 VAR_14, VAR_15;
 struct mlx5_core_rsc_common *VAR_16;
 int VAR_17 = 1;
 struct mlx5_ib_qp *VAR_18;
 size_t VAR_19;
 int VAR_20 = 0;

 VAR_16 = FUNC_12(VAR_7, VAR_8->wqe.wq_num, VAR_8->type);
 if (!VAR_16) {
  FUNC_3(VAR_7, "wqe page fault for missing resource %d\n", VAR_8->wqe.wq_num);
  return;
 }

 if (VAR_16->res != VAR_3 && VAR_16->res != VAR_4 &&
     VAR_16->res != VAR_5) {
  FUNC_4(VAR_7, "wqe page fault for unsupported type %d\n",
       VAR_8->type);
  goto resolve_page_fault;
 }

 VAR_12 = (void *)FUNC_0(VAR_1);
 if (!VAR_12) {
  FUNC_4(VAR_7, "Error allocating memory for IO page fault handling.\n");
  goto resolve_page_fault;
 }

 VAR_11 = VAR_12;
 VAR_18 = (VAR_16->res == VAR_3) ? FUNC_14(VAR_16) : ((void*)0);
 if (VAR_18 && VAR_9) {
  VAR_20 = FUNC_10(VAR_18, VAR_10, VAR_11, VAR_6,
            &VAR_19);
  if (VAR_20)
   goto read_user;
  VAR_20 = FUNC_5(
   VAR_7, VAR_8, VAR_18, &VAR_11, &VAR_13, VAR_19);
 } else if (VAR_18 && !VAR_9) {
  VAR_20 = FUNC_9(VAR_18, VAR_10, VAR_11, VAR_6,
            &VAR_19);
  if (VAR_20)
   goto read_user;
  VAR_20 = FUNC_6(
   VAR_7, VAR_18, VAR_11, &VAR_13, VAR_19);
 } else if (!VAR_18) {
  struct mlx5_ib_srq *VAR_21 = FUNC_15(VAR_16);

  VAR_20 = FUNC_11(VAR_21, VAR_10, VAR_11, VAR_6,
      &VAR_19);
  if (VAR_20)
   goto read_user;
  VAR_20 = FUNC_7(
   VAR_7, VAR_21, &VAR_11, &VAR_13, VAR_19);
 }

 if (VAR_20 < 0 || VAR_11 >= VAR_13)
  goto resolve_page_fault;

 VAR_20 = FUNC_13(VAR_7, VAR_8, VAR_11, VAR_13, &VAR_14,
          &VAR_15, !VAR_9);
 if (VAR_20 == -VAR_0)
  goto out;

 if (VAR_20 < 0 || VAR_15 > VAR_14)
  goto resolve_page_fault;

out:
 VAR_20 = 0;
 VAR_17 = 0;

read_user:
 if (VAR_20)
  FUNC_4(
   VAR_7,
   "Failed reading a WQE following page fault, error %d, wqe_index %x, qpn %x\n",
   VAR_20, VAR_10, VAR_8->token);

resolve_page_fault:
 FUNC_8(VAR_7, VAR_8, VAR_17);
 FUNC_3(VAR_7, "PAGE FAULT completed. QP 0x%x resume_with_error=%d, type: 0x%x\n",
      VAR_8->wqe.wq_num, VAR_17,
      VAR_8->type);
 FUNC_2(VAR_16);
 FUNC_1((unsigned long)VAR_12);
}
