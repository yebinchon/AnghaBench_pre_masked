
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct rdma_ah_attr {int type; } ;
struct mthca_qp_path {int g_mylmc; int static_rate; int mgid_index; int rgid; int hop_limit; int sl_tclass_flowlabel; int rlid; int port_pkey; } ;
struct TYPE_2__ {scalar_t__ num_ports; int gid_table_len; } ;
struct mthca_dev {TYPE_1__ limits; int ib_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rdma_ah_attr*,int ,int) ;
 int FUNC_3 (struct mthca_dev*,int,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (struct rdma_ah_attr*,int ) ;
 int FUNC_6 (struct rdma_ah_attr*,int ) ;
 int FUNC_7 (struct rdma_ah_attr*,int *,int,int,int ,int) ;
 int FUNC_8 (struct rdma_ah_attr*,int) ;
 int FUNC_9 (struct rdma_ah_attr*,scalar_t__) ;
 int FUNC_10 (struct rdma_ah_attr*,int) ;
 int FUNC_11 (struct rdma_ah_attr*,int ) ;

__attribute__((used)) static void FUNC_12(struct mthca_dev *VAR_0,
       struct rdma_ah_attr *VAR_1,
       struct mthca_qp_path *VAR_2)
{
 u8 VAR_3 = (FUNC_1(VAR_2->port_pkey) >> 24) & 0x3;

 FUNC_2(VAR_1, 0, sizeof(*VAR_1));

 if (VAR_3 == 0 || VAR_3 > VAR_0->limits.num_ports)
  return;
 VAR_1->type = FUNC_4(&VAR_0->ib_dev, VAR_3);
 FUNC_9(VAR_1, VAR_3);

 FUNC_6(VAR_1, FUNC_0(VAR_2->rlid));
 FUNC_10(VAR_1, FUNC_1(VAR_2->sl_tclass_flowlabel) >> 28);
 FUNC_8(VAR_1, VAR_2->g_mylmc & 0x7f);
 FUNC_11(VAR_1,
    FUNC_3(VAR_0,
       VAR_2->static_rate & 0xf,
       VAR_3));
 if (VAR_2->g_mylmc & (1 << 7)) {
  u32 VAR_4 = FUNC_1(VAR_2->sl_tclass_flowlabel);

  FUNC_7(VAR_1, ((void*)0),
    VAR_4 & 0xfffff,
    VAR_2->mgid_index &
    (VAR_0->limits.gid_table_len - 1),
    VAR_2->hop_limit,
    (VAR_4 >> 20) & 0xff);
  FUNC_5(VAR_1, VAR_2->rgid);
 }
}
