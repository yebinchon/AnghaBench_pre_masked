
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ h; int (* draw ) (TYPE_3__*,int,int,int) ;TYPE_2__* pl; scalar_t__ drawData; } ;
struct TYPE_9__ {TYPE_1__* settings; } ;
struct TYPE_8__ {scalar_t__ headerMargin; } ;
typedef TYPE_3__ Meter ;


 int FUNC_0 (TYPE_3__*,int*,int*) ;
 int FUNC_1 (TYPE_3__*,int,int,int) ;
 int FUNC_2 (TYPE_3__*,int,int,int) ;

__attribute__((used)) static void FUNC_3(Meter* VAR_0, int VAR_1, int VAR_2, int VAR_3) {
   Meter** VAR_4 = (Meter**) VAR_0->drawData;
   int VAR_5, VAR_6;
   int VAR_7 = VAR_0->pl->settings->headerMargin ? 2 : 0;
   FUNC_0(VAR_0, &VAR_5, &VAR_6);
   int VAR_8 = (VAR_6+1)/2;
   int VAR_9 = VAR_2;
   for (int VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
      VAR_4[VAR_10]->draw(VAR_4[VAR_10], VAR_1, VAR_2, (VAR_3-VAR_7)/2);
      VAR_2 += VAR_4[VAR_10]->h;
   }
   VAR_2 = VAR_9;
   for (int VAR_11 = VAR_8; VAR_11 < VAR_6; VAR_11++) {
      VAR_4[VAR_11]->draw(VAR_4[VAR_11], VAR_1+(VAR_3-1)/2+1+(VAR_7/2), VAR_2, (VAR_3-VAR_7)/2);
      VAR_2 += VAR_4[VAR_11]->h;
   }
}
