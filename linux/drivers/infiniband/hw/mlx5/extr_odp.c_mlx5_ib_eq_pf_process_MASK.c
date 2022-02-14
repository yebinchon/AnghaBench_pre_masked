
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int wq_num; void* wqe_index; void* packet_size; } ;
struct TYPE_8__ {int r_key; int rdma_op_len; int rdma_va; void* packet_size; } ;
struct mlx5_pagefault {int event_subtype; int bytes_committed; int type; int token; int work; struct mlx5_ib_pf_eq* eq; TYPE_5__ wqe; TYPE_3__ rdma; } ;
struct mlx5_ib_pf_eq {int core; int wq; int dev; int work; int pool; } ;
struct TYPE_9__ {int packet_length; int wqe_index; int pftype_wq; int token; } ;
struct TYPE_7__ {int rdma_va; int rdma_op_len; int packet_length; int r_key; int pftype_token; } ;
struct mlx5_eqe_page_fault {TYPE_4__ wqe; TYPE_2__ rdma; int bytes_committed; } ;
struct TYPE_6__ {struct mlx5_eqe_page_fault page_fault; } ;
struct mlx5_eqe {int sub_type; TYPE_1__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;


 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct mlx5_pagefault* FUNC_4 (int ,int ) ;
 struct mlx5_eqe* FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ,char*,int,int,...) ;
 int VAR_2 ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct mlx5_ib_pf_eq *VAR_3)
{
 struct mlx5_eqe_page_fault *VAR_4;
 struct mlx5_pagefault *VAR_5;
 struct mlx5_eqe *VAR_6;
 int VAR_7 = 0;

 while ((VAR_6 = FUNC_5(VAR_3->core, VAR_7))) {
  VAR_5 = FUNC_4(VAR_3->pool, VAR_0);
  if (!VAR_5) {
   FUNC_11(&VAR_3->work);
   break;
  }

  VAR_4 = &VAR_6->data.page_fault;
  VAR_5->event_subtype = VAR_6->sub_type;
  VAR_5->bytes_committed = FUNC_2(VAR_4->bytes_committed);

  FUNC_8(VAR_3->dev,
       "PAGE_FAULT: subtype: 0x%02x, bytes_committed: 0x%06x\n",
       VAR_6->sub_type, VAR_5->bytes_committed);

  switch (VAR_6->sub_type) {
  case 129:

   VAR_5->type =
    FUNC_2(VAR_4->rdma.pftype_token) >> 24;
   VAR_5->token =
    FUNC_2(VAR_4->rdma.pftype_token) &
    VAR_1;
   VAR_5->rdma.r_key =
    FUNC_2(VAR_4->rdma.r_key);
   VAR_5->rdma.packet_size =
    FUNC_1(VAR_4->rdma.packet_length);
   VAR_5->rdma.rdma_op_len =
    FUNC_2(VAR_4->rdma.rdma_op_len);
   VAR_5->rdma.rdma_va =
    FUNC_3(VAR_4->rdma.rdma_va);
   FUNC_8(VAR_3->dev,
        "PAGE_FAULT: type:0x%x, token: 0x%06x, r_key: 0x%08x\n",
        VAR_5->type, VAR_5->token,
        VAR_5->rdma.r_key);
   FUNC_8(VAR_3->dev,
        "PAGE_FAULT: rdma_op_len: 0x%08x, rdma_va: 0x%016llx\n",
        VAR_5->rdma.rdma_op_len,
        VAR_5->rdma.rdma_va);
   break;

  case 128:

   VAR_5->type =
    (FUNC_2(VAR_4->wqe.pftype_wq) >> 24) & 0x7;
   VAR_5->token =
    FUNC_2(VAR_4->wqe.token);
   VAR_5->wqe.wq_num =
    FUNC_2(VAR_4->wqe.pftype_wq) &
    VAR_1;
   VAR_5->wqe.wqe_index =
    FUNC_1(VAR_4->wqe.wqe_index);
   VAR_5->wqe.packet_size =
    FUNC_1(VAR_4->wqe.packet_length);
   FUNC_8(VAR_3->dev,
        "PAGE_FAULT: type:0x%x, token: 0x%06x, wq_num: 0x%06x, wqe_index: 0x%04x\n",
        VAR_5->type, VAR_5->token,
        VAR_5->wqe.wq_num,
        VAR_5->wqe.wqe_index);
   break;

  default:
   FUNC_9(VAR_3->dev,
         "Unsupported page fault event sub-type: 0x%02hhx\n",
         VAR_6->sub_type);



  }

  VAR_5->eq = VAR_3;
  FUNC_0(&VAR_5->work, VAR_2);
  FUNC_10(VAR_3->wq, &VAR_5->work);

  VAR_7 = FUNC_6(VAR_3->core, ++VAR_7);
 }

 FUNC_7(VAR_3->core, VAR_7, 1);
}
