
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u16 ;
struct tid_rdma_params {unsigned long timeout; int max_len; } ;
struct rvt_qp {struct hfi1_qp_priv* priv; } ;
struct TYPE_4__ {int remote; struct tid_rdma_params local; } ;
struct TYPE_3__ {int lock; } ;
struct hfi1_qp_priv {scalar_t__ timeout_shift; TYPE_2__ tid_rdma; scalar_t__ pkts_ps; int tid_timer_timeout_jiffies; TYPE_1__ opfn; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct tid_rdma_params*,int ) ;
 struct tid_rdma_params* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct tid_rdma_params*) ;
 struct tid_rdma_params* FUNC_7 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (struct rvt_qp*,int ) ;
 int FUNC_9 (struct tid_rdma_params*,int) ;
 int FUNC_10 (struct rvt_qp*,int,struct tid_rdma_params*) ;
 int FUNC_11 (unsigned long) ;

bool FUNC_12(struct rvt_qp *VAR_3, u64 VAR_4)
{
 struct hfi1_qp_priv *VAR_5 = VAR_3->priv;
 struct tid_rdma_params *VAR_6, *VAR_7;
 bool VAR_8 = 1;

 VAR_7 = FUNC_7(VAR_5->tid_rdma.remote,
     FUNC_5(&VAR_5->opfn.lock));
 VAR_4 &= ~0xfULL;




 if (!VAR_4 || !FUNC_0(VAR_1))
  goto null;







 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_0);
 if (!VAR_6) {
  VAR_8 = 0;
  goto null;
 }

 FUNC_9(VAR_6, VAR_4);
 VAR_5->tid_timer_timeout_jiffies =
  FUNC_11((((4096UL * (1UL << VAR_6->timeout)) /
       1000UL) << 3) * 7);
 FUNC_10(VAR_3, 0, &VAR_5->tid_rdma.local);
 FUNC_10(VAR_3, 1, VAR_6);
 FUNC_6(VAR_5->tid_rdma.remote, VAR_6);
 VAR_5->pkts_ps = (u16)FUNC_8(VAR_3, VAR_6->max_len);
 VAR_5->timeout_shift = FUNC_2(VAR_5->pkts_ps - 1) + 1;
 goto free;
null:
 FUNC_1(VAR_5->tid_rdma.remote, ((void*)0));
 VAR_5->timeout_shift = 0;
free:
 if (VAR_7)
  FUNC_3(VAR_7, VAR_2);
 return VAR_8;
}
