
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int x; int y; } ;
typedef TYPE_1__ shmap_pair_ll_int ;
typedef int ll ;
struct TYPE_8__ {int y; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,...) ;
 int VAR_0 ;
 int FUNC_2 (char*,...) ;
 TYPE_5__* FUNC_3 (int *,TYPE_1__) ;
 int FUNC_4 (int *,TYPE_1__) ;
 TYPE_1__* FUNC_5 (int *,TYPE_1__) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;

int FUNC_7 (void) {
  FUNC_6 (&VAR_0);

  char VAR_2[50];
  int VAR_3 = 0;
  while (FUNC_2 ("%s", VAR_2) == 1) {
    VAR_3++;
    if (VAR_3 % 1000 == 0) {
      FUNC_1 (VAR_1, "%d\n", VAR_3);
    }
    ll VAR_4;
    int VAR_5;
    if (VAR_2[0] == 's') {
      FUNC_2 ("%lld%d", &VAR_4, &VAR_5);

      shmap_pair_ll_int VAR_6;
      VAR_6.x = VAR_4;
      FUNC_3 (&VAR_0, VAR_6)->y = VAR_5;
    } else if (VAR_2[0] == 'd') {
      FUNC_2 ("%lld", &VAR_4);





      shmap_pair_ll_int VAR_7;
      VAR_7.x = VAR_4;
      FUNC_4 (&VAR_0, VAR_7);





    } else if (VAR_2[0] == 'g') {
      FUNC_2 ("%lld%d", &VAR_4, &VAR_5);

      shmap_pair_ll_int VAR_8, *VAR_9;
      VAR_8.x = VAR_4;
      VAR_9 = FUNC_5 (&VAR_0, VAR_8);
      int VAR_10 = -1;
      if (VAR_9 != ((void*)0)) {
        VAR_10 = VAR_9->y;
      }
      if (VAR_5 != VAR_10) {
        FUNC_1 (VAR_1, "%d vs %d\n", VAR_5, VAR_10);
      }
      FUNC_0 (VAR_5 == VAR_10);
    }



    int VAR_11;
    FUNC_2 ("%d", &VAR_11);

  }
  return 0;
}
