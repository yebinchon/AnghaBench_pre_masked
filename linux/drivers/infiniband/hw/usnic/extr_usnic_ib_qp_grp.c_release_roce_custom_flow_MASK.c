
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int port_num; } ;
struct usnic_ib_qp_grp_flow {TYPE_1__ usnic_roce; int trans_type; int flow; } ;


 int FUNC_0 (struct usnic_ib_qp_grp_flow*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct usnic_ib_qp_grp_flow *VAR_0)
{
 FUNC_1(VAR_0->flow);
 FUNC_2(VAR_0->trans_type,
     VAR_0->usnic_roce.port_num);
 FUNC_0(VAR_0);
}
