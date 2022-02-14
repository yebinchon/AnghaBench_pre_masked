
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct metafile {int dummy; } ;
struct TYPE_5__ {long tot_lists; } ;
struct TYPE_4__ {int data; int next; int prev; scalar_t__ aio; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 scalar_t__ VAR_2 ;
 TYPE_1__** VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 long VAR_6 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*,int,...) ;
 TYPE_1__* FUNC_6 (int) ;

int FUNC_7 (long VAR_7, int VAR_8) {
  if (VAR_7 >= VAR_6 || VAR_7 < 0) {
    return 0;
  }
  FUNC_0 (VAR_7 >= 0);
  while (VAR_5 > VAR_2 && FUNC_3 ());

  int VAR_9 = VAR_7 + VAR_0.tot_lists + 1;
  FUNC_5 (3, "prepare_object_metafile: x = %d, head_metafile = %d\n", VAR_9, VAR_1);
  if (VAR_8 < 0 && VAR_3[VAR_9] && VAR_3[VAR_9]->aio) {
    FUNC_0 (VAR_3[VAR_9]->data);
    VAR_4 += FUNC_1 (VAR_9 - VAR_0.tot_lists) - FUNC_1 (VAR_9 - VAR_0.tot_lists - 1);
    FUNC_5 (0, "skipping pending aio query. Total lost memory %lld\n", VAR_4);
    VAR_3[VAR_9]->data = 0;
    VAR_3[VAR_9]->aio = 0;
  }
  if (!VAR_3[VAR_9]) {
    VAR_3[VAR_9] = FUNC_6 (sizeof (struct metafile));
    VAR_3[VAR_9]->next = -1;
    VAR_3[VAR_9]->prev = -1;
  } else {
    if (!VAR_3[VAR_9]->aio && VAR_3[VAR_9]->data) {
      FUNC_4 (VAR_9);
      return 1;
    }
  }
  return FUNC_2 (VAR_9, (VAR_8 > 0) || VAR_3[VAR_9]->aio);
}
