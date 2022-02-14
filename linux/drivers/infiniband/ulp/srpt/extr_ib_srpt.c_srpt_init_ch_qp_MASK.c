
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct srpt_rdma_ch {int pkey; TYPE_2__* sport; int using_rdma_cm; } ;
struct ib_qp_attr {int pkey_index; int port_num; int qp_access_flags; int qp_state; } ;
struct ib_qp {int dummy; } ;
struct TYPE_4__ {int port; TYPE_1__* sdev; } ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (struct ib_qp*,struct ib_qp_attr*,int) ;
 int FUNC_3 (struct ib_qp_attr*) ;
 struct ib_qp_attr* FUNC_4 (int,int ) ;
 int FUNC_5 (char*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct srpt_rdma_ch *VAR_8, struct ib_qp *VAR_9)
{
 struct ib_qp_attr *VAR_10;
 int VAR_11;

 FUNC_0(VAR_8->using_rdma_cm);

 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->qp_state = VAR_3;
 VAR_10->qp_access_flags = VAR_2;
 VAR_10->port_num = VAR_8->sport->port;

 VAR_11 = FUNC_1(VAR_8->sport->sdev->device, VAR_8->sport->port,
      VAR_8->pkey, &VAR_10->pkey_index);
 if (VAR_11 < 0)
  FUNC_5("Translating pkey %#x failed (%d) - using index 0\n",
         VAR_8->pkey, VAR_11);

 VAR_11 = FUNC_2(VAR_9, VAR_10,
      VAR_7 | VAR_4 | VAR_6 |
      VAR_5);

 FUNC_3(VAR_10);
 return VAR_11;
}
