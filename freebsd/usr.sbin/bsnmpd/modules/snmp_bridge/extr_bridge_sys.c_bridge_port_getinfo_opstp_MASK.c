
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ifbpstpreq {int ifbp_design_port; int ifbp_design_bridge; int ifbp_design_root; int ifbp_design_cost; int ifbp_fwd_trans; } ;
struct bridge_port {int design_port; int design_bridge; int design_root; int design_cost; int fwd_trans; int enable; } ;


 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct ifbpstpreq *VAR_1, struct bridge_port *VAR_2)
{
 VAR_2->enable = VAR_0;
 VAR_2->fwd_trans = VAR_1->ifbp_fwd_trans;
 VAR_2->design_cost = VAR_1->ifbp_design_cost;
 FUNC_1(VAR_1->ifbp_design_root, VAR_2->design_root);
 FUNC_1(VAR_1->ifbp_design_bridge, VAR_2->design_bridge);
 FUNC_0(&(VAR_1->ifbp_design_port), &(VAR_2->design_port),
     sizeof(uint16_t));
}
