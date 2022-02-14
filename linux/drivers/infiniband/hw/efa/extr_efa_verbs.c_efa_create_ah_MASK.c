
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int raw; } ;
struct TYPE_7__ {TYPE_1__ dgid; } ;
struct rdma_ah_attr {TYPE_2__ grh; } ;
struct ib_udata {scalar_t__ outlen; scalar_t__ inlen; } ;
struct ib_ah {int pd; int device; } ;
struct efa_ibv_create_ah_resp {int efa_address_handle; } ;
struct TYPE_8__ {int create_ah_err; } ;
struct TYPE_9__ {TYPE_3__ sw_stats; } ;
struct efa_dev {TYPE_4__ stats; int ibdev; int edev; } ;
struct efa_com_create_ah_result {int ah; } ;
struct efa_com_create_ah_params {int pdn; int dest_addr; } ;
struct efa_ah {int ah; int id; } ;
typedef int resp ;
struct TYPE_10__ {int pdn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct efa_dev*,struct efa_ah*) ;
 int FUNC_2 (int *,struct efa_com_create_ah_params*,struct efa_com_create_ah_result*) ;
 int FUNC_3 (struct ib_udata*,struct efa_ibv_create_ah_resp*,int ) ;
 int FUNC_4 (struct ib_udata*,int ,scalar_t__) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int,scalar_t__) ;
 struct efa_ah* FUNC_8 (struct ib_ah*) ;
 struct efa_dev* FUNC_9 (int ) ;
 TYPE_5__* FUNC_10 (int ) ;

int FUNC_11(struct ib_ah *VAR_3,
    struct rdma_ah_attr *VAR_4,
    u32 VAR_5,
    struct ib_udata *VAR_6)
{
 struct efa_dev *VAR_7 = FUNC_9(VAR_3->device);
 struct efa_com_create_ah_params VAR_8 = {};
 struct efa_ibv_create_ah_resp VAR_9 = {};
 struct efa_com_create_ah_result VAR_10;
 struct efa_ah *VAR_11 = FUNC_8(VAR_3);
 int VAR_12;

 if (!(VAR_5 & VAR_2)) {
  FUNC_5(&VAR_7->ibdev,
     "Create address handle is not supported in atomic context\n");
  VAR_12 = -VAR_1;
  goto err_out;
 }

 if (VAR_6->inlen &&
     !FUNC_4(VAR_6, 0, VAR_6->inlen)) {
  FUNC_5(&VAR_7->ibdev, "Incompatible ABI params\n");
  VAR_12 = -VAR_0;
  goto err_out;
 }

 FUNC_6(VAR_8.dest_addr, VAR_4->grh.dgid.raw,
        sizeof(VAR_8.dest_addr));
 VAR_8.pdn = FUNC_10(VAR_3->pd)->pdn;
 VAR_12 = FUNC_2(&VAR_7->edev, &VAR_8, &VAR_10);
 if (VAR_12)
  goto err_out;

 FUNC_6(VAR_11->id, VAR_4->grh.dgid.raw, sizeof(VAR_11->id));
 VAR_11->ah = VAR_10.ah;

 VAR_9.efa_address_handle = VAR_10.ah;

 if (VAR_6->outlen) {
  VAR_12 = FUNC_3(VAR_6, &VAR_9,
           FUNC_7(sizeof(VAR_9), VAR_6->outlen));
  if (VAR_12) {
   FUNC_5(&VAR_7->ibdev,
      "Failed to copy udata for create_ah response\n");
   goto err_destroy_ah;
  }
 }
 FUNC_5(&VAR_7->ibdev, "Created ah[%d]\n", VAR_11->ah);

 return 0;

err_destroy_ah:
 FUNC_1(VAR_7, VAR_11);
err_out:
 FUNC_0(&VAR_7->stats.sw_stats.create_ah_err);
 return VAR_12;
}
