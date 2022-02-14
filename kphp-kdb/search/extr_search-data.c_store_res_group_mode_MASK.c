
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct item_with_rating {int V; int * I; } ;
typedef int item_t ;
struct TYPE_6__ {int size; scalar_t__ filled; scalar_t__ n; TYPE_1__* h; } ;
struct TYPE_5__ {int value; long long key; } ;


 int VAR_0 ;
 int ** VAR_1 ;
 size_t* VAR_2 ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 long long FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,long long const,int*) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (struct item_with_rating*,int,int) ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;
 int FUNC_8 () ;
 int VAR_10 ;

void FUNC_9 (item_t *VAR_11, int VAR_12) {
  if (VAR_5 == 1) {
    int VAR_13 = 2 * VAR_0;
    if (VAR_13 < 600) { VAR_13 = 600; }
    if (!FUNC_6 (&VAR_8, VAR_13)) {
      FUNC_4 (VAR_10, "Not enough memory for allocate hash table\n");
      FUNC_2 (2);
    }
  }

  const long long VAR_14 = FUNC_3 (VAR_11);

  if (!VAR_14) {
    VAR_7++;
  }

  struct item_with_rating VAR_15, *VAR_16 = &VAR_15;
  VAR_16->V = FUNC_1 (VAR_11, VAR_12);

  if (VAR_9 == 2) {
    VAR_16->V = -(VAR_16->V + 1);
  }


  if (VAR_4 == VAR_0 && VAR_16->V >= VAR_3[1]) { return; }

  int VAR_17 = VAR_8.size;
  VAR_16->I = VAR_11;



  if (VAR_14 && FUNC_5 (&VAR_8, VAR_14, &VAR_17)) {

    int VAR_18 = VAR_8.h[VAR_17].value;
    if (VAR_18 != -1) {

      FUNC_0 (VAR_18 >= 1 && VAR_18 <= VAR_4);
      if (VAR_16->V < VAR_3[VAR_18]) {

        FUNC_7 (VAR_16, VAR_18, VAR_17);
      }
    } else {

      VAR_8.h[VAR_2[1]].value = -1;
      FUNC_7 (VAR_16, 1, VAR_17);
    }
  } else {

    VAR_6++;
    if (VAR_14) {
      if (VAR_8.filled >= VAR_8.n) {
        FUNC_8 ();
        FUNC_5 (&VAR_8, VAR_14, &VAR_17);
      }
      VAR_8.filled++;
      VAR_8.h[VAR_17].key = VAR_14;
    }
    if (VAR_4 == VAR_0) {
      VAR_8.h[VAR_2[1]].value = -1;
      FUNC_7 (VAR_16, 1, VAR_17);
    } else {
      int VAR_19 = ++VAR_4;
      while (VAR_19 > 1) {
        int VAR_20 = (VAR_19 >> 1);
        if (VAR_3[VAR_20] >= VAR_16->V) { break; }
        VAR_1[VAR_19] = VAR_1[VAR_20];
        VAR_3[VAR_19] = VAR_3[VAR_20];
        VAR_8.h[VAR_2[VAR_19] = VAR_2[VAR_20]].value = VAR_19;
        VAR_19 = VAR_20;
      }
      VAR_1[VAR_19] = VAR_16->I;
      VAR_3[VAR_19] = VAR_16->V;
      VAR_8.h[VAR_2[VAR_19] = VAR_17].value = VAR_19;
    }
  }
}
