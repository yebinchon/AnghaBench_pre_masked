
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int total; int * values; } ;
typedef TYPE_1__ Meter ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(Meter* VAR_0, char* VAR_1, int VAR_2) {
   int VAR_3;
   FUNC_1(VAR_0);

   VAR_3 = FUNC_0(VAR_1, VAR_0->values[0], VAR_2);
   VAR_1 += VAR_3;
   if ((VAR_2 -= VAR_3) > 0) {
      *VAR_1++ = '/';
      VAR_2--;
      FUNC_0(VAR_1, VAR_0->total, VAR_2);
   }
}
