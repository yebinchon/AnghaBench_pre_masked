
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct metafile {int dummy; } ;
typedef int object_id_t ;
struct TYPE_5__ {long tot_lists; } ;
struct TYPE_4__ {int data; int next; int prev; scalar_t__ aio; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int) ;
 long FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int,int) ;
 scalar_t__ VAR_2 ;
 TYPE_1__** VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 long VAR_6 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,char*,int,...) ;
 TYPE_1__* FUNC_7 (int) ;

int FUNC_8 (object_id_t VAR_7, int VAR_8) {
  long VAR_9 = FUNC_1 (VAR_7);
  if (VAR_9 >= VAR_6) {
    return 0;
  }
  FUNC_0 (VAR_9 >= 0);
  while (VAR_5 > VAR_2 && FUNC_4 ());

  int VAR_10 = VAR_9 + VAR_0.tot_lists + 1;
  FUNC_6 (3, "prepare_object_metafile: x = %d, head_metafile = %d\n", VAR_10, VAR_1);
  if (VAR_8 < 0 && VAR_3[VAR_10] && VAR_3[VAR_10]->aio) {
    FUNC_0 (VAR_3[VAR_10]->data);
    VAR_4 += FUNC_2 (VAR_10 - VAR_0.tot_lists) - FUNC_2 (VAR_10 - VAR_0.tot_lists - 1);
    FUNC_6 (0, "skipping pending aio query. Total lost memory %lld\n", VAR_4);
    VAR_3[VAR_10]->data = 0;
    VAR_3[VAR_10]->aio = 0;
  }
  if (!VAR_3[VAR_10]) {
    VAR_3[VAR_10] = FUNC_7 (sizeof (struct metafile));
    VAR_3[VAR_10]->next = -1;
    VAR_3[VAR_10]->prev = -1;
  } else {
    if (!VAR_3[VAR_10]->aio && VAR_3[VAR_10]->data) {
      FUNC_5 (VAR_10);
      return 1;
    }
  }
  return FUNC_3 (VAR_10, (VAR_8 > 0) || VAR_3[VAR_10]->aio);
}
