
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int rating ;
struct TYPE_4__ {long long x; scalar_t__ y; } ;
typedef TYPE_1__ hmap_pair_ll_int ;
struct TYPE_5__ {int y; } ;


 scalar_t__ VAR_0 ;
 long long VAR_1 ;
 int FUNC_0 (int ) ;
 int* FUNC_1 (int*,int,int) ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_2 ;
 TYPE_2__* FUNC_3 (int *,TYPE_1__) ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (char*) ;
 int* VAR_11 ;
 int FUNC_5 (int*,char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_12 ;

int FUNC_7 (char *VAR_13, int *VAR_14, int VAR_15) {
  long long VAR_16 = 0;
  int VAR_17;
  for (VAR_17 = 0; VAR_14[VAR_17]; VAR_17++) {
    VAR_16 = VAR_16 * VAR_1 + VAR_14[VAR_17];
  }

  VAR_16 += VAR_0;
  hmap_pair_ll_int VAR_18;
  VAR_18.x = VAR_16;
  VAR_18.y = 0;
  int *VAR_19 = &(FUNC_3 (&VAR_2, VAR_18)->y);

  if (VAR_3 + 3 > VAR_4) {
    int VAR_20 = VAR_4 * 2 + 3;
    VAR_5 = FUNC_1 (VAR_5, sizeof (int) * VAR_20, sizeof (int) * VAR_4);
    VAR_11 = FUNC_1 (VAR_11, sizeof (int) * VAR_20, sizeof (int) * VAR_4);
    VAR_9 = FUNC_1 (VAR_9, sizeof (rating) * VAR_20, sizeof (rating) * VAR_4);
    VAR_9[0] = 0;
    VAR_4 = VAR_20;

    FUNC_0 (VAR_5 != ((void*)0));
    FUNC_0 (VAR_11 != ((void*)0));
    FUNC_0 (VAR_9 != ((void*)0));
  }

  if (*VAR_19 == 0) {
    *VAR_19 = ++VAR_3;

    int VAR_21 = FUNC_6 (VAR_13);
    if (VAR_7 + VAR_21 + 3 > VAR_8) {
      int VAR_22 = VAR_8 * 2 + VAR_21 + 3;
      VAR_6 = FUNC_1 (VAR_6, sizeof (char) * VAR_22, sizeof (char) * VAR_8);
      VAR_8 = VAR_22;

      FUNC_0 (VAR_6 != ((void*)0));
    }

    VAR_5[VAR_3] = VAR_7;
    if (VAR_12) {
      VAR_11[VAR_3] = FUNC_4 (VAR_13);
    } else {
      VAR_11[VAR_3] = VAR_3;
    }
    if (VAR_15) {
      FUNC_2 (VAR_10, "<%s>\n", VAR_13);
    }

    FUNC_5 (VAR_6 + VAR_7, VAR_13);
    VAR_7 += VAR_21 + 1;
    VAR_9[VAR_3] = 0;
  }

  return *VAR_19;
}
