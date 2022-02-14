
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_cm_node {int user_pri; int rem_port; int loc_port; int rem_addr; int loc_addr; int vlan_id; int ipv4; } ;
struct i40iw_cm_info {int user_pri; int rem_port; int loc_port; int rem_addr; int loc_addr; int vlan_id; int ipv4; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct i40iw_cm_node *VAR_0,
    struct i40iw_cm_info *VAR_1)
{
 VAR_1->ipv4 = VAR_0->ipv4;
 VAR_1->vlan_id = VAR_0->vlan_id;
 FUNC_0(VAR_1->loc_addr, VAR_0->loc_addr, sizeof(VAR_1->loc_addr));
 FUNC_0(VAR_1->rem_addr, VAR_0->rem_addr, sizeof(VAR_1->rem_addr));
 VAR_1->loc_port = VAR_0->loc_port;
 VAR_1->rem_port = VAR_0->rem_port;
 VAR_1->user_pri = VAR_0->user_pri;
}
