
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
struct TYPE_6__ {int qp_id; } ;
struct i40iw_sc_qp {int hw_host_ctx_pa; int shadow_area_pa; scalar_t__ virtual_map; scalar_t__ qp_type; TYPE_3__ qp_uk; TYPE_2__* pd; } ;
struct i40iw_sc_cqp {scalar_t__ polarity; int dev; } ;
struct i40iw_modify_qp_info {scalar_t__ next_iwarp_state; scalar_t__ termlen; scalar_t__ ord_valid; scalar_t__ tcp_ctx_valid; scalar_t__ cached_var_valid; scalar_t__ cq_num_valid; scalar_t__ force_loopback; scalar_t__ remove_hash_idx; scalar_t__ reset_tcp_conn; scalar_t__ arp_cache_idx_valid; scalar_t__ dont_send_term; scalar_t__ dont_send_fin; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {struct i40iw_sc_cqp* cqp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,int ,char*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int* FUNC_3 (struct i40iw_sc_cqp*,int) ;
 int FUNC_4 (struct i40iw_sc_cqp*) ;
 int FUNC_5 (int*,int,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_6(
    struct i40iw_sc_qp *VAR_23,
    struct i40iw_modify_qp_info *VAR_24,
    u64 VAR_25,
    bool VAR_26)
{
 u64 *VAR_27;
 struct i40iw_sc_cqp *VAR_28;
 u64 VAR_29;
 u8 VAR_30 = 0;
 u8 VAR_31 = 0;

 VAR_28 = VAR_23->pd->dev->cqp;
 VAR_27 = FUNC_3(VAR_28, VAR_25);
 if (!VAR_27)
  return VAR_21;
 if (VAR_24->next_iwarp_state == VAR_22) {
  if (VAR_24->dont_send_fin)
   VAR_30 += VAR_2;
  if (VAR_24->dont_send_term)
   VAR_30 += VAR_0;
  if ((VAR_30 == VAR_1) ||
      (VAR_30 == VAR_2))
   VAR_31 = VAR_24->termlen;
 }

 FUNC_5(VAR_27,
        8,
        FUNC_0(VAR_31, VAR_14));

 FUNC_5(VAR_27, 16, VAR_23->hw_host_ctx_pa);
 FUNC_5(VAR_27, 40, VAR_23->shadow_area_pa);

 VAR_29 = VAR_23->qp_uk.qp_id |
   FUNC_0(VAR_18, VAR_3) |
   FUNC_0(VAR_24->ord_valid, VAR_9) |
   FUNC_0(VAR_24->tcp_ctx_valid, VAR_15) |
   FUNC_0(VAR_24->cached_var_valid, VAR_5) |
   FUNC_0(VAR_23->virtual_map, VAR_16) |
   FUNC_0(VAR_24->cq_num_valid, VAR_6) |
   FUNC_0(VAR_24->force_loopback, VAR_7) |
   FUNC_0(VAR_23->qp_type, VAR_10) |
   FUNC_0(VAR_24->remove_hash_idx, VAR_11) |
   FUNC_0(VAR_30, VAR_13) |
   FUNC_0(VAR_24->reset_tcp_conn, VAR_12) |
   FUNC_0(VAR_24->arp_cache_idx_valid, VAR_4) |
   FUNC_0(VAR_24->next_iwarp_state, VAR_8) |
   FUNC_0(VAR_28->polarity, VAR_17);

 FUNC_2(VAR_27, VAR_29);

 FUNC_1(VAR_28->dev, VAR_20, "QP_MODIFY WQE",
   VAR_27, VAR_19 * 8);

 if (VAR_26)
  FUNC_4(VAR_28);
 return 0;
}
