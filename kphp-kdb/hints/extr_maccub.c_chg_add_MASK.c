
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int trp_node_ptr ;
struct TYPE_3__ {int size; int root; } ;
typedef TYPE_1__ treap ;
typedef int* changes ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int) ;
 int* FUNC_2 (int) ;
 int* FUNC_3 (int) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (int*,int) ;

void FUNC_8 (changes *VAR_0, int VAR_1) {
  FUNC_0 (VAR_1 > 0);

  changes VAR_2 = *VAR_0;

  int *VAR_3 = 0;

  if ((long)VAR_2 < 0) {
    if ((long)VAR_2 == -VAR_1) {
      return;
    } else if ((-(long)VAR_2) == (VAR_1 ^ 1)) {
      VAR_2 = (int *)((long)-VAR_1);
    } else {
      int VAR_4 = -(long)VAR_2;
      VAR_2 = FUNC_2 (sizeof (int) * 3);

      FUNC_0 (VAR_2 != ((void*)0));

      VAR_2[0] = 2;
      if (VAR_1 < VAR_4) {
        VAR_2[1] = VAR_4;
        VAR_2[2] = VAR_1;
      } else {
        VAR_2[1] = VAR_1;
        VAR_2[2] = VAR_4;
      }
    }
  } else

  if (VAR_2) {
    if (VAR_2[0] > 0) {
      int VAR_5 = VAR_2[0], VAR_6 = 1;
      while (VAR_6 <= VAR_5 && (VAR_2[VAR_6] & -2) > (VAR_1 & -2)) {
        VAR_6++;
      }
      if (VAR_6 <= VAR_5 && VAR_2[VAR_6] == VAR_1) {
        return;
      } else if (VAR_6 <= VAR_5 && VAR_2[VAR_6] == (VAR_1 ^ 1)) {
        VAR_2[VAR_6] = VAR_1;
        return;
      }
      int VAR_7 = VAR_6;
      while (VAR_7 <= VAR_5 && VAR_2[VAR_7]) {
        VAR_7++;
      }



      if (VAR_7 > VAR_5) {
        if (VAR_5 == 8) {
          trp_node_ptr VAR_8 = FUNC_7 ((int *)VAR_2 + 1, VAR_5);
          FUNC_1 (VAR_2, sizeof (int) * (VAR_5 + 1));
          VAR_2 = FUNC_2 (sizeof (treap));


          ((treap *)(VAR_2))->size = -VAR_5;
          ((treap *)(VAR_2))->root = VAR_8;
        } else {
          VAR_3 = FUNC_3 (sizeof (int) * (VAR_5 * 2 + 1));

          FUNC_0 (VAR_3 != ((void*)0));

          VAR_3[0] = VAR_5 * 2;
          FUNC_4 (VAR_3 + 1, VAR_2 + 1, sizeof (int) * VAR_5);
          FUNC_1 (VAR_2, sizeof (int) * (VAR_5 + 1));
          VAR_5 *= 2;
          VAR_2 = VAR_3;
        }
      }

      if (VAR_7 <= VAR_5) {
        while (VAR_7 != VAR_6) {
          VAR_2[VAR_7] = VAR_2[VAR_7 - 1];
          VAR_7--;
        }
        VAR_2[VAR_7] = VAR_1;
      }
    }

    if (VAR_2[0] < 0) {
      FUNC_6 ((treap *)(VAR_2), VAR_1, FUNC_5());
    }

  } else {

    VAR_2 = (changes)((long)-VAR_1);





  }

  *VAR_0 = VAR_2;
}
