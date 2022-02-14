
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int root; } ;
struct TYPE_12__ {TYPE_1__ s; } ;
typedef TYPE_2__ subscribers ;
struct TYPE_13__ {int x; } ;
typedef TYPE_3__ pli ;
typedef int ll ;
struct TYPE_14__ {int y; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int,TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 () ;
 TYPE_2__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int,int,int,char*,int,TYPE_3__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_6 (int ,TYPE_4__*,int ) ;

void FUNC_7 (ll VAR_7, int VAR_8, int VAR_9, int VAR_10, char *VAR_11, int VAR_12) {
  subscribers *VAR_13 = FUNC_4 (VAR_7, 0);


  if (VAR_13 == ((void*)0)) {
    return;
  }

  VAR_10--;

  int VAR_14 = FUNC_6 (VAR_13->s.root, VAR_5, VAR_0), VAR_15 = 0, VAR_16, VAR_17, VAR_18 = 0;
  for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
    if ((VAR_5[VAR_16].y & VAR_8) == VAR_9) {
      VAR_5[VAR_15++] = VAR_5[VAR_16];
    }
  }

  pli *VAR_19 = VAR_6;
  FUNC_1 (VAR_5, VAR_15, VAR_19);





  if (VAR_10 == 0) {
    FUNC_0 (VAR_4);
  }
  FUNC_0 (VAR_2);
  VAR_3 += VAR_15;

  for (VAR_16 = VAR_17 = 0; VAR_16 <= VAR_15; VAR_16++) {
    if (VAR_16 == VAR_15 || FUNC_2 (VAR_19[VAR_16].x) % VAR_1 != FUNC_2 (VAR_19[VAR_17].x) % VAR_1 ||
        VAR_16 - VAR_17 > 50000) {

      VAR_18 = 1;
      FUNC_5 (VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_19 + VAR_17, VAR_16 - VAR_17);
      VAR_17 = VAR_16;
    }
  }

  if (VAR_18) {
    FUNC_3();
  }
}
