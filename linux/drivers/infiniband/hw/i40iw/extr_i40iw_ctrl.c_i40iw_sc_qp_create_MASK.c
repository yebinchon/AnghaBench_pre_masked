
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {int qp_id; } ;
struct i40iw_sc_qp {int qp_type; int virtual_map; TYPE_3__ qp_uk; int shadow_area_pa; int hw_host_ctx_pa; TYPE_2__* pd; } ;
struct i40iw_sc_cqp {int polarity; int dev; } ;
struct i40iw_create_qp_info {int tcp_ctx_valid; int cq_num_valid; int arp_cache_idx_valid; int next_iwarp_state; scalar_t__ ord_valid; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {struct i40iw_sc_cqp* cqp; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,char*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int* FUNC_3 (struct i40iw_sc_cqp*,int) ;
 int FUNC_4 (struct i40iw_sc_cqp*) ;
 int FUNC_5 (int*,int,int ) ;

__attribute__((used)) static enum i40iw_status_code FUNC_6(
    struct i40iw_sc_qp *VAR_16,
    struct i40iw_create_qp_info *VAR_17,
    u64 VAR_18,
    bool VAR_19)
{
 struct i40iw_sc_cqp *VAR_20;
 u64 *VAR_21;
 u64 VAR_22;

 if ((VAR_16->qp_uk.qp_id < VAR_15) ||
     (VAR_16->qp_uk.qp_id > VAR_14))
  return VAR_12;

 VAR_20 = VAR_16->pd->dev->cqp;
 VAR_21 = FUNC_3(VAR_20, VAR_18);
 if (!VAR_21)
  return VAR_13;

 FUNC_5(VAR_21, 16, VAR_16->hw_host_ctx_pa);

 FUNC_5(VAR_21, 40, VAR_16->shadow_area_pa);

 VAR_22 = VAR_16->qp_uk.qp_id |
   FUNC_0(VAR_9, VAR_0) |
   FUNC_0((VAR_17->ord_valid ? 1 : 0), VAR_4) |
   FUNC_0(VAR_17->tcp_ctx_valid, VAR_6) |
   FUNC_0(VAR_16->qp_type, VAR_5) |
   FUNC_0(VAR_16->virtual_map, VAR_7) |
   FUNC_0(VAR_17->cq_num_valid, VAR_2) |
   FUNC_0(VAR_17->arp_cache_idx_valid, VAR_1) |
   FUNC_0(VAR_17->next_iwarp_state, VAR_3) |
   FUNC_0(VAR_20->polarity, VAR_8);

 FUNC_2(VAR_21, VAR_22);
 FUNC_1(VAR_20->dev, VAR_11, "QP_CREATE WQE",
   VAR_21, VAR_10 * 8);

 if (VAR_19)
  FUNC_4(VAR_20);
 return 0;
}
