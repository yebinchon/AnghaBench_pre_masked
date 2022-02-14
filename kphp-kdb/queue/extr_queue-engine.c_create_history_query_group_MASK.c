
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct connection {int pending_queries; } ;
typedef int queue ;
struct TYPE_6__ {int n; TYPE_1__** k; } ;
typedef TYPE_2__ qkey_group ;
struct TYPE_7__ {TYPE_1__* extra; } ;
struct TYPE_5__ {int subscribed; int lock; int name; int conn; int * q; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (struct connection*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct connection*,double,int *,int ) ;
 int FUNC_3 (int ,char*,int,double) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_5 (qkey_group *VAR_3, struct connection *VAR_4, double VAR_5) {
  int VAR_6;

  if (VAR_2 > 2) {
    FUNC_3 (VAR_1, "create_history_query_group (size = %d) (timeout = %lf)\n", VAR_3->n, VAR_5);
  }
  for (VAR_6 = 0; VAR_6 < VAR_3->n; VAR_6++) {
    queue *VAR_7 = VAR_3->k[VAR_6]->q;
    FUNC_1 (VAR_7 != ((void*)0));
    FUNC_0 (VAR_4)->extra = VAR_3->k[VAR_6];
    FUNC_2 (VAR_7, VAR_4, VAR_5, &VAR_3->k[VAR_6]->conn, VAR_3->k[VAR_6]->name);
    VAR_3->k[VAR_6]->lock++;
    VAR_3->k[VAR_6]->subscribed = FUNC_4 (VAR_0);
  }
  VAR_4->pending_queries = 1;

  return 1;
}
