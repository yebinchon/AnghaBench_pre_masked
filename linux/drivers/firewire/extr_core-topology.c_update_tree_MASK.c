
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct list_head {int next; } ;
struct fw_node {scalar_t__ port_count; scalar_t__ color; struct list_head link; TYPE_2__** ports; int max_hops; scalar_t__ initiated_reset; scalar_t__ link_on; int node_id; } ;
struct fw_card {scalar_t__ color; struct fw_node* irm_node; struct fw_node* root_node; TYPE_1__* local_node; } ;
struct TYPE_4__ {scalar_t__ color; struct list_head link; } ;
struct TYPE_3__ {struct list_head link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fw_card*,TYPE_2__*,int ) ;
 struct fw_node* FUNC_3 (int ) ;
 int FUNC_4 (struct fw_card*,struct fw_node*,int) ;
 int FUNC_5 (struct fw_node*) ;
 int FUNC_6 (struct list_head*,struct list_head*) ;
 int FUNC_7 (struct fw_node*,struct fw_node*,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_8(struct fw_card *VAR_6, struct fw_node *VAR_7)
{
 struct list_head VAR_8, VAR_9;
 struct fw_node *VAR_10, *VAR_11, *VAR_12;
 int VAR_13, VAR_14;

 FUNC_0(&VAR_8);
 FUNC_6(&VAR_6->local_node->link, &VAR_8);
 FUNC_0(&VAR_9);
 FUNC_6(&VAR_7->link, &VAR_9);

 VAR_10 = FUNC_3(VAR_8);
 VAR_11 = FUNC_3(VAR_9);

 while (&VAR_10->link != &VAR_8) {
  FUNC_1(VAR_10->port_count != VAR_11->port_count);

  if (VAR_10->link_on && !VAR_11->link_on)
   VAR_14 = VAR_1;
  else if (!VAR_10->link_on && VAR_11->link_on)
   VAR_14 = VAR_2;
  else if (VAR_11->initiated_reset && VAR_11->link_on)
   VAR_14 = VAR_0;
  else
   VAR_14 = VAR_3;

  VAR_10->node_id = VAR_11->node_id;
  VAR_10->color = VAR_6->color;
  VAR_10->link_on = VAR_11->link_on;
  VAR_10->initiated_reset = VAR_11->initiated_reset;
  VAR_10->max_hops = VAR_11->max_hops;
  VAR_11->color = VAR_6->color;
  FUNC_4(VAR_6, VAR_10, VAR_14);

  if (VAR_6->root_node == VAR_11)
   VAR_6->root_node = VAR_10;
  if (VAR_6->irm_node == VAR_11)
   VAR_6->irm_node = VAR_10;

  for (VAR_13 = 0; VAR_13 < VAR_10->port_count; VAR_13++) {
   if (VAR_10->ports[VAR_13] && VAR_11->ports[VAR_13]) {





    if (VAR_10->ports[VAR_13]->color == VAR_6->color)
     continue;
    FUNC_6(&VAR_10->ports[VAR_13]->link, &VAR_8);
    FUNC_6(&VAR_11->ports[VAR_13]->link, &VAR_9);
   } else if (VAR_10->ports[VAR_13]) {







    FUNC_2(VAR_6, VAR_10->ports[VAR_13],
       VAR_5);
    VAR_10->ports[VAR_13] = ((void*)0);
   } else if (VAR_11->ports[VAR_13]) {






    FUNC_7(VAR_10, VAR_11, VAR_13);
    FUNC_2(VAR_6, VAR_10->ports[VAR_13],
       VAR_4);
   }
  }

  VAR_10 = FUNC_3(VAR_10->link.next);
  VAR_12 = FUNC_3(VAR_11->link.next);
  FUNC_5(VAR_11);
  VAR_11 = VAR_12;
 }
}
