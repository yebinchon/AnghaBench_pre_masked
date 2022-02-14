
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int y; int item; struct TYPE_6__* right; } ;
typedef TYPE_1__ tree_t ;
struct TYPE_7__ {int sp; int* Bt; int cur0; int cur_y; TYPE_1__** TS; } ;
typedef TYPE_2__ iheap_en_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3 (iheap_en_t *VAR_1) {
  int VAR_2 = VAR_1->sp;
  tree_t *VAR_3;



  FUNC_0 (VAR_1->cur0 && VAR_2 >= 0);

  VAR_3 = VAR_1->TS[VAR_2];

  do {
    if (!VAR_3->right) {
      VAR_2 = VAR_1->Bt[VAR_2];
      if (VAR_2 < 0) {
        break;
      }
      VAR_3 = VAR_1->TS[VAR_2];
    } else {
      FUNC_0 (VAR_2 < VAR_0-1);
      VAR_1->TS[++VAR_2] = VAR_3->right;
      VAR_1->Bt[VAR_2] = VAR_1->Bt[VAR_2-1];
      VAR_1->sp = VAR_2;

      if (FUNC_1(VAR_1) != 0) {
        VAR_2 = -1;
        break;
      }
      VAR_2 = VAR_1->sp;
      VAR_3 = VAR_1->TS[VAR_2];
    }
    VAR_1->cur0 = VAR_3->item;
    VAR_1->cur_y = VAR_3->y;
  } while (0);



  if (VAR_2 < 0) {
    VAR_1->sp = -1;
    VAR_1->cur0 = 0;
    return FUNC_2 (VAR_1);
  }

  VAR_1->sp = VAR_2;

  return FUNC_2 (VAR_1);
}
