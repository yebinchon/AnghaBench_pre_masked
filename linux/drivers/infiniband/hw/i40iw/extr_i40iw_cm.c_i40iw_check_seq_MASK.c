
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcphdr {int ack_seq; int seq; } ;
struct TYPE_2__ {scalar_t__ loc_seq_num; scalar_t__ rcv_nxt; scalar_t__ rcv_wnd; } ;
struct i40iw_cm_node {TYPE_1__ tcp_cntxt; } ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct i40iw_cm_node*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct i40iw_cm_node *VAR_0, struct tcphdr *VAR_1)
{
 int VAR_2 = 0;
 u32 VAR_3;
 u32 VAR_4;
 u32 VAR_5 = VAR_0->tcp_cntxt.loc_seq_num;
 u32 VAR_6 = VAR_0->tcp_cntxt.rcv_nxt;
 u32 VAR_7;

 VAR_3 = FUNC_3(VAR_1->seq);
 VAR_4 = FUNC_3(VAR_1->ack_seq);
 VAR_7 = VAR_0->tcp_cntxt.rcv_wnd;
 if (VAR_4 != VAR_5)
  VAR_2 = -1;
 else if (!FUNC_0(VAR_3, VAR_6, (VAR_6 + VAR_7)))
  VAR_2 = -1;
 if (VAR_2) {
  FUNC_2("seq number\n");
  FUNC_1(VAR_0);
 }
 return VAR_2;
}
