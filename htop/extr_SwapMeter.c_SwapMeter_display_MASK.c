
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * values; int total; } ;
typedef int RichString ;
typedef int Object ;
typedef TYPE_1__ Meter ;


 int * VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int ,char*) ;

__attribute__((used)) static void FUNC_3(Object* VAR_3, RichString* VAR_4) {
   char VAR_5[50];
   Meter* VAR_6 = (Meter*)VAR_3;
   FUNC_2(VAR_4, VAR_0[VAR_1], ":");
   FUNC_0(VAR_5, VAR_6->total, 50);
   FUNC_1(VAR_4, VAR_0[VAR_2], VAR_5);
   FUNC_0(VAR_5, VAR_6->values[0], 50);
   FUNC_1(VAR_4, VAR_0[VAR_1], " used:");
   FUNC_1(VAR_4, VAR_0[VAR_2], VAR_5);
}
