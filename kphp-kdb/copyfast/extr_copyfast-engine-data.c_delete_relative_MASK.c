
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_7__* targ; } ;
struct TYPE_9__ {scalar_t__ generation; struct connection* conn; } ;
struct TYPE_11__ {TYPE_2__ targ; TYPE_1__ conn; } ;
struct relative {int type; size_t link_color; TYPE_6__* next; TYPE_5__* prev; TYPE_3__ conn; } ;
struct connection {scalar_t__ generation; struct connection* next; } ;
struct TYPE_12__ {int * total_links_color; int total_parents; int total_children; } ;
struct TYPE_16__ {TYPE_4__ structured; } ;
struct TYPE_15__ {struct connection* first_conn; } ;
struct TYPE_14__ {TYPE_5__* prev; } ;
struct TYPE_13__ {TYPE_6__* next; } ;


 TYPE_8__* VAR_0 ;
 int FUNC_0 (struct relative*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (struct connection*,int) ;
 int FUNC_3 (int ,char*,...) ;
 struct connection* FUNC_4 (struct relative*) ;
 int FUNC_5 (struct connection*) ;
 scalar_t__ FUNC_6 (struct connection*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct relative*,int) ;

void FUNC_8 (struct relative *VAR_4, int VAR_5) {
  FUNC_0 (VAR_4);
  if (VAR_3 >= 3) {
    FUNC_3 (VAR_2, "delete_relative force = %d, x->type = %d\n", VAR_5, VAR_4->type);
  }
  struct connection *VAR_6 = FUNC_4 (VAR_4);
  struct connection *VAR_7;
  if (VAR_4->type == 0) {
    VAR_7 = VAR_4->conn.targ.targ->first_conn;
    while (VAR_7 != (struct connection *)VAR_4->conn.targ.targ) {
      FUNC_2 (VAR_7, -1);
      VAR_7 = VAR_7->next;
    }
  } else {
    VAR_7 = VAR_4->conn.conn.conn;
    if (VAR_7 && VAR_7->generation != VAR_4->conn.conn.generation) {
      VAR_7 = 0;
    }
    if (VAR_7) {
      FUNC_2 (VAR_7, -1);
    }
  }

  if (VAR_4->type == 0) {
    FUNC_1 (VAR_4->conn.targ.targ);
    VAR_0->structured.total_children --;
  } else {
    VAR_0->structured.total_parents --;
  }
  VAR_0->structured.total_links_color[VAR_4->link_color]--;
  VAR_4->next->prev = VAR_4->prev;
  VAR_4->prev->next = VAR_4->next;
  FUNC_7 (VAR_4, sizeof (struct relative));
  if (VAR_6) {
    if (VAR_5) {
      if (FUNC_6 (VAR_6) == VAR_1) {
        FUNC_5 (VAR_6);
      }
    }
  }
  if (VAR_3 >= 6) {
    FUNC_3 (VAR_2, "delete_relative: done\n");
  }
}
