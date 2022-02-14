
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
struct TYPE_8__ {scalar_t__ device; int qp; int port_num; } ;
struct rdma_id_private {int qp_mutex; TYPE_4__ id; TYPE_3__* cma_dev; } ;
struct rdma_conn_param {int responder_resources; } ;
struct TYPE_5__ {int sgid_index; } ;
struct TYPE_6__ {TYPE_1__ grh; } ;
struct ib_qp_attr {int max_dest_rd_atomic; TYPE_2__ ah_attr; int qp_state; } ;
struct TYPE_7__ {scalar_t__ device; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct ib_qp_attr*,int) ;
 int FUNC_2 (scalar_t__,int ,int ,union ib_gid*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*,struct ib_qp_attr*,int*) ;

__attribute__((used)) static int FUNC_6(struct rdma_id_private *VAR_2,
        struct rdma_conn_param *VAR_3)
{
 struct ib_qp_attr VAR_4;
 int VAR_5, VAR_6;
 union ib_gid VAR_7;

 FUNC_3(&VAR_2->qp_mutex);
 if (!VAR_2->id.qp) {
  VAR_6 = 0;
  goto out;
 }


 VAR_4.qp_state = VAR_0;
 VAR_6 = FUNC_5(&VAR_2->id, &VAR_4, &VAR_5);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_1(VAR_2->id.qp, &VAR_4, VAR_5);
 if (VAR_6)
  goto out;

 VAR_4.qp_state = VAR_1;
 VAR_6 = FUNC_5(&VAR_2->id, &VAR_4, &VAR_5);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_2(VAR_2->id.device, VAR_2->id.port_num,
      VAR_4.ah_attr.grh.sgid_index, &VAR_7, ((void*)0));
 if (VAR_6)
  goto out;

 FUNC_0(VAR_2->cma_dev->device != VAR_2->id.device);

 if (VAR_3)
  VAR_4.max_dest_rd_atomic = VAR_3->responder_resources;
 VAR_6 = FUNC_1(VAR_2->id.qp, &VAR_4, VAR_5);
out:
 FUNC_4(&VAR_2->qp_mutex);
 return VAR_6;
}
