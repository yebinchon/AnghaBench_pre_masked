
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct metafile {int dummy; } ;
typedef int list_id_t ;
struct TYPE_5__ {int tot_lists; } ;
struct TYPE_4__ {int data; int next; int prev; scalar_t__ aio; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 scalar_t__ VAR_1 ;
 TYPE_1__** VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,char*,...) ;
 TYPE_1__* FUNC_7 (int) ;

int FUNC_8 (list_id_t VAR_5, int VAR_6) {
  FUNC_6 (4, "preparing metafile...\n");
  while (VAR_4 > VAR_1 && FUNC_4 ());


  int VAR_7 = FUNC_1 (VAR_5);
  if (VAR_7 < 0) {
    return 0;
  }
  FUNC_0 (VAR_7 < VAR_0.tot_lists);
  FUNC_6 (4, "preparing metafile #%d of %d\n", VAR_7, VAR_0.tot_lists);
  if (VAR_6 < 0 && VAR_2[VAR_7] && VAR_2[VAR_7]->aio) {
    FUNC_0 (VAR_2[VAR_7]->data);
    VAR_3 += FUNC_2 (VAR_7 + 1) - FUNC_2 (VAR_7);
    FUNC_6 (0, "skipping pending aio query. Total lost memory %lld\n", VAR_3);
    VAR_2[VAR_7]->data = 0;
    VAR_2[VAR_7]->aio = 0;
  }
  if (!VAR_2[VAR_7]) {
    VAR_2[VAR_7] = FUNC_7 (sizeof (struct metafile));
    VAR_2[VAR_7]->next = -1;
    VAR_2[VAR_7]->prev = -1;
  } else {
    if (!VAR_2[VAR_7]->aio && VAR_2[VAR_7]->data) {
      FUNC_5 (VAR_7);
      return 1;
    }
  }
  return FUNC_3 (VAR_7, (VAR_6 > 0) || VAR_2[VAR_7]->aio);
}
