
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_node {int color; int node_id; int port_count; int link; int ref_count; int initiated_reset; int phy_speed; int link_on; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct fw_node* FUNC_5 (int ,int ) ;
 int VAR_2 ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (struct fw_node*,int ,int) ;

__attribute__((used)) static struct fw_node *FUNC_8(u32 VAR_3, int VAR_4, int VAR_5)
{
 struct fw_node *VAR_6;

 VAR_6 = FUNC_5(FUNC_7(VAR_6, VAR_2, VAR_4), VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_6->color = VAR_5;
 VAR_6->node_id = VAR_1 | FUNC_2(VAR_3);
 VAR_6->link_on = FUNC_1(VAR_3);
 VAR_6->phy_speed = FUNC_4(VAR_3);
 VAR_6->initiated_reset = FUNC_3(VAR_3);
 VAR_6->port_count = VAR_4;

 FUNC_6(&VAR_6->ref_count, 1);
 FUNC_0(&VAR_6->link);

 return VAR_6;
}
