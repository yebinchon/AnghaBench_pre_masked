
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ size; } ;
typedef TYPE_1__ treap ;
typedef int pli ;
typedef int ll ;
struct TYPE_9__ {int x; int y; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,int,TYPE_4__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,char*,int,int ) ;
 int VAR_11 ;
 int FUNC_5 () ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 () ;
 TYPE_4__* VAR_14 ;
 int FUNC_7 (int ,TYPE_4__*,int,int,int) ;
 int FUNC_8 (TYPE_1__*,int ,int ,int ) ;
 int VAR_15 ;
 int FUNC_9 (TYPE_1__*,int ) ;

void FUNC_10 (ll VAR_16, treap *VAR_17, pli *VAR_18, int VAR_19, int VAR_20, int VAR_21) {
  if (VAR_19 == 0) {
    return;
  }

  if (VAR_19 > VAR_1) {
    FUNC_4 (VAR_0, 0, "Too many subscribers %d [id = %lld]\n", VAR_19, VAR_16);
    VAR_19 = VAR_1;
  }
  FUNC_2 (VAR_18, VAR_19, VAR_14);

  FUNC_0 (VAR_12);
  FUNC_1 (VAR_10, VAR_19);
  VAR_13 += VAR_19;

  if (VAR_20) {
    if (VAR_21) {
       FUNC_0 (VAR_4);
       VAR_5 += VAR_19;
    } else {
       FUNC_0 (VAR_2);
       VAR_3 += VAR_19;
    }
  } else {
    if (VAR_21) {
       FUNC_0 (VAR_8);
       VAR_9 += VAR_19;
    } else {
       FUNC_0 (VAR_6);
       VAR_7 += VAR_19;
    }
  }

  int VAR_22, VAR_23, VAR_24 = 0;
  for (VAR_22 = VAR_23 = 0; VAR_22 <= VAR_19; VAR_22++) {
    if (VAR_22 < VAR_19) {


      if (VAR_17 != ((void*)0)) {
        VAR_15 += VAR_17->size;


        if (VAR_20) {
          FUNC_8 (VAR_17, VAR_14[VAR_22].x, VAR_14[VAR_22].y, FUNC_6());
        } else {
          FUNC_9 (VAR_17, VAR_14[VAR_22].x);
        }

        VAR_15 -= VAR_17->size;
      }
    }
    if (VAR_22 == VAR_19 || FUNC_3 (VAR_14[VAR_22].x) % VAR_11 != FUNC_3 (VAR_14[VAR_23].x) % VAR_11) {
      FUNC_7 (VAR_16, VAR_14 + VAR_23, VAR_22 - VAR_23, VAR_20, VAR_21);
      VAR_24 = 1;
      VAR_23 = VAR_22;
    }
  }
  if (VAR_24) {
    FUNC_5();
  }
}
