
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct tcphdr {int doff; int seq; } ;
struct i40iw_puda_buf {scalar_t__ tcph; } ;
struct TYPE_5__ {int rcv_nxt; } ;
struct i40iw_cm_node {int state; int accept_pend; int qhash_set; int ref_count; int iwdev; TYPE_3__* listener; TYPE_2__ tcp_cntxt; TYPE_1__* cm_core; } ;
struct i40iw_cm_info {int dummy; } ;
struct TYPE_6__ {int pend_accepts_cnt; int backlog; } ;
struct TYPE_4__ {int stats_backlog_drops; } ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct i40iw_cm_node*,int) ;
 int FUNC_3 (struct i40iw_cm_node*) ;
 int FUNC_4 (struct i40iw_cm_node*,struct i40iw_cm_info*) ;
 int FUNC_5 (struct i40iw_cm_node*,struct tcphdr*,int,int) ;
 int FUNC_6 (int ,struct i40iw_cm_info*,int ,int ,void*,int) ;
 int FUNC_7 (struct i40iw_cm_node*,int) ;
 int FUNC_8 (struct i40iw_cm_node*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct i40iw_cm_node *VAR_3,
     struct i40iw_puda_buf *VAR_4)
{
 struct tcphdr *VAR_5 = (struct tcphdr *)VAR_4->tcph;
 int VAR_6;
 u32 VAR_7;
 int VAR_8;
 struct i40iw_cm_info VAR_9;

 VAR_8 = (VAR_5->doff << 2) - sizeof(struct tcphdr);
 VAR_7 = FUNC_9(VAR_5->seq);

 switch (VAR_3->state) {
 case 129:
 case 131:

  FUNC_2(VAR_3, 1);
  break;
 case 133:

  if (FUNC_1(&VAR_3->listener->pend_accepts_cnt) >
      VAR_3->listener->backlog) {
   VAR_3->cm_core->stats_backlog_drops++;
   FUNC_7(VAR_3, 0);
   break;
  }
  VAR_6 = FUNC_5(VAR_3, VAR_5, VAR_8, 1);
  if (VAR_6) {
   FUNC_7(VAR_3, 0);

   break;
  }
  VAR_3->tcp_cntxt.rcv_nxt = VAR_7 + 1;
  VAR_3->accept_pend = 1;
  FUNC_0(&VAR_3->listener->pend_accepts_cnt);

  VAR_3->state = VAR_0;
  FUNC_4(VAR_3, &VAR_9);
  VAR_6 = FUNC_6(VAR_3->iwdev,
      &VAR_9,
      VAR_2,
      VAR_1,
      (void *)VAR_3,
      0);
  VAR_3->qhash_set = 1;
  break;
 case 139:
  FUNC_3(VAR_3);
  FUNC_0(&VAR_3->ref_count);
  FUNC_8(VAR_3);
  break;
 case 130:
 case 137:
 case 136:
 case 135:
 case 132:
 case 134:
 case 138:
 case 128:
 default:
  break;
 }
}
