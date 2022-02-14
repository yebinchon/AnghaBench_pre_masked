
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bridge_port {scalar_t__ enable; scalar_t__ fwd_trans; int design_port; int design_bridge; int design_root; scalar_t__ design_cost; } ;
typedef int port_id ;
typedef int bridge_id ;


 int FUNC_0 (int *,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct bridge_port *VAR_2)
{
 if (VAR_2->enable == VAR_1) {
  VAR_2->design_cost = 0;
  FUNC_0(&(VAR_2->design_root), sizeof(bridge_id));
  FUNC_0(&(VAR_2->design_bridge), sizeof(bridge_id));
  FUNC_0(&(VAR_2->design_port), sizeof(port_id));
  VAR_2->fwd_trans = 0;
 }

 VAR_2->enable = VAR_0;
}
