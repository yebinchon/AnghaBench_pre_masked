
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct node {int host; int port; } ;
struct TYPE_7__ {int targ; } ;
struct TYPE_8__ {TYPE_1__ targ; } ;
struct relative {size_t link_color; struct node node; TYPE_2__ conn; scalar_t__ type; struct relative* prev; struct relative* next; } ;
struct in_addr {int dummy; } ;
struct TYPE_9__ {int total_children; int * total_links_color; } ;
struct TYPE_11__ {TYPE_3__ structured; } ;
struct TYPE_10__ {int port; struct in_addr target; } ;


 struct relative VAR_0 ;
 TYPE_6__* VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;
 size_t FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 struct relative* FUNC_3 (int) ;

void FUNC_4 (struct node VAR_4) {
  struct relative *VAR_5 = FUNC_3 (sizeof (struct relative));
  VAR_5->next = VAR_0.next;
  VAR_5->prev = &VAR_0;
  VAR_5->prev->next = VAR_5;
  VAR_5->next->prev = VAR_5;
  VAR_5->node = VAR_4;
  VAR_5->type = 0;
  int VAR_6 = FUNC_2 (VAR_4.host);
  VAR_2.target = *(struct in_addr *)&VAR_6;
  VAR_2.port = VAR_4.port;
  VAR_5->conn.targ.targ = FUNC_0 (&VAR_2, 0);
  VAR_5->link_color = FUNC_1 (VAR_5->node.host, VAR_3);
  VAR_1->structured.total_links_color[VAR_5->link_color]++;
  VAR_1->structured.total_children ++;
}
