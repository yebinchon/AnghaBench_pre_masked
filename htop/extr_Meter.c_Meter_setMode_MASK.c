
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int mode; int h; int draw; int * drawData; } ;
struct TYPE_9__ {int h; int draw; } ;
typedef TYPE_1__ MeterMode ;
typedef TYPE_2__ Meter ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_1__** VAR_2 ;
 int FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;

void FUNC_6(Meter* VAR_3, int VAR_4) {
   if (VAR_4 > 0 && VAR_4 == VAR_3->mode)
      return;
   if (!VAR_4)
      VAR_4 = 1;
   FUNC_4(VAR_4 < VAR_1);
   if (FUNC_0(VAR_3) == VAR_0) {
      VAR_3->draw = FUNC_1(VAR_3);
      if (FUNC_3(VAR_3))
         FUNC_2(VAR_3, VAR_4);
   } else {
      FUNC_4(VAR_4 >= 1);
      FUNC_5(VAR_3->drawData);
      VAR_3->drawData = ((void*)0);

      MeterMode* VAR_5 = VAR_2[VAR_4];
      VAR_3->draw = VAR_5->draw;
      VAR_3->h = VAR_5->h;
   }
   VAR_3->mode = VAR_4;
}
