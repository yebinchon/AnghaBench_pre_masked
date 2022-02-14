
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct node {int host; } ;
struct TYPE_5__ {int generation; struct connection* conn; } ;
struct TYPE_6__ {TYPE_1__ conn; } ;
struct relative {int type; size_t link_color; struct node node; TYPE_2__ conn; struct relative* prev; struct relative* next; } ;
struct connection {int generation; } ;
struct TYPE_7__ {int total_parents; int * total_links_color; } ;
struct TYPE_8__ {TYPE_3__ structured; } ;


 struct relative VAR_0 ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ,int ) ;
 struct relative* FUNC_1 (int) ;

void FUNC_2 (struct node VAR_3, struct connection *VAR_4) {
  struct relative *VAR_5 = FUNC_1 (sizeof (struct relative));
  VAR_5->next = VAR_0.next;
  VAR_5->prev = &VAR_0;
  VAR_5->prev->next = VAR_5;
  VAR_5->next->prev = VAR_5;
  VAR_5->node = VAR_3;
  VAR_5->type = 1;
  VAR_5->conn.conn.conn = VAR_4;
  VAR_5->conn.conn.generation = VAR_4->generation;
  VAR_5->link_color = FUNC_0 (VAR_5->node.host, VAR_2);
  VAR_1->structured.total_links_color[VAR_5->link_color]++;
  VAR_1->structured.total_parents ++;
}
