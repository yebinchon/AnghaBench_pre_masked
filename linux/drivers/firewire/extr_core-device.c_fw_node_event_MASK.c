
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_node {struct fw_device* data; int node_id; } ;
struct fw_device {int is_local; int workfn; int state; int generation; int node_id; int work; int client_list; int client_list_mutex; int node; int card; } ;
struct fw_card {int link; int generation; struct fw_node* local_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct fw_card*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (struct fw_node*) ;
 int FUNC_8 (struct fw_device*,int ) ;
 struct fw_device* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;

void FUNC_13(struct fw_card *VAR_11, struct fw_node *VAR_12, int VAR_13)
{
 struct fw_device *VAR_14;

 switch (VAR_13) {
 case 133:






 create:
  VAR_14 = FUNC_9(sizeof(*VAR_14), VAR_3);
  if (VAR_14 == ((void*)0))
   break;
  FUNC_4(&VAR_14->state, VAR_1);
  VAR_14->card = FUNC_6(VAR_11);
  VAR_14->node = FUNC_7(VAR_12);
  VAR_14->node_id = VAR_12->node_id;
  VAR_14->generation = VAR_11->generation;
  VAR_14->is_local = VAR_12 == VAR_11->local_node;
  FUNC_11(&VAR_14->client_list_mutex);
  FUNC_1(&VAR_14->client_list);






  VAR_12->data = VAR_14;







  VAR_14->workfn = VAR_6;
  FUNC_0(&VAR_14->work, VAR_10);
  FUNC_8(VAR_14, VAR_4);
  break;

 case 131:
 case 129:
  VAR_14 = VAR_12->data;
  if (VAR_14 == ((void*)0))
   goto create;

  VAR_14->node_id = VAR_12->node_id;
  FUNC_12();
  VAR_14->generation = VAR_11->generation;
  if (FUNC_2(&VAR_14->state,
       VAR_2,
       VAR_1) == VAR_2) {
   VAR_14->workfn = VAR_7;
   FUNC_8(VAR_14,
    VAR_14->is_local ? 0 : VAR_4);
  }
  break;

 case 128:
  VAR_14 = VAR_12->data;
  if (VAR_14 == ((void*)0))
   break;

  VAR_14->node_id = VAR_12->node_id;
  FUNC_12();
  VAR_14->generation = VAR_11->generation;
  if (FUNC_3(&VAR_14->state) == VAR_2) {
   VAR_14->workfn = VAR_9;
   FUNC_8(VAR_14, 0);
  }
  break;

 case 132:
 case 130:
  if (!VAR_12->data)
   break;
  VAR_14 = VAR_12->data;
  if (FUNC_5(&VAR_14->state,
    VAR_0) == VAR_2) {
   VAR_14->workfn = VAR_8;
   FUNC_8(VAR_14,
    FUNC_10(&VAR_11->link) ? 0 : VAR_5);
  }
  break;
 }
}
