
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ h; int (* draw ) (TYPE_1__*,int,int,int) ;scalar_t__ drawData; } ;
typedef TYPE_1__ Meter ;


 int FUNC_0 (TYPE_1__*,int*,int*) ;
 int FUNC_1 (TYPE_1__*,int,int,int) ;

__attribute__((used)) static void FUNC_2(Meter* VAR_0, int VAR_1, int VAR_2, int VAR_3) {
   Meter** VAR_4 = (Meter**) VAR_0->drawData;
   int VAR_5, VAR_6;
   FUNC_0(VAR_0, &VAR_5, &VAR_6);
   for (int VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
      VAR_4[VAR_7]->draw(VAR_4[VAR_7], VAR_1, VAR_2, VAR_3);
      VAR_2 += VAR_4[VAR_7]->h;
   }
}
