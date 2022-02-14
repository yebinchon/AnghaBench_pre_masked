
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hts_data {TYPE_2__* extra; } ;
struct connection {int dummy; } ;
struct TYPE_5__ {int n; TYPE_1__** k; } ;
typedef TYPE_2__ qkey_group ;
struct TYPE_4__ {scalar_t__ lock; int * conn; scalar_t__ subscribed; } ;


 struct hts_data* FUNC_0 (struct connection*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3 (struct connection *VAR_0, int VAR_1) {
  struct hts_data *VAR_2 = FUNC_0(VAR_0);

  qkey_group *VAR_3 = VAR_2->extra;

  if (VAR_3 != ((void*)0)) {
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_3->n; VAR_4++) {
      VAR_3->k[VAR_4]->lock--;
      VAR_3->k[VAR_4]->subscribed = 0;
      VAR_3->k[VAR_4]->conn = ((void*)0);
      FUNC_1 (VAR_3->k[VAR_4]->lock >= 0);
    }
    FUNC_2 (VAR_3);
    VAR_2->extra = ((void*)0);
  }


  return 0;
}
