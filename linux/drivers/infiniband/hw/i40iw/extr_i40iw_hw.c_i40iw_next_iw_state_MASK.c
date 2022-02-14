
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ term_flags; } ;
struct i40iw_qp {int hw_iwarp_state; int iwdev; TYPE_1__ sc_qp; } ;
struct i40iw_modify_qp_info {int next_iwarp_state; int remove_hash_idx; int cq_num_valid; int arp_cache_idx_valid; int dont_send_term; int dont_send_fin; int termlen; int reset_tcp_conn; } ;
typedef int info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct i40iw_qp*,struct i40iw_modify_qp_info*,int ) ;
 int FUNC_1 (struct i40iw_modify_qp_info*,int ,int) ;

void FUNC_2(struct i40iw_qp *VAR_3,
    u8 VAR_4,
    u8 VAR_5,
    u8 VAR_6,
    u8 VAR_7)
{
 struct i40iw_modify_qp_info VAR_8;

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.next_iwarp_state = VAR_4;
 VAR_8.remove_hash_idx = VAR_5;
 VAR_8.cq_num_valid = 1;
 VAR_8.arp_cache_idx_valid = 1;
 VAR_8.dont_send_term = 1;
 VAR_8.dont_send_fin = 1;
 VAR_8.termlen = VAR_7;

 if (VAR_6 & VAR_1)
  VAR_8.dont_send_term = 0;
 if (VAR_6 & VAR_0)
  VAR_8.dont_send_fin = 0;
 if (VAR_3->sc_qp.term_flags && (VAR_4 == VAR_2))
  VAR_8.reset_tcp_conn = 1;
 VAR_3->hw_iwarp_state = VAR_4;
 FUNC_0(VAR_3->iwdev, VAR_3, &VAR_8, 0);
}
