
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int root; } ;
struct TYPE_12__ {TYPE_1__ sugg; } ;
typedef TYPE_2__ user ;
struct TYPE_13__ {int y; int x; int r; int l; } ;
typedef TYPE_3__ trp_node ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (TYPE_2__*,int,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (TYPE_2__*) ;

int FUNC_10 (int VAR_3, int VAR_4, int VAR_5, int *VAR_6) {
  user *VAR_7 = FUNC_1 (VAR_3);
  int VAR_8 = FUNC_7 (VAR_3);

  if (VAR_4 > VAR_0) {
    VAR_4 = VAR_0;
  }

  if (VAR_7 == ((void*)0)) {
    VAR_6[0] = 0;
    return 0;
  }

  VAR_5 *= 4;
  if (VAR_5 < 4) {
    VAR_5 = 4;
  }

  FUNC_6 (VAR_7, VAR_8, VAR_1);



  if (!FUNC_9 (VAR_7)) {
    return -2;
  }

  FUNC_2 (VAR_7);
  FUNC_0 (VAR_7);

  FUNC_5 ();
  int VAR_9 = 0;

  FUNC_3 (VAR_7->sugg.root);
  while (VAR_2 && VAR_4) {
    trp_node *VAR_10 = FUNC_4();

    if ((VAR_10->y >> 16) < VAR_5) {

      break;
    }

    if (!FUNC_8 (VAR_7, VAR_10->x)) {
      VAR_6[VAR_9 * 2 + 1] = VAR_10->x;
      VAR_6[VAR_9 * 2 + 2] = VAR_10->y >> 16;
      VAR_9++;

      VAR_4--;
    }
    FUNC_3 (VAR_10->l);
    FUNC_3 (VAR_10->r);
  }

  VAR_6[0] = VAR_9;

  return 1;
}
