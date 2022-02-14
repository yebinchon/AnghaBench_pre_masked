
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_cm_id {int (* rem_ref ) (struct iw_cm_id*) ;} ;
struct i40iw_cm_node {int state; int ref_count; struct iw_cm_id* cm_id; } ;
typedef enum i40iw_cm_node_state { ____Placeholder_i40iw_cm_node_state } i40iw_cm_node_state ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int *) ;
 int FUNC_1 (struct i40iw_cm_node*,int ) ;
 int FUNC_2 (struct i40iw_cm_node*) ;
 int FUNC_3 (struct i40iw_cm_node*) ;
 int FUNC_4 (struct iw_cm_id*) ;

__attribute__((used)) static void FUNC_5(struct i40iw_cm_node *VAR_2)
{
 struct iw_cm_id *VAR_3 = VAR_2->cm_id;
 enum i40iw_cm_node_state VAR_4 = VAR_2->state;

 VAR_2->state = VAR_1;
 switch (VAR_4) {
 case 128:
 case 131:
  FUNC_2(VAR_2);
  break;
 case 130:
 case 129:
  if (VAR_2->cm_id)
   VAR_3->rem_ref(VAR_3);
  FUNC_3(VAR_2);
  break;
 default:
  FUNC_0(&VAR_2->ref_count);
  FUNC_3(VAR_2);
  FUNC_1(VAR_2, VAR_0);
  break;
 }
}
