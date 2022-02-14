
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int h; } ;
struct TYPE_7__ {int mode; int h; scalar_t__ drawData; } ;
typedef TYPE_1__ Meter ;


 int FUNC_0 (TYPE_1__*,int*,int*) ;
 TYPE_4__** VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (int ,char) ;

__attribute__((used)) static void FUNC_4(Meter* VAR_1, int VAR_2) {
   Meter** VAR_3 = (Meter**) VAR_1->drawData;
   VAR_1->mode = VAR_2;
   int VAR_4 = VAR_0[VAR_2]->h;
   int VAR_5, VAR_6;
   FUNC_0(VAR_1, &VAR_5, &VAR_6);
   for (int VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
      FUNC_2(VAR_3[VAR_7], VAR_2);
   }
   if (FUNC_3(FUNC_1(VAR_1), '2'))
      VAR_1->h = VAR_4 * ((VAR_6+1) / 2);
   else
      VAR_1->h = VAR_4 * VAR_6;
}
