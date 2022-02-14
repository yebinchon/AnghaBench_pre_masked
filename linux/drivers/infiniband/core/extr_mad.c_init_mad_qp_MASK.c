
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad_qp_info {int snoop_count; scalar_t__ snoop_table_size; int * snoop_table; int snoop_lock; int overflow_list; int recv_queue; int send_queue; struct ib_mad_port_private* port_priv; } ;
struct ib_mad_port_private {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ib_mad_qp_info*,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ib_mad_port_private *VAR_0,
   struct ib_mad_qp_info *VAR_1)
{
 VAR_1->port_priv = VAR_0;
 FUNC_2(VAR_1, &VAR_1->send_queue);
 FUNC_2(VAR_1, &VAR_1->recv_queue);
 FUNC_0(&VAR_1->overflow_list);
 FUNC_3(&VAR_1->snoop_lock);
 VAR_1->snoop_table = ((void*)0);
 VAR_1->snoop_table_size = 0;
 FUNC_1(&VAR_1->snoop_count, 0);
}
