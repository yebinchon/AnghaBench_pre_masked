
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct ib_qp* pd; struct ib_qp* cq; struct ib_qp* qp; int sem; } ;
struct mlx5_ib_dev {TYPE_2__ umrc; int ib_dev; } ;
struct TYPE_3__ {int max_send_sge; int max_send_wr; } ;
struct ib_qp_init_attr {int port_num; int qp_state; int path_mtu; struct ib_qp* recv_cq; struct ib_qp* send_cq; void* qp_type; TYPE_1__ cap; int sq_sig_type; } ;
struct ib_qp_attr {int port_num; int qp_state; int path_mtu; struct ib_qp* recv_cq; struct ib_qp* send_cq; void* qp_type; TYPE_1__ cap; int sq_sig_type; } ;
struct ib_qp {struct ib_qp* recv_cq; struct ib_qp* send_cq; void* qp_type; int * uobject; struct ib_qp* real_qp; int * device; } ;
struct ib_pd {struct ib_pd* recv_cq; struct ib_pd* send_cq; void* qp_type; int * uobject; struct ib_pd* real_qp; int * device; } ;
struct ib_cq {struct ib_cq* recv_cq; struct ib_cq* send_cq; void* qp_type; int * uobject; struct ib_cq* real_qp; int * device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct ib_qp*) ;
 int VAR_11 ;
 void* VAR_12 ;
 int FUNC_1 (struct ib_qp*) ;
 struct ib_qp* FUNC_2 (int *,int *,int,int ,int ) ;
 struct ib_qp* FUNC_3 (int *,int ) ;
 int FUNC_4 (struct ib_qp*) ;
 int FUNC_5 (struct ib_qp*) ;
 int FUNC_6 (struct ib_qp_init_attr*) ;
 struct ib_qp_init_attr* FUNC_7 (int,int ) ;
 int FUNC_8 (struct ib_qp_init_attr*,int ,int) ;
 struct ib_qp* FUNC_9 (struct ib_qp*,struct ib_qp_init_attr*,int *) ;
 int FUNC_10 (struct mlx5_ib_dev*,char*) ;
 int FUNC_11 (struct ib_qp*,int *) ;
 int FUNC_12 (struct ib_qp*,struct ib_qp_init_attr*,int,int *) ;
 int FUNC_13 (struct mlx5_ib_dev*,char*,int) ;
 int FUNC_14 (struct mlx5_ib_dev*) ;
 int FUNC_15 (int *,int ) ;

__attribute__((used)) static int FUNC_16(struct mlx5_ib_dev *VAR_13)
{
 struct ib_qp_init_attr *VAR_14 = ((void*)0);
 struct ib_qp_attr *VAR_15 = ((void*)0);
 struct ib_pd *VAR_16;
 struct ib_cq *VAR_17;
 struct ib_qp *VAR_18;
 int VAR_19;

 VAR_15 = FUNC_7(sizeof(*VAR_15), VAR_1);
 VAR_14 = FUNC_7(sizeof(*VAR_14), VAR_1);
 if (!VAR_15 || !VAR_14) {
  VAR_19 = -VAR_0;
  goto error_0;
 }

 VAR_16 = FUNC_3(&VAR_13->ib_dev, 0);
 if (FUNC_0(VAR_16)) {
  FUNC_10(VAR_13, "Couldn't create PD for sync UMR QP\n");
  VAR_19 = FUNC_1(VAR_16);
  goto error_0;
 }

 VAR_17 = FUNC_2(&VAR_13->ib_dev, ((void*)0), 128, 0, VAR_3);
 if (FUNC_0(VAR_17)) {
  FUNC_10(VAR_13, "Couldn't create CQ for sync UMR QP\n");
  VAR_19 = FUNC_1(VAR_17);
  goto error_2;
 }

 VAR_14->send_cq = VAR_17;
 VAR_14->recv_cq = VAR_17;
 VAR_14->sq_sig_type = VAR_10;
 VAR_14->cap.max_send_wr = VAR_11;
 VAR_14->cap.max_send_sge = 1;
 VAR_14->qp_type = VAR_12;
 VAR_14->port_num = 1;
 VAR_18 = FUNC_9(VAR_16, VAR_14, ((void*)0));
 if (FUNC_0(VAR_18)) {
  FUNC_10(VAR_13, "Couldn't create sync UMR QP\n");
  VAR_19 = FUNC_1(VAR_18);
  goto error_3;
 }
 VAR_18->device = &VAR_13->ib_dev;
 VAR_18->real_qp = VAR_18;
 VAR_18->uobject = ((void*)0);
 VAR_18->qp_type = VAR_12;
 VAR_18->send_cq = VAR_14->send_cq;
 VAR_18->recv_cq = VAR_14->recv_cq;

 VAR_15->qp_state = VAR_4;
 VAR_15->port_num = 1;
 VAR_19 = FUNC_12(VAR_18, VAR_15, VAR_9 | VAR_7 |
    VAR_8, ((void*)0));
 if (VAR_19) {
  FUNC_10(VAR_13, "Couldn't modify UMR QP\n");
  goto error_4;
 }

 FUNC_8(VAR_15, 0, sizeof(*VAR_15));
 VAR_15->qp_state = VAR_5;
 VAR_15->path_mtu = VAR_2;

 VAR_19 = FUNC_12(VAR_18, VAR_15, VAR_9, ((void*)0));
 if (VAR_19) {
  FUNC_10(VAR_13, "Couldn't modify umr QP to rtr\n");
  goto error_4;
 }

 FUNC_8(VAR_15, 0, sizeof(*VAR_15));
 VAR_15->qp_state = VAR_6;
 VAR_19 = FUNC_12(VAR_18, VAR_15, VAR_9, ((void*)0));
 if (VAR_19) {
  FUNC_10(VAR_13, "Couldn't modify umr QP to rts\n");
  goto error_4;
 }

 VAR_13->umrc.qp = VAR_18;
 VAR_13->umrc.cq = VAR_17;
 VAR_13->umrc.pd = VAR_16;

 FUNC_15(&VAR_13->umrc.sem, VAR_11);
 VAR_19 = FUNC_14(VAR_13);
 if (VAR_19) {
  FUNC_13(VAR_13, "mr cache init failed %d\n", VAR_19);
  goto error_4;
 }

 FUNC_6(VAR_15);
 FUNC_6(VAR_14);

 return 0;

error_4:
 FUNC_11(VAR_18, ((void*)0));
 VAR_13->umrc.qp = ((void*)0);

error_3:
 FUNC_5(VAR_17);
 VAR_13->umrc.cq = ((void*)0);

error_2:
 FUNC_4(VAR_16);
 VAR_13->umrc.pd = ((void*)0);

error_0:
 FUNC_6(VAR_15);
 FUNC_6(VAR_14);
 return VAR_19;
}
