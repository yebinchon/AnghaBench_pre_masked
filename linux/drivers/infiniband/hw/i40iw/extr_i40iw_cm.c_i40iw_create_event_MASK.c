
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40iw_cm_node {int dev; scalar_t__ cm_id; int loc_port; int rem_port; int loc_addr; int rem_addr; } ;
struct TYPE_2__ {int rem_addr; int loc_addr; scalar_t__ cm_id; int loc_port; int rem_port; } ;
struct i40iw_cm_event {int type; TYPE_1__ cm_info; struct i40iw_cm_node* cm_node; } ;
typedef enum i40iw_cm_event_type { ____Placeholder_i40iw_cm_event_type } i40iw_cm_event_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i40iw_cm_event*) ;
 int FUNC_1 (int ,int ,char*,struct i40iw_cm_node*,struct i40iw_cm_event*,int,int ,int ) ;
 struct i40iw_cm_event* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static struct i40iw_cm_event *FUNC_4(struct i40iw_cm_node *VAR_2,
       enum i40iw_cm_event_type VAR_3)
{
 struct i40iw_cm_event *VAR_4;

 if (!VAR_2->cm_id)
  return ((void*)0);

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);

 if (!VAR_4)
  return ((void*)0);

 VAR_4->type = VAR_3;
 VAR_4->cm_node = VAR_2;
 FUNC_3(VAR_4->cm_info.rem_addr, VAR_2->rem_addr, sizeof(VAR_4->cm_info.rem_addr));
 FUNC_3(VAR_4->cm_info.loc_addr, VAR_2->loc_addr, sizeof(VAR_4->cm_info.loc_addr));
 VAR_4->cm_info.rem_port = VAR_2->rem_port;
 VAR_4->cm_info.loc_port = VAR_2->loc_port;
 VAR_4->cm_info.cm_id = VAR_2->cm_id;

 FUNC_1(VAR_2->dev,
      VAR_1,
      "node=%p event=%p type=%u dst=%pI4 src=%pI4\n",
      VAR_2,
      VAR_4,
      VAR_3,
      VAR_4->cm_info.loc_addr,
      VAR_4->cm_info.rem_addr);

 FUNC_0(VAR_4);
 return VAR_4;
}
