
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_device {int dummy; } ;
struct i40iw_cm_listener {scalar_t__ listener_state; int reused_node; int list; int backlog; struct i40iw_device* iwdev; struct i40iw_cm_core* cm_core; int pend_accepts_cnt; int vlan_id; int ipv4; int cm_id; int ref_count; int child_listen_list; int loc_port; int loc_addr; } ;
struct i40iw_cm_info {int backlog; int vlan_id; int ipv4; int cm_id; int loc_port; int loc_addr; } ;
struct i40iw_cm_core {int listen_list_lock; int listen_nodes; int stats_listen_nodes_created; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int ,char*) ;
 struct i40iw_cm_listener* FUNC_4 (struct i40iw_cm_core*,int ,int ,int ,int ) ;
 struct i40iw_cm_listener* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static struct i40iw_cm_listener *FUNC_10(
     struct i40iw_cm_core *VAR_4,
     struct i40iw_device *VAR_5,
     struct i40iw_cm_info *VAR_6)
{
 struct i40iw_cm_listener *VAR_7;
 unsigned long VAR_8;


 VAR_7 = FUNC_4(VAR_4, VAR_6->loc_addr,
           VAR_6->loc_port,
           VAR_6->vlan_id,
           VAR_2);
 if (VAR_7 &&
     (VAR_7->listener_state == VAR_1)) {
  FUNC_1(&VAR_7->ref_count);
  FUNC_3(VAR_4->dev,
       VAR_3,
       "Not creating listener since it already exists\n");
  return ((void*)0);
 }

 if (!VAR_7) {

  VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_0);
  if (!VAR_7)
   return ((void*)0);
  VAR_4->stats_listen_nodes_created++;
  FUNC_7(VAR_7->loc_addr, VAR_6->loc_addr, sizeof(VAR_7->loc_addr));
  VAR_7->loc_port = VAR_6->loc_port;

  FUNC_0(&VAR_7->child_listen_list);

  FUNC_2(&VAR_7->ref_count, 1);
 } else {
  VAR_7->reused_node = 1;
 }

 VAR_7->cm_id = VAR_6->cm_id;
 VAR_7->ipv4 = VAR_6->ipv4;
 VAR_7->vlan_id = VAR_6->vlan_id;
 FUNC_2(&VAR_7->pend_accepts_cnt, 0);
 VAR_7->cm_core = VAR_4;
 VAR_7->iwdev = VAR_5;

 VAR_7->backlog = VAR_6->backlog;
 VAR_7->listener_state = VAR_1;

 if (!VAR_7->reused_node) {
  FUNC_8(&VAR_4->listen_list_lock, VAR_8);
  FUNC_6(&VAR_7->list, &VAR_4->listen_nodes);
  FUNC_9(&VAR_4->listen_list_lock, VAR_8);
 }

 return VAR_7;
}
