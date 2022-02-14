
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {int ack_seq; } ;
struct TYPE_2__ {scalar_t__ loc_seq_num; } ;
struct i40iw_cm_node {TYPE_1__ tcp_cntxt; } ;


 int FUNC_0 (struct i40iw_cm_node*,int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct i40iw_cm_node *VAR_0, struct tcphdr *VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_1(VAR_1->ack_seq) != VAR_0->tcp_cntxt.loc_seq_num) {
  VAR_2 = 1;
  FUNC_0(VAR_0, 1);
 }
 return VAR_2;
}
