
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct iw_cm_id {int (* rem_ref ) (struct iw_cm_id*) ;struct i40iw_qp* provider_data; } ;
struct i40iw_qp {int * cm_id; int iwdev; } ;
struct i40iw_cm_event {TYPE_1__* cm_node; } ;
struct TYPE_3__ {struct iw_cm_id* cm_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,struct iw_cm_id*,int ,int ) ;
 int FUNC_2 (struct iw_cm_id*) ;

__attribute__((used)) static void FUNC_3(struct i40iw_cm_event *VAR_2)
{
 struct i40iw_qp *VAR_3;
 struct iw_cm_id *VAR_4;

 VAR_4 = VAR_2->cm_node->cm_id;
 if (!VAR_4)
  return;

 VAR_3 = VAR_4->provider_data;

 if (!VAR_3 || !VAR_3->iwdev)
  return;

 VAR_3->cm_id = ((void*)0);
 VAR_4->provider_data = ((void*)0);
 FUNC_1(VAR_2->cm_node, VAR_4,
       VAR_1,
       -VAR_0);
 VAR_4->rem_ref(VAR_4);
 FUNC_0(VAR_2->cm_node);
}
