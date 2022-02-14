
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ size; } ;
struct TYPE_7__ {TYPE_3__ s; } ;
typedef TYPE_1__ subscribers ;
struct TYPE_8__ {int x; } ;
typedef TYPE_2__ pli ;
typedef int ll ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*,int ) ;

int FUNC_3 (ll VAR_1, pli *VAR_2, int VAR_3) {
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
    subscribers *VAR_5 = FUNC_1 (VAR_2[VAR_4].x, 0);
    if (VAR_5 != ((void*)0)) {
      VAR_0 += VAR_5->s.size;
      FUNC_2 (&VAR_5->s, VAR_1);
      VAR_0 -= VAR_5->s.size;

      if (VAR_5->s.size == 0) {
        FUNC_0 (VAR_5);
      }

    }
  }

  return 1;
}
