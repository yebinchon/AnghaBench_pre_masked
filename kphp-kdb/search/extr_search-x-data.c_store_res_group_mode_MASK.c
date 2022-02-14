
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct item_with_rating {double V; struct item* I; } ;
struct item {int dummy; } ;
struct TYPE_6__ {int size; scalar_t__ filled; scalar_t__ n; TYPE_1__* h; } ;
struct TYPE_5__ {int value; long long key; } ;


 int VAR_0 ;
 struct item** VAR_1 ;
 scalar_t__* VAR_2 ;
 size_t* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 long long FUNC_2 (struct item*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,long long,int*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (struct item_with_rating*,int,int) ;
 TYPE_2__ VAR_8 ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;

void FUNC_8 (struct item *VAR_9, double VAR_10) {
  if (VAR_5 == 1) {
    int VAR_11 = 2 * VAR_0;
    if (VAR_11 < 600) { VAR_11 = 600; }
    if (!FUNC_4 (&VAR_8, VAR_11)) {
      FUNC_6 ("Not enough memory for allocate hash table\n");
      FUNC_1 (1);
    }
  }

  long long VAR_12 = FUNC_2 (VAR_9);
  if (!VAR_12) {
    VAR_7++;
  }

  struct item_with_rating VAR_13, *VAR_14 = &VAR_13;
  VAR_14->V = VAR_10;


  if (VAR_4 == VAR_0 && VAR_14->V >= VAR_2[1]) { return; }

  int VAR_15 = VAR_8.size;
  VAR_14->I = VAR_9;



  if (VAR_12 && FUNC_3 (&VAR_8, VAR_12, &VAR_15)) {

    int VAR_16 = VAR_8.h[VAR_15].value;
    if (VAR_16 != -1) {

      FUNC_0 (VAR_16 >= 1 && VAR_16 <= VAR_4);
      if (VAR_14->V < VAR_2[VAR_16]) {

        FUNC_5 (VAR_14, VAR_16, VAR_15);
      }
    } else {

      VAR_8.h[VAR_3[1]].value = -1;
      FUNC_5 (VAR_14, 1, VAR_15);
    }
  } else {

    VAR_6++;
    if (VAR_12) {
      if (VAR_8.filled >= VAR_8.n) {
        FUNC_7 ();
        FUNC_3 (&VAR_8, VAR_12, &VAR_15);
      }
      VAR_8.filled++;
      VAR_8.h[VAR_15].key = VAR_12;
    }
    if (VAR_4 == VAR_0) {
      VAR_8.h[VAR_3[1]].value = -1;
      FUNC_5 (VAR_14, 1, VAR_15);
    } else {
      int VAR_17 = ++VAR_4;
      while (VAR_17 > 1) {
        int VAR_18 = (VAR_17 >> 1);
        if (VAR_2[VAR_18] >= VAR_14->V) { break; }
        VAR_1[VAR_17] = VAR_1[VAR_18];
        VAR_2[VAR_17] = VAR_2[VAR_18];
        VAR_8.h[VAR_3[VAR_17] = VAR_3[VAR_18]].value = VAR_17;
        VAR_17 = VAR_18;
      }
      VAR_1[VAR_17] = VAR_14->I;
      VAR_2[VAR_17] = VAR_14->V;
      VAR_8.h[VAR_3[VAR_17] = VAR_15].value = VAR_17;
    }
  }
}
