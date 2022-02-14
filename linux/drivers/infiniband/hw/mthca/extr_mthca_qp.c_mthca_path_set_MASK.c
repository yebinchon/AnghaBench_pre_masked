
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rdma_ah_attr {int dummy; } ;
struct mthca_qp_path {int g_mylmc; scalar_t__ mgid_index; void* sl_tclass_flowlabel; int rgid; int hop_limit; int static_rate; int rlid; } ;
struct TYPE_3__ {scalar_t__ gid_table_len; } ;
struct mthca_dev {TYPE_1__ limits; } ;
struct TYPE_4__ {int raw; } ;
struct ib_global_route {scalar_t__ sgid_index; int traffic_class; int flow_label; TYPE_2__ dgid; int hop_limit; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct mthca_dev*,char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct mthca_dev*,int ,int ) ;
 int FUNC_5 (struct rdma_ah_attr const*) ;
 int FUNC_6 (struct rdma_ah_attr const*) ;
 int FUNC_7 (struct rdma_ah_attr const*) ;
 int FUNC_8 (struct rdma_ah_attr const*) ;
 int FUNC_9 (struct rdma_ah_attr const*) ;
 struct ib_global_route* FUNC_10 (struct rdma_ah_attr const*) ;

__attribute__((used)) static int FUNC_11(struct mthca_dev *VAR_1, const struct rdma_ah_attr *VAR_2,
     struct mthca_qp_path *VAR_3, u8 VAR_4)
{
 VAR_3->g_mylmc = FUNC_7(VAR_2) & 0x7f;
 VAR_3->rlid = FUNC_0(FUNC_6(VAR_2));
 VAR_3->static_rate = FUNC_4(VAR_1, FUNC_9(VAR_2),
        VAR_4);

 if (FUNC_5(VAR_2) & VAR_0) {
  const struct ib_global_route *VAR_5 = FUNC_10(VAR_2);

  if (VAR_5->sgid_index >= VAR_1->limits.gid_table_len) {
   FUNC_3(VAR_1, "sgid_index (%u) too large. max is %d\n",
      VAR_5->sgid_index,
      VAR_1->limits.gid_table_len - 1);
   return -1;
  }

  VAR_3->g_mylmc |= 1 << 7;
  VAR_3->mgid_index = VAR_5->sgid_index;
  VAR_3->hop_limit = VAR_5->hop_limit;
  VAR_3->sl_tclass_flowlabel =
   FUNC_1((FUNC_8(VAR_2) << 28) |
        (VAR_5->traffic_class << 20) |
        (VAR_5->flow_label));
  FUNC_2(VAR_3->rgid, VAR_5->dgid.raw, 16);
 } else {
  VAR_3->sl_tclass_flowlabel = FUNC_1(FUNC_8(VAR_2) <<
       28);
 }

 return 0;
}
