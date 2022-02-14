
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int item_id; } ;
typedef TYPE_1__ item_t ;
struct TYPE_7__ {int cur_y; int tag_word; TYPE_1__* cur; } ;


 int VAR_0 ;
 TYPE_3__** VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,int,int*) ;
 int FUNC_6 (int,char*,...) ;

__attribute__((used)) static void FUNC_7 (void) {
  FUNC_6 (3, "priority_sort_query\n");
  VAR_9 = (VAR_8 & VAR_0) ? 1 : 0;
  int VAR_11 = 0;
  int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16 = 0;
  item_t *VAR_17;
  VAR_2 = 0;
  for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
    VAR_16 += VAR_5[VAR_12];
    if (FUNC_2 (VAR_3+VAR_12, VAR_6[VAR_12], VAR_5[VAR_12], 0)) {
      FUNC_3 (VAR_3+VAR_12);
    } else {
      if (VAR_5[VAR_12]) {

        return;
      }
    }
  }
  FUNC_6 (3, "HC = %d, tags = %d, Q_words = %d\n", VAR_2, VAR_16, VAR_10);

  if (VAR_2 + VAR_4 < VAR_10) {
    return;
  }

  VAR_17 = ((void*)0);
  VAR_12 = VAR_13 = VAR_14 = 0;
  int VAR_18 = VAR_10 - VAR_4;
  if (VAR_18 < 1) {
    VAR_18 = 1;
  }

  if (VAR_18 <= VAR_16 && VAR_16 < VAR_10) {
    VAR_18 = VAR_16 + 1;
  }
  FUNC_6 (3, "min_priority = %d\n", VAR_18);

  while (VAR_2) {
    FUNC_6 (3, "item_id = %lld\n", VAR_1[1]->cur->item_id);
    FUNC_0 (VAR_1[1]->cur);
    if (VAR_1[1]->cur != VAR_17) {
      if (VAR_17 != ((void*)0) && VAR_12 >= VAR_18 && VAR_14 == VAR_16) {
        if (!VAR_7 || VAR_12 == VAR_13) {
          VAR_15 = 6 - (VAR_10 - VAR_12);
          if (VAR_10 == VAR_12) {
            int VAR_19 = 3 - (VAR_12 - VAR_13);
            if (VAR_19 < 0) { VAR_19 = 0; }
            VAR_15 += VAR_19;
          }
          FUNC_5 (VAR_17, VAR_15, &VAR_11);
        }
      }
      VAR_17 = VAR_1[1]->cur;
      VAR_12 = 1;
      VAR_13 = VAR_1[1]->cur_y & 1;
      VAR_14 = VAR_1[1]->tag_word;
    } else {
      VAR_12++;
      VAR_13 += VAR_1[1]->cur_y & 1;
      VAR_14 += VAR_1[1]->tag_word;
    }
    FUNC_1 (VAR_1[1]);
    FUNC_4 ();
  }
  if (VAR_17 != ((void*)0) && VAR_12 >= VAR_18 && VAR_14 == VAR_16) {
    if (!VAR_7 || VAR_12 == VAR_13) {
      VAR_15 = 6 - (VAR_10 - VAR_12);
      if (VAR_10 == VAR_12) {
        int VAR_20 = 3 - (VAR_12 - VAR_13);
        if (VAR_20 < 0) { VAR_20 = 0; }
        VAR_15 += VAR_20;
      }
      FUNC_5 (VAR_17, VAR_15, &VAR_11);
    }
  }
}
