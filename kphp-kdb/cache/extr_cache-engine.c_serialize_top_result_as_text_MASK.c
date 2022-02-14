
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct cache_uri {int * data; } ;
struct cache_local_copy {int location; } ;
struct amortization_counter {scalar_t__ value; } ;
typedef int record ;
struct TYPE_8__ {int cnt; int flags; size_t heap_acounter_off; int disk_filter; TYPE_1__* heap; } ;
typedef TYPE_2__ cache_top_access_result_t ;
struct TYPE_9__ {int pos; int size; int buff; } ;
typedef TYPE_3__ cache_buffer_t ;
struct TYPE_7__ {struct cache_uri** H; } ;


 int VAR_0 ;
 int FUNC_0 (struct cache_local_copy*) ;
 int FUNC_1 (TYPE_3__*,char*,int) ;
 int FUNC_2 (TYPE_3__*,char*,...) ;
 int FUNC_3 (struct cache_uri*) ;
 int FUNC_4 (struct cache_local_copy*,int*,int*) ;
 scalar_t__ FUNC_5 (struct cache_uri*,int) ;
 int FUNC_6 (struct cache_uri*) ;
 struct cache_local_copy* FUNC_7 (struct cache_uri*,int ) ;
 int FUNC_8 (char*,int ,int) ;

__attribute__((used)) static int FUNC_9 (cache_top_access_result_t *VAR_1, char *VAR_2, int VAR_3) {
  int VAR_4, VAR_5 = 0;
  for (VAR_4 = 1; VAR_4 <= VAR_1->cnt; VAR_4++) {
    char VAR_6[2048];
    cache_buffer_t VAR_7;
    struct cache_uri *VAR_8 = VAR_1->heap->H[VAR_4];
    FUNC_1 (&VAR_7, VAR_6, sizeof (VAR_6));
    struct cache_local_copy *VAR_9 = ((void*)0);
    if (VAR_1->flags & 0x80000000) {
      VAR_9 = FUNC_7 (VAR_8, VAR_1->disk_filter);
      FUNC_0 (VAR_9);
      FUNC_2 (&VAR_7, "%s\t", VAR_9->location);
    }
    FUNC_2 (&VAR_7, "%s", FUNC_3 (VAR_8));
    if (VAR_1->flags & 4) {
      int VAR_10;
      for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
        FUNC_2 (&VAR_7, "\t%.7lg", (double) FUNC_5 (VAR_8, VAR_10));
      }
    } else if (VAR_1->flags & 1) {
      struct amortization_counter *VAR_11 = ((struct amortization_counter *) &VAR_8->data[VAR_1->heap_acounter_off]);
      FUNC_2 (&VAR_7, "\t%.7lg", (double) VAR_11->value);
    }

    if (VAR_1->flags & 2) {
      FUNC_2 (&VAR_7, "\t%lld", FUNC_6 (VAR_8));
    }

    if (VAR_1->flags & (32+64)) {
      int VAR_12 = -1, VAR_13 = -1;
      FUNC_0 (VAR_9);
      FUNC_4 (VAR_9, &VAR_12, &VAR_13);
      if (VAR_1->flags & 32) {
        FUNC_2 (&VAR_7, "\t%d", VAR_12);
      }
      if (VAR_1->flags & 64) {
        FUNC_2 (&VAR_7, "\t%d", VAR_13);
      }
    }

    FUNC_2 (&VAR_7, "\n");
    if (VAR_7.pos >= VAR_7.size) {
      break;
    }
    if (VAR_5 + VAR_7.pos > VAR_3) {
      break;
    }
    FUNC_8 (VAR_2 + VAR_5, VAR_7.buff, VAR_7.pos);
    VAR_5 += VAR_7.pos;
  }
  return VAR_5;
}
