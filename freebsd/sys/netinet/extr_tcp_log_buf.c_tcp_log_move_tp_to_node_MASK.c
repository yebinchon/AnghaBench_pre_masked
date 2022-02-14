
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcpcb {scalar_t__ t_lognum; int t_logs; int t_lib; TYPE_2__* t_inpcb; } ;
struct tcp_log_id_node {int tln_bucket; scalar_t__ tln_count; int tln_entries; int tln_af; int tln_ie; } ;
struct TYPE_3__ {int inc_flags; int inc_ie; } ;
struct TYPE_4__ {TYPE_1__ inp_inc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct tcpcb *VAR_3, struct tcp_log_id_node *VAR_4)
{

 FUNC_0(VAR_3->t_inpcb);

 VAR_4->tln_ie = VAR_3->t_inpcb->inp_inc.inc_ie;
 if (VAR_3->t_inpcb->inp_inc.inc_flags & VAR_2)
  VAR_4->tln_af = VAR_1;
 else
  VAR_4->tln_af = VAR_0;
 VAR_4->tln_entries = VAR_3->t_logs;
 VAR_4->tln_count = VAR_3->t_lognum;
 VAR_4->tln_bucket = VAR_3->t_lib;


 FUNC_1(&VAR_3->t_logs);
 VAR_3->t_lognum = 0;
}
