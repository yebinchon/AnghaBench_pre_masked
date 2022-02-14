
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_cm_id {struct i40iw_qp* provider_data; } ;
struct i40iw_qp {int * cm_id; } ;
struct i40iw_cm_node {struct iw_cm_id* cm_id; int dev; } ;
struct i40iw_cm_event {struct i40iw_cm_node* cm_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*,struct i40iw_cm_node*,struct iw_cm_id*) ;
 int FUNC_1 (struct i40iw_cm_node*,struct iw_cm_id*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct i40iw_cm_event *VAR_4)
{
 struct i40iw_cm_node *VAR_5 = VAR_4->cm_node;
 struct iw_cm_id *VAR_6 = VAR_5->cm_id;
 struct i40iw_qp *VAR_7;

 if (!VAR_6)
  return;

 VAR_7 = VAR_6->provider_data;
 if (!VAR_7)
  return;

 FUNC_0(VAR_5->dev,
      VAR_1,
      "reset event %p - cm_id = %p\n",
       VAR_4->cm_node, VAR_6);
 VAR_7->cm_id = ((void*)0);

 FUNC_1(VAR_5, VAR_5->cm_id, VAR_3, -VAR_0);
 FUNC_1(VAR_5, VAR_5->cm_id, VAR_2, 0);
}
