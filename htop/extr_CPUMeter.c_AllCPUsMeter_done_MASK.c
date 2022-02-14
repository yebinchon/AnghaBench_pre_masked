
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ drawData; } ;
typedef int Object ;
typedef TYPE_1__ Meter ;


 int FUNC_0 (TYPE_1__*,int*,int*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(Meter* VAR_0) {
   Meter** VAR_1 = (Meter**) VAR_0->drawData;
   int VAR_2, VAR_3;
   FUNC_0(VAR_0, &VAR_2, &VAR_3);
   for (int VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
      FUNC_1((Object*)VAR_1[VAR_4]);
}
