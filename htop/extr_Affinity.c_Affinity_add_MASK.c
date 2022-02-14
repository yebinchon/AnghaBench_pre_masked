
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int used; int size; int* cpus; } ;
typedef TYPE_1__ Affinity ;


 int* FUNC_0 (int*,int) ;

void FUNC_1(Affinity* VAR_0, int VAR_1) {
   if (VAR_0->used == VAR_0->size) {
      VAR_0->size *= 2;
      VAR_0->cpus = FUNC_0(VAR_0->cpus, sizeof(int) * VAR_0->size);
   }
   VAR_0->cpus[VAR_0->used] = VAR_1;
   VAR_0->used++;
}
