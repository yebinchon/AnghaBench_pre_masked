
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tcpcb {int dummy; } ;
struct lro_entry {int eh_type; int need_wakeup; scalar_t__ tcp_tot_p_len; scalar_t__ mbuf_cnt; TYPE_2__* m_last_mbuf; TYPE_2__* m_head; int dest_port; TYPE_1__* le_ip4; int source_port; int dest_ip6; int source_ip6; } ;
struct lro_ctrl {scalar_t__ lro_length_lim; scalar_t__ lro_ackcnt_lim; int lro_free; int lro_flushed; TYPE_3__* ifp; } ;
struct inpcb {int inp_flags; int inp_flags2; scalar_t__ inp_in_input; } ;
struct epoch_tracker {int dummy; } ;
struct TYPE_7__ {int if_vnet; } ;
struct TYPE_6__ {int m_flags; } ;
struct TYPE_5__ {int ip_dst; int ip_src; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct inpcb*) ;
 int FUNC_3 (int *,struct lro_entry*,int ) ;
 int VAR_7 ;
 int FUNC_4 (struct epoch_tracker) ;
 int FUNC_5 (struct epoch_tracker) ;
 int VAR_8 ;
 int FUNC_6 (struct lro_entry*,int) ;
 int FUNC_7 (int ,int) ;
 scalar_t__ VAR_9 ;
 struct inpcb* FUNC_8 (int *,int *,int ,int *,int ,int ,TYPE_3__*) ;
 struct inpcb* FUNC_9 (int *,int ,int ,int ,int ,int ,TYPE_3__*) ;
 struct tcpcb* FUNC_10 (struct inpcb*) ;
 int VAR_10 ;
 int FUNC_11 (struct tcpcb*,struct lro_ctrl*,struct lro_entry*,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_12 (struct tcpcb*,struct lro_ctrl*,struct lro_entry*,int) ;
 int FUNC_13 (struct tcpcb*,struct lro_ctrl*,struct lro_entry*,int *,int,int,int,scalar_t__,int) ;
 int FUNC_14 (struct tcpcb*,struct lro_entry*) ;
 int FUNC_15 (struct inpcb*) ;
 scalar_t__ VAR_17 ;

void
FUNC_16(struct lro_ctrl *VAR_18, struct lro_entry *VAR_19)
{
 struct tcpcb *VAR_20 = ((void*)0);
 int VAR_21 = 0;
  if (VAR_19->m_head != VAR_19->m_last_mbuf) {
   FUNC_7(VAR_11, 1);
   FUNC_12(VAR_20, VAR_18, VAR_19, VAR_21);
  } else
   FUNC_7(VAR_15, 1);
  FUNC_11(VAR_20, VAR_18, VAR_19, VAR_21);
 VAR_18->lro_flushed++;
 FUNC_6(VAR_19, sizeof(*VAR_19));
 FUNC_3(&VAR_18->lro_free, VAR_19, VAR_10);
}
