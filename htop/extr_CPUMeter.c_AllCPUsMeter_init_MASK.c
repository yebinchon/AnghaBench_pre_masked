
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int h; } ;
struct TYPE_10__ {int cpuCount; } ;
struct TYPE_9__ {size_t mode; int h; TYPE_3__* pl; scalar_t__ drawData; } ;
typedef int MeterClass ;
typedef TYPE_1__ Meter ;


 int FUNC_0 (TYPE_1__*,int*,int*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_5__** VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_3__*,int,int *) ;
 scalar_t__ FUNC_5 (int ,char) ;
 scalar_t__ FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(Meter* VAR_3) {
   int VAR_4 = VAR_3->pl->cpuCount;
   if (!VAR_3->drawData)
      VAR_3->drawData = FUNC_6(VAR_4, sizeof(Meter*));
   Meter** VAR_5 = (Meter**) VAR_3->drawData;
   int VAR_6, VAR_7;
   FUNC_0(VAR_3, &VAR_6, &VAR_7);
   for (int VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
      if (!VAR_5[VAR_8])
         VAR_5[VAR_8] = FUNC_4(VAR_3->pl, VAR_6+VAR_8+1, (MeterClass*) FUNC_1(VAR_1));
      FUNC_2(VAR_5[VAR_8]);
   }
   if (VAR_3->mode == 0)
      VAR_3->mode = VAR_0;
   int VAR_9 = VAR_2[VAR_3->mode]->h;
   if (FUNC_5(FUNC_3(VAR_3), '2'))
      VAR_3->h = VAR_9 * ((VAR_7+1) / 2);
   else
      VAR_3->h = VAR_9 * VAR_7;
}
