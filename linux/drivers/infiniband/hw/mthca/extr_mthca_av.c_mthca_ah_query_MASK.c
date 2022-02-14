
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rdma_ah_attr {int type; } ;
struct TYPE_3__ {int gid_table_len; } ;
struct mthca_dev {TYPE_1__ limits; } ;
struct mthca_ah {scalar_t__ type; TYPE_2__* av; } ;
struct ib_ah {int type; int device; } ;
struct TYPE_4__ {int msg_sr; int g_slid; int gid_index; int dgid; int hop_limit; int sl_tclass_flowlabel; int dlid; int port_pd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rdma_ah_attr*,int ,int) ;
 scalar_t__ FUNC_3 (struct mthca_ah*) ;
 int FUNC_4 (struct mthca_dev*,int,int) ;
 int FUNC_5 (struct rdma_ah_attr*,int ) ;
 int FUNC_6 (struct rdma_ah_attr*,int ) ;
 int FUNC_7 (struct rdma_ah_attr*,int *,int,int,int ,int) ;
 int FUNC_8 (struct rdma_ah_attr*,int) ;
 int FUNC_9 (struct rdma_ah_attr*,int) ;
 int FUNC_10 (struct rdma_ah_attr*,int) ;
 int FUNC_11 (struct rdma_ah_attr*,int ) ;
 struct mthca_ah* FUNC_12 (struct ib_ah*) ;
 struct mthca_dev* FUNC_13 (int ) ;

int FUNC_14(struct ib_ah *VAR_2, struct rdma_ah_attr *VAR_3)
{
 struct mthca_ah *VAR_4 = FUNC_12(VAR_2);
 struct mthca_dev *VAR_5 = FUNC_13(VAR_2->device);
 u8 VAR_6 = FUNC_1(VAR_4->av->port_pd) >> 24;


 if (VAR_4->type == VAR_1)
  return -VAR_0;

 FUNC_2(VAR_3, 0, sizeof *VAR_3);
 VAR_3->type = VAR_2->type;
 FUNC_6(VAR_3, FUNC_0(VAR_4->av->dlid));
 FUNC_10(VAR_3, FUNC_1(VAR_4->av->sl_tclass_flowlabel) >> 28);
 FUNC_9(VAR_3, VAR_6);
 FUNC_11(VAR_3,
    FUNC_4(VAR_5, VAR_4->av->msg_sr & 0x7,
       VAR_6));
 FUNC_8(VAR_3, VAR_4->av->g_slid & 0x7F);
 if (FUNC_3(VAR_4)) {
  u32 VAR_7 = FUNC_1(VAR_4->av->sl_tclass_flowlabel);

  FUNC_7(VAR_3, ((void*)0),
    VAR_7 & 0xfffff,
    VAR_4->av->gid_index &
    (VAR_5->limits.gid_table_len - 1),
    VAR_4->av->hop_limit,
    (VAR_7 >> 20) & 0xff);
  FUNC_5(VAR_3, VAR_4->av->dgid);
 }

 return 0;
}
