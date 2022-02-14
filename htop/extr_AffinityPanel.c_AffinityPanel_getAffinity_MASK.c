
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ProcessList ;
typedef int Panel ;
typedef int CheckItem ;
typedef int Affinity ;


 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

Affinity* FUNC_5(Panel* VAR_0, ProcessList* VAR_1) {
   Affinity* VAR_2 = FUNC_1(VAR_1);
   int VAR_3 = FUNC_4(VAR_0);
   for (int VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
      if (FUNC_2((CheckItem*)FUNC_3(VAR_0, VAR_4)))
         FUNC_0(VAR_2, VAR_4);
   }
   return VAR_2;
}
