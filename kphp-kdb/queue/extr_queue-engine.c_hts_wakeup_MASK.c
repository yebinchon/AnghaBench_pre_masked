
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hts_data {int query_flags; TYPE_2__* extra; } ;
struct connection {scalar_t__ status; int parse_state; scalar_t__ pending_queries; scalar_t__ generation; } ;
struct TYPE_6__ {int n; TYPE_1__** k; } ;
typedef TYPE_2__ qkey_group ;
struct TYPE_5__ {char* name; scalar_t__ lock; int * conn; scalar_t__ subscribed; } ;


 struct hts_data* FUNC_0 (struct connection*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct connection*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,char*,...) ;
 char* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct connection*,char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_7 (struct connection *VAR_7) {

  struct hts_data *VAR_8 = FUNC_0(VAR_7);

  qkey_group *VAR_9 = VAR_8->extra;

  if (VAR_6 > 2) {
    FUNC_3 (VAR_5, "hts_wakeup : keys [");
    int VAR_10;
    for (VAR_10 = 0; VAR_10 < VAR_9->n; VAR_10++) {
      FUNC_3 (VAR_5, "%s%c", VAR_9->k[VAR_10]->name, ",]"[VAR_10 + 1 == VAR_9->n]);
    }
    FUNC_3 (VAR_5, "\n");
  }

  FUNC_1 (VAR_7->status == VAR_1 || VAR_7->status == VAR_3);
  VAR_7->status = VAR_1;
  FUNC_2 (VAR_7);

  if (!(VAR_8->query_flags & VAR_0)) {
    VAR_7->status = VAR_4;
    VAR_7->parse_state = -1;
  }

  char *VAR_11 = FUNC_4 (VAR_9);
  VAR_7->generation = ++VAR_2;
  VAR_7->pending_queries = 0;

  int VAR_12;
  for (VAR_12 = 0; VAR_12 < VAR_9->n; VAR_12++) {
    VAR_9->k[VAR_12]->lock--;
    VAR_9->k[VAR_12]->subscribed = 0;
    VAR_9->k[VAR_12]->conn = ((void*)0);
    FUNC_1 (VAR_9->k[VAR_12]->lock >= 0);
  }
  FUNC_6 (VAR_9);
  VAR_8->extra = ((void*)0);


  return FUNC_5 (VAR_7, VAR_11);
}
